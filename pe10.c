 /**************************************************************************
 *   pe10.c                                   Version 20190821.215002      *
 *                                                                         *
 *   Project Euler (SOMA DE PRIMOS)                                        *
 *   Copyright (C) 2015-2019   Template by Ruben Carlo Benante             *
 *   Author: Leandro Dantas Lima                                           *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 3 of the License, or     *
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
 ***************************************************************************
 *   To contact the author, please write to:                               *
 *   Leandro Dantas Lima                                                   *
 *   Email: leandroautocontrole@gmail.com                                  *
 *   Webpage: http://beco.poli.br/leandroautocontrole@gmail.com            *
 *   Phone: +55 (81) 98861-9469                                            *
 **************************************************************************/

/* ---------------------------------------------------------------------- */
/* includes */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<stdint.h>
/* ---------------------------------------------------------------------- */
/* ---------------------------------------------------------------------- */
/* main function */

int main(void)
{
	int64_t total = 2;
	int counter;
	
	for(int i=3; i<2000000; i+=2)
	{
		counter = 0;
		for(int j=2; j<sqrt(i);j++)
		{
			if(i%j == 0)
			{
				counter++;
				break;
			}
		}
		
		if(counter == 0)
		{
			total=total+i;
		}
	}
	printf("\n\n **** %lld", total);
	return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */

