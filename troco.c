/***************************************************************************
 *   ex19.c                                   Version 20191009.145159      *
 *                                                                         *
 *   PROGRAMA PARA APRENDIZADO DE MATEMATICA POR REPETICAO                 *
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
#include<time.h> /* Adicionar time(NULL) para gerar sementes srand() */
#include<unistd.h> /* adicionar getpid() para evitar repeticoes nas sementes */

/* ---------------------------------------------------------------------- */
/* definitions */

#define LOOP 20

/* ---------------------------------------------------------------------- */
/* prototypes */

int aleatorio(int,int);
void iniciar_aleatorio(void);

/* ---------------------------------------------------------------------- */
/* Este programa cria somas de numeros aleatorios com niveis de dificuldades
 * (fases) de acordo com a evolucao do usuario, partindo de somas de dois
 * numeros com apenas um digito cada, ate soma de dois numeros com ate dois
 * digitos cada.
 * 
 * Recebe o resultado da operacao (soma) fornecido pelo usuario, avancando se
 * correta, ou dando uma mensagem de erro e repetindo a operacao, se errada.
 *
 * Retorna EXIT_SUCCESS
 */

int main(void)
{
    int med, desvpad, x, y, i, z, w;
    float erradas = 0, total, corretas, percent;

/* --------------------------------------------------------------------- */

/* ##################################################################### */       
/*                                NIVEL 1                                */
/* ##################################################################### */

/* --------------------------------------------------------------------- */

    printf("\n\n----------------------------------------------------");
    printf("\n APRENDIZADO DE MATEMÁTICA POR REPETICAO");
    printf("\n----------------------------------------------------");
    
    printf("\n####################################################");
    printf("\n                        NIVEL 1 ");
    printf("\n####################################################\n");

/* --------------------------------------------------------------------- */
/* iniciando variaveis aleatorias */

    iniciar_aleatorio();
    med = 3;
    desvpad = 2;
    x = aleatorio(med, desvpad);  /* x entre [1,5], ou x < 6 */
   
    iniciar_aleatorio();
    med = 3;
    desvpad = 2; 
    y = aleatorio(med, desvpad);  /* y entre [1,5], ou y < 6 */

/* --------------------------------------------------------------------- */    

    for(i = 1; i <= LOOP; i++)  /* inserindo n numeros com laco for */
    {
        x = aleatorio(med, desvpad);
        y = aleatorio(med, desvpad);
        z = x + y;
    
        printf("\n %d + %d = ", x, y);
        scanf("%d", &w);

        while(w != z)
    
        {
            printf("INCORRETO!!!");
            printf("\n %d + %d = ", x, y);
            scanf("%d", &w);
            erradas++;
        }
        printf("CORRETO!!!");
    }


    printf("\n\n####################################################");
    printf("\n PARABENS, VOCE PASSOU PARA O NIVEL 2!!!");
    printf("\n####################################################\n");

/* ---------------------------------------------------------------------- */

/* ##################################################################### */       
/*                                NIVEL 2                                */
/* ##################################################################### */

/* --------------------------------------------------------------------- */
/* iniciando variaveis aleatorias */

    iniciar_aleatorio();
    med = 5;
    desvpad = 4;
    x = aleatorio(med, desvpad);  /* x entre [1,9], ou x < 10 */
    
    iniciar_aleatorio();
    med = 5;
    desvpad = 4;
    y = aleatorio(med, desvpad);  /* y entre [1,9], ou y < 10 */

/* --------------------------------------------------------------------- */    

    for(i = 1; i <= LOOP; i++)  /* inserindo n numeros com laco for */
    {
        do
    
        {
            x = aleatorio(med, desvpad);
            y = aleatorio(med, desvpad);
            z = x + y;
        }
        while(x + y > 10); /* gerando aleatorios enquanto a soma der maior que 10 */
            
        printf("\n %d + %d = ", x, y);
        scanf("%d", &w);
    
        while(w != z)
        
        {
            printf("INCORRETO!!!");
            printf("\n %d + %d = ", x, y);
            scanf("%d", &w);
            erradas++;
        }
    
        printf("CORRETO!!!");        
    }


    printf("\n\n####################################################");
    printf("\n PARABENS, VOCE PASSOU PARA O NIVEL 3!!!");
    printf("\n####################################################\n");

/* --------------------------------------------------------------------- */

/* ##################################################################### */       
/*                                NIVEL 3                                */
/* ##################################################################### */

/* --------------------------------------------------------------------- */
/* iniciando variaveis aleatorias */

    iniciar_aleatorio();
    med = 5;
    desvpad = 4;
    x = aleatorio(med, desvpad);  /* x entre [1,9], ou x < 10 */
    
    iniciar_aleatorio();
    med = 5;
    desvpad = 4;
    y = aleatorio(med, desvpad);  /* y entre [1,9], ou y < 10 */

/* --------------------------------------------------------------------- */    

    for(i = 1; i <= LOOP; i++)  /* inserindo n numeros com laco for */
    {
        x = aleatorio(med, desvpad);
        y = aleatorio(med, desvpad);
        z = x + y;
    
        printf("\n %d + %d = ", x, y);
        scanf("%d", &w);

        while(w != z)
        {
            printf("INCORRETO!!!");
            printf("\n %d + %d = ", x, y);
            scanf("%d", &w);
            erradas++;
    
        }
        
        printf("CORRETO!!!");
    
    }


    printf("\n\n####################################################");
    printf("\n PARABENS, VOCE PASSOU PARA O NIVEL 4!!!");
    printf("\n####################################################\n");

/* --------------------------------------------------------------------- */

/* ##################################################################### */       
/*                                NIVEL 4                                */
/* ##################################################################### */

/* --------------------------------------------------------------------- */
/* iniciando variaveis aleatorias */

        iniciar_aleatorio();
        med = 5;
        desvpad = 4;
        x = 9 +  aleatorio(med, desvpad);  /* x entre [10,18], ou 10<= x <= 18 */
    
        iniciar_aleatorio();
        med = 5;
        desvpad = 4;
        y = aleatorio(med, desvpad);  /* y entre [1,9], ou y < 10 */

/* --------------------------------------------------------------------- */    

    for(i=1; i <= LOOP; i++)  /* inserindo n numeros com laco for */
    {
    
        x = 9 + aleatorio(med, desvpad);
        y = aleatorio(med, desvpad);
        z = x + y;

        printf("\n %d + %d = ", x, y);
        scanf("%d", &w);

        while(w != z)
        {
            printf("INCORRETO!!!");
            printf("\n %d + %d = ", x, y);
            scanf("%d", &w);
            erradas++;
        }
        
        printf("CORRETO!!!");

    }

    printf("\n\n####################################################");
    printf("\n PARABENS, VOCE PASSOU PARA O NIVEL 5!!!");
    printf("\n####################################################\n");

/* --------------------------------------------------------------------- */

/* ##################################################################### */       
/*                                NIVEL 5                                */
/* ##################################################################### */

/* --------------------------------------------------------------------- */
/* iniciando variaveis aleatorias */

    iniciar_aleatorio();
    med = 26;
    desvpad = 25;
    x = 52 - aleatorio(med, desvpad);  /* x entre [1,50], ou x <= 50 */
    
    iniciar_aleatorio();
    med = 26;
    desvpad = 25;
    y = 52 - aleatorio(med, desvpad);  /* y entre [1,50], ou y <= 50 */

/* --------------------------------------------------------------------- */    

    for(i=1; i <= LOOP; i++)  /* inserindo n numeros com laco for */
    {
        x = 52 - aleatorio(med, desvpad);
        y = 52 - aleatorio(med, desvpad);
        z = x + y;
    
        printf("\n %d + %d = ", x, y);
        scanf("%d", &w);

        while(w != z)
        {
            printf("INCORRETO!!!");
            printf("\n %d + %d = ", x, y);
            scanf("%d", &w);
            erradas++;
    
        }
        
        printf("CORRETO!!!");
    
    }

    total = LOOP*5;
    corretas = total - erradas;
    percent = (corretas / total);

    printf("\n\n####################################################");
    printf("\n PARABENS, VOCE CONCLUIU TODOS OS DESAFIOS!!!");
    printf("\n####################################################\n\n");

    printf("----------------------------------------------------\n");
    printf("#####################  DESEMPENHO  #################");
    printf("\n----------------------------------------------------\n");

    printf("\n TOTAL DE QUESTOES: \t%.f", total);
    printf("\n NUMERO DE ACERTOS: \t%.f", corretas);
    printf("\n NUMERO DE ERROS:   \t%.f", erradas);
    printf("\n\n----------------------------------------------------\n");
 
    printf("\t PERCENTUAL DE ACERTOS: \t%.2f%%", percent*100);
    printf("\n----------------------------------------------------\n\n");
 
/* ---------------------------------------------------------------------- */
    
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* funcao iniciar aleatorio */

void iniciar_aleatorio(void)
{
    srand(time(NULL) + getpid());
}

/* ---------------------------------------------------------------------- */
/* funcao aleatorio */

int aleatorio(int med, int desvpad)
{
    double r;
    r = (double) rand()/RAND_MAX;
        return (int) ((med - desvpad) + r*(2*desvpad + 1));
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */
