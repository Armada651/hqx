/*
 * Copyright (C) 2003 Maxim Stepin ( maxst@hiend3d.com )
 *
 * Copyright (C) 2010 Cameron Zemek ( grom@zeminvaders.net)
 * Copyright (C) 2011 Francois Gannaz <mytskine@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef __HQX_COMMON_H_
#define __HQX_COMMON_H_

#include <stdint.h>

#if defined(_WIN32)
    #define inline __inline
#endif

extern inline uint32_t rgb_to_yuv(uint32_t c);

/* Test if there is difference in color */
extern inline int yuv_diff(uint32_t yuv1, uint32_t yuv2);
extern inline int Diff(uint32_t c1, uint32_t c2);

/* Interpolate functions */
extern inline uint32_t Interpolate_2(uint32_t c1, int w1, uint32_t c2, int w2, int s);
extern inline uint32_t Interpolate_3(uint32_t c1, int w1, uint32_t c2, int w2, uint32_t c3, int w3, int s);

extern inline void Interp0(uint32_t * pc, uint32_t c1);
extern inline void Interp1(uint32_t * pc, uint32_t c1, uint32_t c2);
extern inline void Interp2(uint32_t * pc, uint32_t c1, uint32_t c2, uint32_t c3);
extern inline void Interp3(uint32_t * pc, uint32_t c1, uint32_t c2);
extern inline void Interp4(uint32_t * pc, uint32_t c1, uint32_t c2, uint32_t c3);
extern inline void Interp5(uint32_t * pc, uint32_t c1, uint32_t c2);
extern inline void Interp6(uint32_t * pc, uint32_t c1, uint32_t c2, uint32_t c3);
extern inline void Interp7(uint32_t * pc, uint32_t c1, uint32_t c2, uint32_t c3);
extern inline void Interp8(uint32_t * pc, uint32_t c1, uint32_t c2);
extern inline void Interp9(uint32_t * pc, uint32_t c1, uint32_t c2, uint32_t c3);
extern inline void Interp10(uint32_t * pc, uint32_t c1, uint32_t c2, uint32_t c3);

#endif
