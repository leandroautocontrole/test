/***************************************************************************
 *   ex22.c                                   Version 20191029.144653      *
 *                                                                         *
 *   RANDOM WALK (CAMINHADA ALEATORIA)                                     *
 *                                                                         *
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

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand) */
#include <time.h> /* Adicionar time(NULL) para gerar sementes srand() */
#include <unistd.h> /* adicionar getpid() para evitar repeticoes nas sementes */

/* ---------------------------------------------------------------------- */
/* definitions */

#define LOOP 100

/* ---------------------------------------------------------------------- */
/* prototypes */

void iniciar_aleatorio(void);

/* ---------------------------------------------------------------------- */
/* Este programa simula uma caminhada aleatoria (random walk) num plano XY
 * de dimensao 20x20, finalizando quando atingida uma das bordas do plano e
 * determinando o numero medio de passos para completar a caminhada.
 * 
 * Recebe um valor aleatorio determinado pela funcao rand().
 *
 * Retorna EXIT_SUCCESS
 */

/* ---------------------------------------------------------------------- */
/* main function */

int main(void)
{
    clock_t tempo_inicial, tempo_final, dif_tempo; /* criando uma variavel de tipo clock_t */
    tempo_inicial = clock()/CLOCKS_PER_SEC;

	int i, x, passos, n, s, e, w;  
	float med_passos, c_passos = 0;
   
    iniciar_aleatorio();

    for(i = 1; i <= LOOP; i++)
    {
        n = 0, s = 0, e = 0, w = 0; 
    
        do
        {
            x = rand()%4;

            switch(x)
            {
            
                case 0: /* x = 0 --> norte */
                    n++;
                    printf(" Norte >>");
                    break;

                case 1: /* x = 1 --> sul*/ 
                    s++;
                    printf(" Sul >>");
                    break;

                case 2: /* x = 2 --> leste */
                    e++;
                    printf(" Leste >>");
                    break;

                case 3:  /* x = 3 --> oeste */
                    w++;
                    printf(" Oeste >>");
                    break;
            }

        }while((e < 10) && (w < 10) && (n < 10) && (s < 10));
    
        printf("\n\n Voce andou %d passos para o NORTE\n", n);
        printf(" Voce andou %d passos para o SUL\n", s);
        printf(" Voce andou %d passos para o LESTE\n", e);
        printf(" Voce andou %d passos para o OESTE\n", w);
        printf("\n");
        
        passos = n + s + e + w;
    
        printf(" ...................................................\n");
        printf("\tVoce andou %d passos nessa caminhada\n", passos);
        printf(" ...................................................\n\n");
    
        c_passos = c_passos + passos;
    }
    med_passos = c_passos/LOOP;
    
    printf(" #######################################################################\n");
    printf(" -----------------------------------------------------------------------\n");
    printf(" .......................................................................\n");
    printf("\tVoce andou em MEDIA %.1f passos para sair do seu quadrado!\n", med_passos);
    printf(" .......................................................................\n");
    printf(" -----------------------------------------------------------------------\n");
    printf(" #######################################################################\n\n");

    tempo_final = clock()/CLOCKS_PER_SEC;
    dif_tempo = tempo_final - tempo_inicial;
    printf("\t\t\t ...............................................\n");
    printf("\t\t\t\t Tempo de execucao %f \n\n", (double)dif_tempo);
    printf("\t\t\t ...............................................\n\n");
    
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* funcao iniciar aleatorio */

void iniciar_aleatorio(void)
{
	srand(time(NULL) + getpid());
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */
