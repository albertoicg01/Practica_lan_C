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
    float sum=0, num=0,subjects=0;
    
    printf("----------------------------------\n");
    printf("Programa que calcula promedios\n");
    printf("Si ingresas -1, la ejecucion se detendra\n");
    printf("----------------------------------\n\n");
    
    do
    {   

        printf("Introduce tu calificacion de la materia %f: ",(subjects+1));    
        scanf("%f",&num);

        //Excluye la bandera para terminar el programa        
        if (num!=-1)
        {
            //Acomulador
            sum+=num;

            //Contador de materias
            subjects+=1;
            
        }
        


    } while (num!=-1);


    printf("\t\n\tsubjects es: %f \n",subjects);
    printf("\t\n\tsum es: %f \n",sum);
    printf("\t\n\tTu promedio es: %f \n",(sum/subjects));

    return 0;
}
