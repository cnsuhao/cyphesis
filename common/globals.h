// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2001-2004 Alistair Riddoch
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

#ifndef COMMON_GLOBALS_H
#define COMMON_GLOBALS_H

#include <string>
#include <vector>

namespace varconf {
  class Config;
}

extern varconf::Config * global_conf;
extern std::string share_directory;
extern std::string etc_directory;
extern std::string var_directory;
extern std::string client_socket_name;
extern std::string slave_socket_name;
extern std::vector<std::string> rulesets;
extern bool exit_flag;
extern bool daemon_flag;
extern bool restricted_flag;
extern bool pvp_flag;
extern bool pvp_offl_flag;
extern int timeoffset;
extern int client_port_num;
extern int slave_port_num;
extern int peer_port_num;

int loadConfig(int argc, char ** argv, bool server = false);

#endif // COMMON_GLOBALS_H
