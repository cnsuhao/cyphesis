// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2000,2001 Alistair Riddoch

#ifndef SERVER_WORLD_ROUTER_H
#define SERVER_WORLD_ROUTER_H

#include <sys/time.h>
#include <unistd.h>

class WorldRouter;
class ServerRouting;
class Entity;
class World;

#include "OOG_Thing.h"

class WorldRouter : public OOGThing {
  private:
    double realTime;
    opqueue operationQueue;
    elist_t objectList;
    time_t initTime;

    void addOperationToQueue(RootOperation & op, const BaseEntity *);
    RootOperation * getOperationFromQueue();
    std::string getId(std::string & name);
    const elist_t & broadcastList(const RootOperation & op) const;
    oplist operation(const RootOperation * op);
  public:
    ServerRouting & server;
    World & gameWorld;
    int nextId;
    elist_t perceptives;
    elist_t omnipresentList;
    edict_t eobjects;

    WorldRouter(ServerRouting & server);
    virtual ~WorldRouter();

    int idle();
    const double upTime() const;

    Entity * addObject(Entity * obj);
    Entity * addObject(const std::string &, const Atlas::Message::Object &,
                       const std::string & id = std::string());
    void delObject(Entity * obj);

    Entity * getObject(const std::string & fid) {
        return eobjects[fid];
    }

    Entity * findObject(const std::string & fid) {
        return eobjects[fid];
    }

    void updateTime() {
        struct timeval tv;
        gettimeofday(&tv, NULL);
        double tmp_time = (double)(tv.tv_sec - initTime) + (double)tv.tv_usec/1000000;
        realTime = tmp_time;
    }

    const double & getTime() const {
        return realTime;
    }

    virtual oplist message(RootOperation & op, const Entity * obj);
    virtual oplist message(const RootOperation & op);
    virtual oplist operation(const RootOperation & op);

    oplist lookOperation(const Look & op);
};

#endif // SERVER_WORLD_ROUTER_H
