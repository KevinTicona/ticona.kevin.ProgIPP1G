#include <stdio.h>
#include <stdlib.h>
#include "ePais.h"

void actualizarRecuperados(ePais pais[],int recuperadosDelDia);


int main()
{
    /*int num;
    ePais pais[] =
    {
    1,10,num,10,"rene"
    };
    actualizarRecuperados(pais,num);
    printf("Recuperados 5");
    printf("%d",pais.recuperados);
    */

    char cadena[200];
    int i =0;
    int j;

    printf("Ingrese un texto: \n");
    gets(cadena);
    printf("\nEl texto introducido es: %s\n", cadena);
    while(cadena[i]!='\0'){
        i++;
    }
    printf("El texto al reves es: \n");
    for (j=i-1; j>=0; j--){
        printf("%c", cadena[j]);
    }



/*void actualizarRecuperados(ePais* pais,int recuperadosDelDia){

    for(int i = 0; i < recuperadosDelDia; i++){
        pais.recuperados++;
    }
}*/
