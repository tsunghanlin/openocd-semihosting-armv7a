/***************************************************************************
 *   Copyright (C) 2007 by Dominic Rath                                    *
 *   Dominic.Rath@gmx.de                                                   *
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
#ifndef LPC3180_NAND_CONTROLLER_H
#define LPC3180_NAND_CONTROLLER_H

#include "target.h"

enum lpc3180_selected_controller
{
	LPC3180_NO_CONTROLLER,
	LPC3180_MLC_CONTROLLER,
	LPC3180_SLC_CONTROLLER,
};

typedef struct lpc3180_nand_controller_s
{
	struct target_s *target;
	int osc_freq;
	enum lpc3180_selected_controller selected_controller;
	int sw_write_protection;
	uint32_t sw_wp_lower_bound;
	uint32_t sw_wp_upper_bound;
} lpc3180_nand_controller_t;

#endif /*LPC3180_NAND_CONTROLLER_H */
