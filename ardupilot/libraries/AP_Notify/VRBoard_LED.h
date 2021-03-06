/*
 *  AP_Notify Library.
 * based upon a prototype library by David "Buzz" Bussenschutt.
 */

/*
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __AP_Notify_VRBoard_LED_h__
#define __AP_Notify_VRBoard_LED_h__


#include "RGBLed.h"
#include "AP_BoardLED.h"

class VRBoard_LED: public RGBLed {
public:
	VRBoard_LED();

protected:
    bool hw_init(void) override;
    bool hw_set_rgb(uint8_t r, uint8_t g, uint8_t b) override;
};

#endif /* __AP_Notify_VRBoard_LED_h__ */