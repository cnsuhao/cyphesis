// This file may be redistributed and modified only under the terms of
// the GNU General Public License (See COPYING for details).
// Copyright (C) 2000 Alistair Riddoch

#ifndef RULESETS_PY_LOCATION_H
#define RULESETS_PY_LOCATION_H

extern PyTypeObject Location_Type;

#define PyLocation_Check(_o) ((PyTypeObject*)PyObject_Type((PyObject*)_o)==&Location_Type)

LocationObject * newLocationObject(PyObject *);

#endif // RULESETS_PY_LOCATION_H
