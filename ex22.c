/**************************************************************************
 *   ex22.c                                   Version 20191029.144653      *
 *                                                                         *
 *   RANDOM WALKER                                                         *
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
#include <time.h>
#include <unistd.h>

/* ---------------------------------------------------------------------- */
/* definitions */
#define LOOP 100

/* ---------------------------------------------------------------------- */
/* prototypes */
int aleatorio(int);
void iniciar_aleatorio(void);

/* ---------------------------------------------------------------------- */
/* Este programa calcula o troco de uma maquina de vendas automatica.
 * 
 * Recebe o valor do troco fornecida pelo usuario.
 *
 * Retorna EXIT_SUCCESS
 */

/* ---------------------------------------------------------------------- */
/* main function */
int main(void)
{
	int x, y;
	float med_mov;

	iniciar_aleatorio();
	x = aleatorio();

return EXIT_SUCCESS;
}


/* funcao iniciar aleatorio */

void iniciar_aleatorio(void)
{
	srand(time(NULL) + getpid());
}

/* funcao aleatorio */

void aleatorio(void)
{
	int r;
	r = rand()%4;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */
