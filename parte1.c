#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMA 5

void MostrarPersonas(char *nombreAlumno[]);
int main()
{
    int cantLetras;
    char *nombreAlumno[TAMA];
    char temp[50];

    for (int i = 0; i < TAMA; i++)
    {
        printf("nombre de alumno:\n");
        scanf("%s", temp);
        cantLetras = strlen(temp);
        nombreAlumno[i] = (char *)malloc(sizeof(int) * cantLetras);
        strcpy(nombreAlumno[i], temp);
    }
    MostrarPersonas(nombreAlumno);

    return 0;
}
void MostrarPersonas(char *nombreAlumno[])
{
    for (int i = 0; i < TAMA; i++)
    {
        printf("%s \n", nombreAlumno[i]);
        free(nombreAlumno[i]);
    }
}