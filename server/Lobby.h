// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2000,2001 Alistair Riddoch

#ifndef SERVER_LOBBY_H
#define SERVER_LOBBY_H

#include "OOG_Thing.h"
#include "Account.h"

class Lobby : public OOGThing {
  private:
    adict_t accounts;
  public:
    inline void addObject(Account * a) {
        accounts[a->fullid] = a;
    }
    inline void delObject(Account * a) {
        accounts.erase(a->fullid);
    }
    inline const adict_t & getAccounts() const {
        return accounts;
    }

    virtual oplist operation(const RootOperation & op);

    virtual void addToObject(Atlas::Message::Object::MapType &) const;
};

#endif // SERVER_LOBBY_H
