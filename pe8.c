 /**************************************************************************
 *   pe8.c                                    Version 20190817.235856      *
 *                                                                         *
 *   Project Euler (MAIOR PRODUTO DE UMA SÉRIE)                            *
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
#include "projecteuler.h"
#include "myeulerlib.h"
//#include <stdio.h>

/* ---------------------------------------------------------------------- */
/* defines */
/* Project Euler Exercise Number */
/* #define PEN pe ## 8 */
#define SPEN "pe" "8"

/* ---------------------------------------------------------------------- */
/* prototypes */
void pe8(void); /* Proj. Euler problem #8 */

/* ---------------------------------------------------------------------- */
/* main function */
/* Do not change the main function. Use the void pe8(void) and
 * others you create here or in the myeulerlib.c and myeulerlib.h files
 */
int main(void)
{
    printf("Project Euler 20190817.233439, %s\n", SPEN);
    help(); /* optional help message at start */
    GRABsignals(); /* grab interruption signals */
    pe8(); /* Proj. Euler problem #8 */
    LEGOsignals(); /* restore interruption signals */
 
 


	long long product, maxProduct;
	int i, lowBound, highBound;
	
	int intArray[1000];
	char BFN[]= "73167176531330624919225119674426574742355349194934"
	            "96983520312774506326239578318016984801869478851843"
	            "85861560789112949495459501737958331952853208805511"
	            "12540698747158523863050715693290963295227443043557"
	            "66896648950445244523161731856403098711121722383113"
    	        "62229893423380308135336276614282806444486645238749"
		        "30358907296290491560440772390713810515859307960866"
		        "70172427121883998797908792274921901699720888093776"
		        "65727333001053367881220235421809751254540594752243"
		        "52584907711670556013604839586446706324415722155397"
		        "53697817977846174064955149290862569321978468622482"
		        "83972241375657056057490261407972968652414535100474"
		        "82166370484403199890008895243450658541227588666881"
		        "16427171479924442928230863465674813919123162824586"
    	        "17866458359124566529476545682848912883142607690042"
	            "24219022671055626321111109370544217506941658960408"
		        "07198403850962455444362981230987879927244284909188"
		        "84580156166097919133875499200524063689912560717606"
		        "05886116467109405077541002256983155200055935729725"
		        "71636269561882670428252483600823257530420752963450";
				
	product = maxProduct = 1;
	i = lowBound = 0;
	highBound = 0;

	while(highBound < 1000)
	{
		for(i = 0; i < 13; i++)
	
        {
			intArray[i] = BFN[i + lowBound] - '0';
			product *= intArray[i];

		}
		if (product > maxProduct)
		{
			maxProduct = product;
		
        }
		product = 1;
		lowBound++;
		highBound++;
		
	}

	printf("%llu", maxProduct);

 
 
    return EXIT_SUCCESS;
}

/* ---------------------------------------------------------------------- */
/* Proj. Euler problem #8 */
/* Problem description:
 *
 */

void pe8(void)
{
    /* local variables */
    ulong r=0; /* answer */

    /* Put this command inside a loop to get previews when pressing CTRL-C */
    /* ctrlc_printf("%s: Trying now %u\n", __FUNCTION__, r); */

    /* Use to count minutes running: */
    /* if(minutes() >= 2) break; */

    printf("%s: %lu\n", __FUNCTION__, r); /* answer */
    return;
}

/* ---------------------------------------------------------------------- */
/* vi: set ai et ts=4 sw=4 tw=0 wm=0 fo=croql : C config for Vim modeline */
/* Template by Dr. Beco <rcb at beco dot cc> Version 20160612.142044      */

