// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2001 Alistair Riddoch

#ifndef RULESETS_SCRIPT_H
#define RULESETS_SCRIPT_H

#include <string>

#include <Atlas/Objects/Operation/RootOperation.h>

#include <common/types.h>

class Entity;

class Script {
  public:
    Script();
    virtual ~Script();
    virtual bool Operation(const std::string &,
                      const Atlas::Objects::Operation::RootOperation&, oplist&,
                      Atlas::Objects::Operation::RootOperation * sub_op=NULL);
    virtual void hook(const std::string &, Entity *);
};

#endif // RULESETS_SCRIPT_H
