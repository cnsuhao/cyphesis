// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2000,2001 Alistair Riddoch

#ifndef RULESETS_FOOD_H
#define RULESETS_FOOD_H

#include "Thing.h"

// This is the base class for edible things. Most of the functionality
// will be common to all food, and most derived classes will probably
// be in python.


class Food : public Thing {
  public:

    Food();
    virtual ~Food();

    virtual oplist EatOperation(const Eat & op);
    virtual oplist FireOperation(const Fire & op);
};

#endif // RULESETS_FOOD_H
