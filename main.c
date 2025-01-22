//bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void){
    //vari�veis
    int opc=0;
    //comando de regionalizacao
    setlocale(LC_ALL, "Portuguese");
    //titulo do programa
    SetConsoleTitle("Abrir programas do computador");

    printf ("Escolha um programa para abrir\n\n");
    printf ("\t1 - Bloco de notas\n");
    printf ("\t2 - Paint\n");
    printf ("\t3 - Microsoft Word\n\n");

    printf ("Opcao: ");
    scanf ("%d", &opc);

    switch (opc){
        case 1:
            system ("start notepad");
            break;
        case 2:
            system ("start mspaint");

            break;
        case 3:
            system ("start winword");
            break;
        default:
            printf ("\n\nDesculpe, esta op��o � inv�lida. O programa ser� encerrado.\n\n");
    }
}
