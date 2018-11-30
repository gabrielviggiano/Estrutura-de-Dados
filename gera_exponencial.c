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
