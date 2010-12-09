/* -*- c++ -*- */
/*
 * Copyright 2010 Free Software Foundation, Inc.
 * 
 * GNU Radio is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * GNU Radio is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with GNU Radio; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gr_gmskmod_bc.h>
#include <gr_io_signature.h>


// Shared pointer constructor
gr_gmskmod_bc_sptr
gr_make_gmskmod_bc(unsigned samples_per_sym, unsigned L, double bt)
{
  return gnuradio::get_initial_sptr(new gr_gmskmod_bc(samples_per_sym, L, bt));
}


gr_gmskmod_bc::gr_gmskmod_bc(unsigned samples_per_sym, unsigned L, double bt)
	: gr_cpmmod_bc(gr_cpm::GAUSSIAN, 0.5, samples_per_sym, L, bt)
{
}

