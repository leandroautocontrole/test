/* randonwalk-ldl.c         version20191029133252 */
/* Leandro Dantas Lima  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define LOOP 100

int aleatorio(int);
void iniciar_aleatorio(void);


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
