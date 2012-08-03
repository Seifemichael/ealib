/* update.h
 * 
 * This file is part of EALib.
 * 
 * Copyright 2012 David B. Knoester.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _CONTROL_UPDATE_H_
#define _CONTROL_UPDATE_H_

#include <stdexcept>

namespace control {
    
    /*! Update a system-under-control (SOC) n times with inputs [f,l), and place
     all output in result.
     */
    template <typename SOC, typename StateVector>
    void update_n(std::size_t n, SOC& soc, const StateVector& input, StateVector& output) {
        for(; n>0; --n) {
            update(soc, input, output);
        }
    }    
    
} // fn

#endif
