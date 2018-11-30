#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float Gera_Exponencial (float avg)
{
    float u=0; /* Gera randomicamente um numero entre 0 e 1 */
    do 
        u = ((float)rand()) / ((float) RAND_MAX);
    while ((u==0) || (u==1));
    return (-avg * log (u));
}

para saber quanto tempo o rolamento vai ficar no maquinario, use a funcao abaixo: 
float tempo(float Estadia_Equipamento_Rolamento)
{
    float u = ((float)rand()) / ((float) RAND_MAX);
    return 2.0 * Estadia_Equipamento_Rolamento * u;
}

/*teste pra ver funcionando soh os geradores */
int main()
{
    srand(time(NULL));  /* <-- obrigatorio ter uma vez apenas no seu codigo */
    printf("%f \n" , Gera_Exponencial(21.5));
    printf("%f \n" , tempo(1.6));
    return 0;
}