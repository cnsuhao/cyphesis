// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2003 Alistair Riddoch
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

#include "common/utility.h"

#include <Atlas/Objects/RootOperation.h>

#include <cassert>

int main()
{
    Atlas::Objects::Operation::RootOperation op;
    Atlas::Message::MapType map;

    assert(utility::Object_asOperation(map, op) == false);

    map["objtype"] = "op";
    map["parents"] = Atlas::Message::ListType(1, "root_operation");

    assert(utility::Object_asOperation(map, op) == true);

    return 0;
}
