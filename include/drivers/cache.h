#pragma once

/*
 *   This file is part of open_agb_firm
 *   Copyright (C) 2021 derrek, profi200
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "types.h"



void invalidateICache(void);
void invalidateICacheRange(const void *base, u32 size);
void cleanDCache(void);
void flushDCache(void);
void cleanDCacheRange(const void *base, u32 size);
void flushDCacheRange(const void *base, u32 size);
void invalidateDCache(void);
void invalidateDCacheRange(const void *base, u32 size);
