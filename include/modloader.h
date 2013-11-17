/* 
 * San Andreas modloader
 * Copyright (C) 2013  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under GNU GPL v3, see LICENSE at top level directory.
 * 
 *  Modloader plugin interface
 *      The interface is extremly simple, you don't even have to link with modloader.
 *      The only thing you are requiered to do is export a 'GetPluginData' function (see below for the prototype).
 *      Put your plugin at '/modloader/.plugins' folder
 * 
 */

/*
        NOTE: If there's no @return on the specification, 
        the function shall return 0 on success and 1 on failure!
*/

#ifndef MODLOADER_H
#define	MODLOADER_H
#pragma once

#include <stddef.h>

#ifdef	__cplusplus
extern "C" {
#endif

/* Version 0.1.0 */
#define MODLOADER_VERSION_MAJOR         0
#define MODLOADER_VERSION_MINOR         0
#define MODLOADER_VERSION_REVISION      0
#define MODLOADER_VERSION_ISDEV         1

    
/**************************************
 *    COMMON DATA TYPES
 **************************************/
    
/* Forwarding */
struct modloader_data;
struct modloader_plugin_data;
typedef struct modloader_data modloader_t;   
typedef struct modloader_plugin_data modloader_plugin_t; 

/*
 * modloader_file_t
 *      This structure represents a file path
 *      Please keep in mind that the content from this structure is temporary, don't rely on it, make a copy if you want something.
 */
typedef struct
{
    /*  recursion
     *      Used by the modloader core, don't touch this field
     */
    char recursion;
    char _pad[2];
    
    /*
     *  is_dir
     *          Contains 1 if the file is a directory or 0 otherwise.
     */
    char is_dir;
    
    /*
     * gamepath
     *      The full game path
     */
    const char* gamepath;
    
    /*
     * filename
     *      Filename, just it, just the filename. e.g. "file.abc"
     */
    const char* filename;
    
    /*
     *  filepath
     *      Filepath after mod folder
     *      e.g. if the file is at "/modloader/modname/somefolder/file.abc" then filepath will be "somefolder/file.abc"
     */
    const char* filepath;
    size_t      filepath_len;
    
    /*
     *  filext
     *    Filename extension (e.g. "img")
     *    Works for folders!
     */
    const char* filext;
    
    /*
     *  modname
     *      The modname
     */
    const char* modname;
    
    /*
     * modpath
     *      The modpath relative to game directory (e.g. "modloader/aaa")
     *      Normally it is the same as "modloader/@modname", but not always
     */
    const char* modpath;
    
    /*
     * modfullpath
     *      The mod full path
     */
    const char* modfullpath;
    
    /* ids for fast checking */
    unsigned int mod_id;
    unsigned int file_id;
    
    
} modloader_file_t;



/**************************************
 *    THE PLUGIN EXPORTS
 **************************************/

enum
{
    MODLOADER_YES = 0,
    MODLOADER_NO  = 1
};

enum
{
    MODLOADER_REGION_UNK   = 0,
    MODLOADER_REGION_EURO  = 1,
    MODLOADER_REGION_USA   = 2
};

typedef struct
{
    
    
} modloader_gv_t;


/*
        You have to export the function (with C naming, extern "C"):
                void GetPluginData(modloader_plugin_t* data);
        Then you shall JUST (and JUST) fill 'data' with the plugin information.
        If everything goes okay (version checking, etc), data->OnStartUp will be called...
        Note data->modloader is already set here.
*/
typedef void (*modloader_fGetPluginData)(modloader_plugin_t* data);

/*
 *  GetName
 *      Get plugin name (e.g. "X Nope Loader")
 *      @data: The plugin data   
 */
typedef const char* (*modloader_fGetName)(modloader_plugin_t* data);

/*
 *  GetVersion
 *      Get plugin version string (e.g. "1.4")
 *      This will show up once, when the plugin get loaded
 *      @data: The plugin data   
 */
typedef modloader_fGetName modloader_fGetVersion;

/*
 *  GetAuthor
 *      Get plugin author (e.g. "LINK/2012")
 *      This will show up once, when the plugin get loaded
 *      @data: The plugin data 
 */
typedef modloader_fGetName modloader_fGetAuthor;


/*
 *  OnStartUp
 *      Plugin started up, this happens before the the game engine starts.
 *      @data: The plugin shall fill 'data' parameter with it's information.
 *      @return 0 on success and 1 on failure;
 */
typedef int (*modloader_fOnStartup)(modloader_plugin_t* data);

/*
 *  OnShutdown
 *      Called when the plugin gets unloaded, this probably happens when the game closes
 *      @data: The plugin data
 *      @return 0 on success and 1 on failure;
 */
typedef int (*modloader_fOnShutdown)(modloader_plugin_t* data);


/*
 *  PosProcess
 *      Called after all files have been processed (with ProcessFile)
 *      @data: The plugin data
 *      @return: 0 on success and 1 on failure
 */
typedef int (*modloader_fPosProcess)(modloader_plugin_t* data);

/*
 * CheckFile
 *      Called to check if a specific file is to be processed by this plugin.
 *      @data: The plugin data   
 *      @return MODLOADER_YES for 'yes' and MODLOADER_NO for 'no';
 */
typedef int (*modloader_fCheckFile)(modloader_plugin_t* data, const modloader_file_t* file);

/*
 * ProcessFile
 *      Called to process a file previosly checked as 'yes'
 *      This is probably called right after CheckFile
 *      @data: The plugin data
 *      @return 0 on success and 1 on failure;
 */
typedef int (*modloader_fProcessFile)(modloader_plugin_t* data, const modloader_file_t* file);


/* ---- Interface ---- */
struct modloader_plugin_data
{
    /* Set those values to MODLOADER_VERSION_*, e.g. MODLOADER_VERSION_MAJOR. Ignore pad0! */
    /* Those values will be helpful to know if your plugin is compatible with the current version of modloader */
    char major, minor, revision, _pad0;
    
    void *pThis, *pModule;  /* this and HMODULE, read-only */
    const char *name, *author, *version;       /* should be set only by the loader, read-only */
    modloader_t* modloader; /* Modloader pointer, read-only */
    char checked, _pad1[3];
    
    /* Userdata, set it to whatever you want, you probably won't set it to anything */
    void* userdata;
    
    /* Extension table, set it to a pointer of extensions that this plugin handles */
    const char** extable;
    /* The length of the extension table (@extable) - 0 for no extension ordering */
    size_t extable_len;
    /* The plugin priority, normally this is set outside the plugin in a config file, I don't recommend you to touch this value.
     * Modloader sets this to the default priority "50"; "0" means ignore this plugin.
     */
    int priority;
    
    /* Callbacks */
    modloader_fGetName          GetName;
    modloader_fGetAuthor        GetAuthor;
    modloader_fGetVersion       GetVersion;
    modloader_fOnStartup        OnStartup;
    modloader_fOnShutdown       OnShutdown;
    modloader_fCheckFile        CheckFile;
    modloader_fProcessFile      ProcessFile;
    modloader_fPosProcess       PosProcess;
};



/**************************************
 *    THE IMPORTS
 **************************************/

/*
 * Log
 *      Logs something into the modloader log file
 */
typedef void (*modloader_fLog)(const char* logmsg, ...);

/*
 * Error
 *      Displays a message box with a error message
 *      You will probably never call this, just in case...
 *      Log may suit your needs.
 */
typedef void (*modloader_fError)(const char* errmsg, ...);


/* ---- Interface ---- */
struct modloader_data
{
    modloader_fLog              Log;
    modloader_fError            Error;
};


    
    


#ifdef	__cplusplus
}
#endif

#endif	/* MODLOADER_H */

