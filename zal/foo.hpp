#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

auto it = ret_v.end();
std::for_each(people.begin(), people.end(),
[&it](Human & h) { h.birthday(); *(--it) = (h.isMonster() ? 'n' : 'y'); });
    return ret_v;
}
