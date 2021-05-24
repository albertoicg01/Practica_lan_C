/*
================================
AUTHOR  : ALC
DATE    : 22-05-21
DESC    : A simple C program.
================================
*/
#include<stdio.h>
int main(){
    //Type your code here
    float sum=0, num=0,counter=1;
    
    printf("----------------------------------\n");
    printf("Programa que calcula promedios\n");
    printf("Presiona -1 para terminar y arrojar resultado\n");
    printf("----------------------------------\n\n");
    
    do
    {   

        printf("Introduce tu calificacion de la materia %f: ",counter);    
        scanf("%f",&num);
        sum+=num;
        counter+=1;


    } while (num!=-1);
    printf("\t\n\tCounter es: %f \n",counter);
    printf("\t\n\tnum es: %f \n",counter);
    printf("\t\n\tTu promedio es: %f \n",(sum/counter));

    return 0;
}
