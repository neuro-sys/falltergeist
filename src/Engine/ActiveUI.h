/*
 * Copyright 2012-2014 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FALLTERGEIST_ACTIVEUI_H
#define FALLTERGEIST_ACTIVEUI_H

// C++ standard includes

// Falltergeist includes
#include "../Engine/Event/Event.h"
#include "../Engine/UI.h"
#include "../Engine/Event/MouseEvent.h"
#include "../Engine/Event/KeyboardEvent.h"

// Third party includes

namespace Falltergeist
{

class ActiveUI : public EventEmitter, public EventReciever, public UI
{
public:
    ActiveUI(int x = 0, int y = 0);
    virtual void handle(Event* event);
};

}
#endif // FALLTERGEIST_ACTIVEUI_H