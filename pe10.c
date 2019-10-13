/***************************************************************************
 *   pe10.c                                    Version 20191013.003015     *
 *                                                                         *
 *   SOMA DE PRIMOS                                                        *
 *                                                                         *
 *   Copyright (C) 2019         by Leandro Dantas Lima                     *
 ***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
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
 *   Phone: (81) 98861-9469                                                *
***************************************************************************/
/* ---------------------------------------------------------------------- */
/* includes */

#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Miscellaneous functions (rand, malloc, srand)*/

/* ---------------------------------------------------------------------- */
/* Esta funcao calcula a soma de todos os numeros primos abaixo de um dado
 * numero N, fornecido pelo usuario.
 * No caso do pe10 do project Euler, N = 2 000 000.
 * 
 * Ela recebe um numero inteiro (N) como limite superior, fornecido pelo
 * usuario.
 *
 * Retorna EXIT_SUCCESS.
 */
/* ---------------------------------------------------------------------- */

int main(void)
{
    unsigned long long int a = 0, b, c, n, x, soma = 0;
   
    printf("\n###########################################\n");
    printf("\t\t SOMA DE PRIMOS ");
    printf("\n###########################################\n");
    printf("-------------------------------------------\n");
    printf(" DIGITE O NUMERO MAXIMO: ");
    scanf("%llu", &x);
    printf("-------------------------------------------");
 
    n = x;

    do
    { 
        a++;  
        c = 0;
        
        for(b = 1; b < a; b++)
            if( a%b == 0)
                c++;
        if(c == 1)

        soma = soma + a;
        n--;

    }
    
    while(n); /* Repete o bloco enquanto n for diferente de zero 0 */
    
    printf("\n###########################################\n");
    printf(" SOMA DOS PRIMOS ABAIXO DE %llu VALE: %llu \n", x, soma);
    printf("###########################################\n\n");
    
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */
