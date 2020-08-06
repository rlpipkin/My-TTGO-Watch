/****************************************************************************
 *   Aug 3 22:21:17 2020
 *   Copyright  2020  Dirk Brosswick
 *   Email: dirk.brosswick@googlemail.com
 ****************************************************************************/
 
/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef _SOUND_H
    #define _SOUND_H

    #include <TTGO.h>

    #define SOUND_EVENT_PLAYING             _BV(0)
    #define SOUND_EVENT_STARTUP             _BV(1)
    #define SOUND_EVENT_NOTIFICATION        _BV(2)

    #define I2S_PORT              I2S_NUM_0

    void sound_setup( void );

#endif // _EXAMPLE_APP_H