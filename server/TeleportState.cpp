// Cyphesis Online RPG Server and AI Engine
// Copyright (C) 2001 Alistair Riddoch
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

#include "server/TeleportState.h"

TeleportState::TeleportState() : m_isMind(false),
                                    m_possessKey(""),
                                    m_state(TELEPORT_NONE)
{
}

TeleportState::TeleportState(const std::string &key) : m_isMind(true),
                                                        m_possessKey(key),
                                                        m_state(TELEPORT_NONE)
{
}

void TeleportState::setRequested()
{
    m_state = TELEPORT_REQUESTED;
}

void TeleportState::setCreated()
{
    m_state = TELEPORT_CREATED;
}

bool TeleportState::isCreated()
{
    return (m_state == TELEPORT_CREATED);
}

bool TeleportState::isRequested()
{
    return (m_state == TELEPORT_REQUESTED);
}

bool TeleportState::isMind()
{
    return m_isMind;
}

const std::string & TeleportState::getPossessKey()
{
    return m_possessKey;
}
