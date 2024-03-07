#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c;
    float R, S, D;

    scanf("%d %d %d", &a, &b, &c);
    R = pow(a + b, 2);
    S = pow(b + c, 2);

    D= (R+S)/2.0;

    printf("%.2f", D);

}