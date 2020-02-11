#ifndef IFS_H_INCLUDED
#define IFS_H_INCLUDED
#include "filedoenca.h"
//função para escolher qual das doenças que quer escolher para saber os medicamentos
medicamentos()
{

    //estes char são para usar as palavras e mais tarde fazer a comparação
    char mal[35];
    char amigdalite[35]="amigdalite";
    char gripe[35]="gripe";
    char pneumonia[35]="pneumonia";
    char conjuntivite[35]="conjuntivite";
    char gastroenterite[35]="gastroenterite";
    char pedra[35]="pedra";
    char sair[35]="sair";


    do
    {
    system("cls");
    textcolor(LIGHTCYAN);
    gotoxy(62,11);
    printf("-------------------------------------------------------");
    gotoxy(62,12);
    printf("| Qual a doença pela qual quer saber os medicamentos? | ");
    gotoxy(62,13);
    printf("-------------------------------------------------------");
    textcolor(WHITE);
    gotoxy(45,20);
    printf("Use as palavras [pneumonia],[gripe],[conjuntivite],[amigdalite],[pedra],[gastroenterite]\n");
    gotoxy(45,22);
    printf("Se quiser sair use a palavra [sair]\n");
    gotoxy(45,24);
    gets(mal);
    system("cls");

        if (strcmp(amigdalite,mal)==0)
            {
                textcolor(LIGHTRED);
                gotoxy(75,10);
                printf("Medicamentos para Amigdalite\n");
                textcolor(WHITE);
                garganta();
                gotoxy(75,20);
                textcolor(LIGHTRED);
                system("pause");

            }

        else if(strcmp(conjuntivite,mal)==0)
            {
                textcolor(LIGHTRED);
                gotoxy(75,10);
                printf("Medicamentos para conjuntivite\n");
                textcolor(WHITE);
                olhos();
                gotoxy(75,20);
                textcolor(LIGHTRED);
                system("pause");
            }

        else if(strcmp(gripe,mal)==0)
            {
                textcolor(LIGHTRED);
                gotoxy(75,10);
                printf("Medicamentos para Gripe\n");
                textcolor(WHITE);
                comum();
                gotoxy(72,20);
                textcolor(LIGHTRED);
                system("pause");
            }

        else if(strcmp(pneumonia,mal)==0)
            {
                textcolor(LIGHTRED);
                gotoxy(75,10);
                printf("Medicamentos para pneumonia\n");
                textcolor(WHITE);
                grave();
                gotoxy(75,20);
                textcolor(LIGHTRED);
                system("pause");
            }

        else if(strcmp(gastroenterite,mal)==0)
            {
                textcolor(LIGHTRED);
                gotoxy(75,10);
                printf("Medicamentos para Gastroenterite\n");
                textcolor(WHITE);
                barriga();
                gotoxy(75,20);
                textcolor(LIGHTRED);
                system("pause");
            }

        else if(strcmp(pedra,mal)==0)
            {
                textcolor(LIGHTRED);
                gotoxy(75,10);
                printf("Medicamentos para Pedras nos rins\n");
                textcolor(WHITE);
                rins();
                gotoxy(75,20);
                textcolor(LIGHTRED);
                system("pause");
            }

        else if(strcmp(sair,mal)==0)
            {
                medico();break;
            }

        else{   gotoxy(75,22);
                textcolor(LIGHTRED);
                printf("Erro, veja se escreveu bem");
                Sleep(1200);}


    }while(mal!=sair);

}

#endif // IFS_H_INCLUDED
