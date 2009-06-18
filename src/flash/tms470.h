/***************************************************************************
 *   Copyright (C) 2007,2008 by Christopher Kilgour                        *
 *   techie |_at_| whiterocker |_dot_| com                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef TMS470_DOT_H
#define TMS470_DOT_H

#include "flash.h"

typedef struct tms470_flash_bank_s
{
	unsigned ordinal;

	/* device identification register */
	uint32_t device_ident_reg;
	uint32_t silicon_version;
	uint32_t technology_family;
	uint32_t rom_flash;
	uint32_t part_number;
	char * part_name;

} tms470_flash_bank_t;

#endif /* TMS470_DOT_H */
