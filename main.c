#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

typedef struct{
    char titulo[20];
    char genero[20];
    int duracion;
    char descripcion[50];
    int puntaje;
    char linkImagen[50];
}EMovie;

int main()
{
    char seguir='s';
    int opcion=0;
    EMovie lista[20];


    while(seguir=='s')
    {
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Generar pagina web\n");
        printf("4- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                EMovie em = {"asd","asd",120,"gfuhdi",70,"asdasd"};
                agregarPelicula(em);
                break;
            case 2:
                EMovie em = {"asd","asd",120,"gfuhdi",70,"asdasd"};
                borrarPelicula(em);
                break;
            case 3:
                generarPagina(lista,"nombre de pagina");
               break;
            case 4:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
