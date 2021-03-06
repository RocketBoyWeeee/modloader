/*
 *  Copyright (C) 2014 Denilson das Merc�s Amorim (aka LINK/2012)
 *  Licensed under the Boost Software License v1.0 (http://opensource.org/licenses/BSL-1.0)
 *
 */
#pragma once
#include <utility>
#include <datalib/data_info.hpp>

namespace datalib {

/*
 *  data_info<> specialization for 'std::pair<T1, T2>'
 */
template<typename T1, typename T2>
struct data_info<std::pair<T1, T2>> : data_info_base
{
    static const char separator = 0;    // manual separator

    // The complexity of such a tuple is the sum of the complexity of all it's types
    static const int complexity = (data_info<T1>::complexity + data_info<T2>::complexity);

    // Performs cheap precomparision
    static bool precompare(const std::pair<T1, T2>& a, const std::pair<T1, T2>& b)
    {
        return (datalib::precompare(a.first, b.first) && datalib::precompare(a.second, b.second));
    }
};

} // namespace datalib
