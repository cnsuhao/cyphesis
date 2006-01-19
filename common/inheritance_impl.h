// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2004 Alistair Riddoch
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

#error This file has been removed from the build

#ifndef COMMON_INHERITANCE_IMPL_H
#define COMMON_INHERITANCE_IMPL_H

#include "inheritance.h"

#include <Atlas/Objects/SmartPtr.h>
#include <Atlas/Objects/Operation.h>

template <class OpClass>
Operation OpFactory<OpClass>::newOperation()
{
    return OpClass();
}

template <class OpClass>
void OpFactory<OpClass>::newOperation(Operation & op)
{
    op = OpClass();
}

#endif // COMMON_INHERITANCE_IMPL_H
