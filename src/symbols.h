/* symbol.h: header for layout/dimentioning and drawing routines for symbols 
(things that do not resize). */

/*  This file is part of asciiTeX.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; see the file COPYING.  If not, write to
      The Free Software Foundation, Inc.
      59 Temple Place, Suite 330
      Boston, MA 02111 USA
      
    
    Authors:
    Original program (eqascii): Przemek Borys
    Fork by: Bart Pieters
       
*************************************************************************/

#ifndef SYMBOLS_H
#define SYMBOLS_H

int             dimInt(char *found, char **Gpos, Tdim * Our,
		       struct Tgraph *graph);
void            drawInt(int *Kid, int *Curx, int *Cury, char ***screen,
			struct Tgraph *graph);

int             dimOint(char *found, char **Gpos, Tdim * Our,
			struct Tgraph *graph);
void            drawOint(int *Kid, int *Curx, int *Cury, char ***screen,
			 struct Tgraph *graph);

int             dimProd(char *found, char **Gpos, Tdim * Our,
			struct Tgraph *graph);
void            drawProd(int *Kid, int *Curx, int *Cury, char ***screen,
			 struct Tgraph *graph);

int             dimSum(char *found, char **Gpos, Tdim * Our,
		       struct Tgraph *graph);
void            drawSum(int *Kid, int *Curx, int *Cury, char ***screen,
			struct Tgraph *graph);

int             dimTo(char *found, char **Gpos, Tdim * Our,
		      struct Tgraph *graph);
void            drawTo(int *Kid, int *Curx, int *Cury, char ***screen,
		       struct Tgraph *graph);

int             dimLeadsto(char *found, char **Gpos, Tdim * Our,
			   struct Tgraph *graph);
void            drawLeadsto(int *Kid, int *Curx, int *Cury, char ***screen,
			    struct Tgraph *graph);

int             dimLceil(char *found, char **Gpos, Tdim * Our,
			 struct Tgraph *graph);
void            drawLceil(int *Kid, int *Curx, int *Cury, char ***screen,
			  struct Tgraph *graph);

int             dimRceil(char *found, char **Gpos, Tdim * Our,
			 struct Tgraph *graph);
void            drawRceil(int *Kid, int *Curx, int *Cury, char ***screen,
			  struct Tgraph *graph);

int             dimLfloor(char *found, char **Gpos, Tdim * Our,
			  struct Tgraph *graph);
void            drawLfloor(int *Kid, int *Curx, int *Cury, char ***screen,
			   struct Tgraph *graph);

int             dimRfloor(char *found, char **Gpos, Tdim * Our,
			  struct Tgraph *graph);
void            drawRfloor(int *Kid, int *Curx, int *Cury, char ***screen,
			   struct Tgraph *graph);
#endif
