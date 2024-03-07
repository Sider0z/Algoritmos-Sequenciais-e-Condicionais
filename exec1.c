/*Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a distancia entre eles*/

#include<stdio.h>
#include<math.h>

float calcula_dist(float x1, float x2, float y1, float y2);

int main(){
    float x1, x2, y1, y2;
    printf("Digite a localizacao no plano dos pontos x1, x2, y1, y2, respectivamente.\n");
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);
    float resultado = calcula_dist(x1, x2, y1, y2);
    printf("\nA distancia entre os 2 pontos é: %.2f", resultado);
}

float calcula_dist(float x1, float x2, float y1, float y2)
{
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}