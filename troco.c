/***************************************************************************
 *   troco.c                                  Version 20191022.105254      *
 *                                                                         *
 *   PROGRAMA PARA CALCULAR TROCO DE UMA MAQUINA DE VENDAS                 *
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
#include<string.h>

/* ---------------------------------------------------------------------- */
/* definitions */



/* ---------------------------------------------------------------------- */
/* prototypes */



/* ---------------------------------------------------------------------- */
/* Este programa calcula o troco de uma maquina de vendas automatica.
 * 
 * Recebe o valor do troco fornecida pelo usuario.
 *
 * Retorna EXIT_SUCCESS
 */



void troco(float valor){

    enum{nota10,nota5,nota2};
    enum{moeda1,moeda50,moeda25,moeda10,moeda5,moeda01};

    int quant_notas[3];
    int quant_moedas[6];

    quant_notas[nota10] = (int)valor/10;
    valor = valor - (quant_notas[nota10]*10);

    quant_notas[nota5] = (int)valor/5;
    valor = valor - (quant_notas[nota5]*5);

    quant_notas[nota2] = (int)valor/2;
    valor = valor - (quant_notas[nota2]*2);


    quant_moedas[moeda1] = (int)(valor/1);
    valor = valor - (quant_moedas[moeda1]*1);

    quant_moedas[moeda50] = (int)(valor/0.50);
    valor = valor - (quant_moedas[moeda50]*0.50);

    quant_moedas[moeda25] = (int)(valor/0.25);
    valor = valor - (quant_moedas[moeda25]*0.25);

    quant_moedas[moeda10] = (int)(valor/0.10);
    valor = valor - (quant_moedas[moeda10]*0.10);

    quant_moedas[moeda5] = (int)(valor/0.05);
    valor = valor - (quant_moedas[moeda5]*0.05);

    quant_moedas[moeda01] = (int)(valor/0.01) + 1;
    valor = valor - (quant_moedas[moeda01]*0.01);


    printf("\nNotas de 10,00: %d",quant_notas[nota10]);
    printf("\nNotas de 5,00: %d",quant_notas[nota5]);
    printf("\nNotas de 2,00: %d",quant_notas[nota2]);

    printf("\n\nMoedas de 1,00: %d", quant_moedas[moeda1]);
    printf("\n\nMoedas de 0,50: %d", quant_moedas[moeda50]);
    printf("\n\nMoedas de 0,25: %d", quant_moedas[moeda25]);
    printf("\n\nMoedas de 0,10: %d", quant_moedas[moeda10]);
    printf("\n\nMoedas de 0,05: %d", quant_moedas[moeda5]);
    printf("\n\nMoedas de 0,01: %d", quant_moedas[moeda01]);
}


int main(){
    float valor;
    printf("Digite um valor: " );
    scanf("%f", &valor);

    troco(valor);

    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */
