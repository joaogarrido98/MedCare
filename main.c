#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include "ascii.h" //biblioteca para chamar o file.h que contem o ascii art, fica mais facil fazer em file.
#include <windows.h>
#include <time.h>//para registar a hora do diagnostico
#include "ifs.h"



struct login{
char nome [35];
char pass [16];
int peso;
int altura;
char fumar[35];
char maligno[35];
};


#include "login.h" //biblioteca para chamar o login.h para fazer registo e login.

sint()
{

    gotoxy(25,5);
    textcolor(WHITE);
    printf("> [1]--- [Dor de garganta | dificuldade a engolir | garganta vermelha | febre | tosse seca | perda de apetite]");//amigdalite
    gotoxy(25,10);
    printf("> [2]--- [Olhos vermelhos | comich�o | P�lpebras inchadas | Vis�o borrada | dor nos olhos | sensa��o de areia]");//conjuntivite
    gotoxy(25,15);
    printf("> [3]--- [Febre | Enj�o | Diarreia | vomitos | Dores abdominais | Perda de peso | Perda de apetite | Desidrata��o]");//gastroenterite
    gotoxy(25,20);
    printf("> [4]--- [Dores de cabe�a | Cansa�o | Dores corporais | Nariz entupido | Tosse | Garganta inchada | febre alta]");//gripe
    gotoxy(25,25);
    printf("> [5]--- [Dor intensa nas costas | Dor ao urinar | Urina rosa | Vontade frequente para urinar | Enjoos ou vomitos]\n\n\n\n");//pedra
    gotoxy(25,30);
    printf("                        > [6]--- [Febre alta | Tosse seca  | Falta de ar | Mal-estar generalizado | Fraqueza | Suores intensos | Nauseas]\n\n\n\n");//pneumonia
    gotoxy(25,35);
    printf("                        > [7]--- Voltar ");
}


medico() //menu de historial diagnostico medicamentos e etc
{
    system("cls");
    textcolor(LIGHTCYAN);
    gotoxy(70,16);
    printf("------------------------------");
    gotoxy(70,17);
    printf("|    > [1]--- |Diagn�stico|  |");
    gotoxy(70,19);
    printf("|    > [2]--- |Conta doente| |");
    gotoxy(70,21);
    printf("|    > [3]--- |Medicamentos| |");
    gotoxy(70,23);
    printf("|    > [4]---    |logout|    |");
    gotoxy(70,24);
    printf("------------------------------\n");
}


int main()
{

    int escolha,menu2,sintomas,escolha3;   //variaveis do programa.
    char escolha2[35], palavradoente[35],historial[35];     //escolher sim ou nao no if das doen�as
    char sn[35]="sim";
    char ns[35]="nao";
    FILE*aq;
    time_t rawtime;
    struct tm*timeinfo;





    setlocale(LC_ALL, ("PORTUGUESE"));//para o programa aceitar a lingua portugesa e acentos e coisas do genero
    ascii();//chama a fun�ao do ascii.h
    gotoxy(73,18);
    system("pause");//pausa o programa.
    system("cls");//limpa a consola
    gotoxy(75,20);
    textcolor(LIGHTRED);
    printf("A entrar");Sleep(200);printf(".");Sleep(300);printf(".");Sleep(400);printf(".");Sleep(500);
    system("cls");

    do{//repetir enquanto o utilizador quiser.
                //menu de registo e login, primeiro menu para saber para onde vou, um menu simples como o resto do programa para ser simples para o utilizador
    system("cls");
    ascii();
    textcolor(LIGHTCYAN);
    gotoxy(72,18);
    printf("----------------------------");
    gotoxy(72,19);
    printf("|    > [1]---   |Login|    |");
    gotoxy(72,21);
    printf("|    > [2]---  |Registo|   |");
    gotoxy(72,23);
    printf("|    > [3]---   |Sair|     |");
    gotoxy(72,24);
    printf("----------------------------\n");
    gotoxy(72,25);
    scanf("%i%*C", &escolha);fflush(stdin);//variavel "escolha" porque � uma escolha no menu.
    system("cls");

    switch(escolha)
    {
        case 1: logindo();
                system("cls");
                gotoxy(75,20);
                printf("Bem vindo ao Medcare");
                Sleep(1500);

                do{
                system("cls");
                medico();
                gotoxy(70,25);
                scanf("%i%*C", &menu2);fflush(stdin);
                system("cls");

                switch(menu2)
                {
                    case 1: system("cls");//vou fazer a base dos sintomas e � pessoa escolhe o mais adequado e la dentro diz a doenca que pode ter.
                            gotoxy(62,20);
                            printf("Dos seguintes escolha o que mais se adequa ao seu doente");
                            Sleep(1900);
                            system("cls");

                            do
                            {
                            sint();
                            scanf("%i%*C", &sintomas);fflush(stdin);
                            system("cls");

                            switch(sintomas)
                            {//ver como ligo isto ao tempo para no historial aparecer

                                case 1: gotoxy(75,20);
                                        textcolor(LIGHTRED);
                                        printf("A Examinar");Sleep(300);printf(".");Sleep(400);printf(".");Sleep(500);printf(".");Sleep(600);system("cls");
                                        system("cls");
                                        gotoxy(45,16);
                                        textcolor(LIGHTCYAN);
                                        printf("Pela op��o que escolheu conseguimos dizer que o doente possa ter contra�do uma:"); //abrir files com if
                                        gotoxy(45,18);
                                        printf("--------------");
                                        gotoxy(45,19);
                                        printf("| Amigdalite |");
                                        gotoxy(45,20);
                                        printf("--------------");
                                        gotoxy(45,23);
                                        textcolor(WHITE);
                                        printf("Quer saber mais sobre esta doen�a? [Use as palavras 'sim' ou 'nao']\n");
                                        gotoxy(45,25);
                                        gets(escolha2);
                                        system("cls");

                                        if (strcmp(sn,escolha2)==0)
                                        {
                                             system("Amigdalite.txt");break;//abrir um txt quando se escreve sim

                                        }

                                        else if(strcmp(ns,escolha2)==0)
                                        {
                                         system("cls");
                                         medico();break;
                                        }

                                        else
                                        {
                                         gotoxy(75,20);
                                         textcolor(LIGHTRED);
                                         printf("Escolha uma das op��es");
                                         Sleep(1000);break;

                                        }break;



                                case 2: gotoxy(75,20);
                                        textcolor(LIGHTRED);
                                        printf("A Examinar");Sleep(300);printf(".");Sleep(400);printf(".");Sleep(500);printf(".");Sleep(600);system("cls");
                                        system("cls");
                                        gotoxy(45,16);
                                        textcolor(LIGHTCYAN);
                                        printf("Pela op��o que escolheu conseguimos dizer que o doente possa ter contra�do uma:"); //abrir files com if
                                        gotoxy(45,18);
                                        printf("----------------");
                                        gotoxy(45,19);
                                        printf("| conjuntivite |");
                                        gotoxy(45,20);
                                        printf("----------------");
                                        gotoxy(45,23);
                                        textcolor(WHITE);
                                        printf("Quer saber mais sobre esta doen�a? [Use as palavras 'sim' ou 'nao']\n");
                                        gotoxy(45,25);
                                        gets(escolha2);
                                        system("cls");

                                         if (strcmp(sn,escolha2)==0)
                                        {
                                             system("Conjuntivite.txt");break;

                                        }

                                        else if(strcmp(ns,escolha2)==0)
                                        {
                                         system("cls");
                                         medico();break;
                                        }

                                        else
                                        {
                                         gotoxy(75,20);
                                         textcolor(LIGHTRED);
                                         printf("Escolha uma das op��es");
                                         Sleep(1000);break;

                                        }break;

                                case 3: gotoxy(75,20);
                                        textcolor(LIGHTRED);
                                        printf("A Examinar");Sleep(300);printf(".");Sleep(400);printf(".");Sleep(500);printf(".");Sleep(600);system("cls");
                                        system("cls");
                                        gotoxy(45,16);
                                        textcolor(LIGHTCYAN);
                                        printf("Pela op��o que escolheu conseguimos dizer que o doente possa ter contra�do uma:"); //abrir files com if
                                        gotoxy(45,18);
                                        printf("------------------");
                                        gotoxy(45,19);
                                        printf("| Gastroenterite |");
                                        gotoxy(45,20);
                                        printf("------------------");
                                        gotoxy(45,23);
                                        textcolor(WHITE);
                                        printf("Quer saber mais sobre esta doen�a? [Use as palavras 'sim' ou 'nao']\n");
                                        gotoxy(45,25);
                                        gets(escolha2);
                                        system("cls");

                                       if (strcmp(sn,escolha2)==0)
                                        {
                                             system("Gastroenterite.txt");break;

                                        }

                                       else if(strcmp(ns,escolha2)==0)
                                        {
                                         system("cls");
                                         medico(); break;
                                        }

                                        else
                                        {
                                         gotoxy(75,20);
                                         textcolor(LIGHTRED);
                                         printf("Escolha uma das op��es");
                                         Sleep(1000);break;

                                        }break;


                                case 4: gotoxy(75,20);
                                        textcolor(LIGHTRED);
                                        printf("A Examinar");Sleep(300);printf(".");Sleep(400);printf(".");Sleep(500);printf(".");Sleep(600);system("cls");
                                        system("cls");
                                        gotoxy(45,16);
                                        textcolor(LIGHTCYAN);
                                        printf("Pela op��o que escolheu conseguimos dizer que o doente possa ter contra�do uma:"); //abrir files com if
                                        gotoxy(45,18);
                                        printf("---------");
                                        gotoxy(45,19);
                                        printf("| Gripe |");
                                        gotoxy(45,20);
                                        printf("---------");
                                        gotoxy(45,23);
                                        textcolor(WHITE);
                                        printf("Quer saber mais sobre esta doen�a? [Use as palavras 'sim' ou 'nao']\n");
                                        gotoxy(45,25);
                                        gets(escolha2);
                                        system("cls");

                                        if (strcmp(sn,escolha2)==0)
                                        {
                                             system("Gripe.txt");break; //abrir files com if

                                        }

                                        else if(strcmp(ns,escolha2)==0)
                                        {
                                         system("cls");
                                         medico(); break;
                                        }

                                        else
                                        {
                                         gotoxy(75,20);
                                         textcolor(LIGHTRED);
                                         printf("Escolha uma das op��es");
                                         Sleep(1000);break;

                                        }break;

                                case 5: gotoxy(75,20);
                                        textcolor(LIGHTRED);
                                        printf("A Examinar");Sleep(300);printf(".");Sleep(400);printf(".");Sleep(500);printf(".");Sleep(600);system("cls");
                                        system("cls");
                                        gotoxy(45,16);
                                        textcolor(LIGHTCYAN);
                                        printf("Pela op��o que escolheu conseguimos dizer que o doente possa ter contra�do uma:"); //abrir files com if
                                        gotoxy(45,18);
                                        printf("-------------------");
                                        gotoxy(45,19);
                                        printf("| Pedras nos Rins |");
                                        gotoxy(45,20);
                                        printf("-------------------");
                                        gotoxy(45,23);
                                        textcolor(WHITE);
                                        printf("Quer saber mais sobre esta doen�a? [Use as palavras 'sim' ou 'nao']\n");
                                        gotoxy(45,25);
                                        gets(escolha2);
                                        system("cls");

                                        if (strcmp(sn,escolha2)==0)
                                        {
                                             system("Pedra.txt");break;

                                        }

                                        else if(strcmp(ns,escolha2)==0)
                                        {
                                         system("cls");
                                         medico();break;
                                        }

                                        else
                                        {
                                         gotoxy(75,20);
                                         textcolor(LIGHTRED);
                                         printf("Escolha uma das op��es");
                                         Sleep(1000);break;

                                        }break;

                                case 6: gotoxy(75,20);
                                        textcolor(LIGHTRED);
                                        printf("A Examinar");Sleep(300);printf(".");Sleep(400);printf(".");Sleep(500);printf(".");Sleep(600);system("cls");
                                        system("cls");
                                        gotoxy(45,16);
                                        textcolor(LIGHTCYAN);
                                        printf("Pela op��o que escolheu conseguimos dizer que o doente possa ter contra�do uma:"); //abrir files com if
                                        gotoxy(45,18);
                                        printf("-------------");
                                        gotoxy(45,19);
                                        printf("| Pneumonia |");
                                        gotoxy(45,20);
                                        printf("-------------");
                                       gotoxy(45,23);
                                        textcolor(WHITE);
                                        printf("Quer saber mais sobre esta doen�a? [Use as palavras 'sim' ou 'nao']\n");
                                        gotoxy(45,25);
                                        gets(escolha2);
                                        system("cls");

                                        if (strcmp(sn,escolha2)==0)
                                        {
                                             system("Pneumonia.txt");break;

                                        }

                                        else if(strcmp(ns,escolha2)==0)
                                        {
                                         system("cls");
                                         medico(); break;
                                        }

                                        else
                                        {
                                         gotoxy(75,20);
                                         textcolor(LIGHTRED);
                                         printf("Escolha uma das op��es");
                                         Sleep(1000);break;

                                        }break;

                                case 7: gotoxy(77,20);
                                        textcolor(LIGHTRED);
                                        printf("A voltar");Sleep(200);printf(".");Sleep(300);printf(".");Sleep(400);printf(".");Sleep(500);system("cls");break;

                                default: gotoxy(75,20);
                                         textcolor(LIGHTRED);
                                         printf("Escolha uma das op��es");
                                         Sleep(1000);break;

                            }break;

                            }while(sintomas!=7);break;


                    case 2:
                            do{//case para registar a doen�a e a hora a que diagnosticou. para depois visualizar a partir do txt.
                            system("cls");
                            textcolor(LIGHTCYAN);
                            gotoxy(70,16);
                            printf("---------------------------------");
                            gotoxy(70,17);
                            printf("|   > [1]--- Registar doen�as   |");
                            gotoxy(70,19);
                            printf("|   > [2]--- Visualizar conta   |");
                            gotoxy(70,21);
                            printf("|   > [3]---      Voltar        |");
                            gotoxy(70,22);
                            printf("---------------------------------");
                            gotoxy(70,24);
                            scanf("%i%*C", &escolha3);fflush(stdin);
                            system("cls");

                            switch(escolha3)
                            {
                                case 1:
                                        time(&rawtime);
                                        timeinfo=localtime(&rawtime);
                                        gotoxy(50,19);
                                        printf("----------------------------------------");
                                        gotoxy(50,20);
                                        printf("| Qual a doen�a que o doente contraiu? |");
                                        gotoxy(50,21);
                                        printf("----------------------------------------");
                                        gotoxy(50,22);
                                        textcolor(WHITE);
                                        printf("Use as palavras [pneumonia],[gripe],[conjuntivite],[amigdalite],[pedra],[gastroenterite]");
                                        gotoxy(50,24);
                                        gets(palavradoente);
                                        aq=fopen(login.nome,"a+");//a+ para adicionar ao txt da conta.
                                        fprintf(aq,"\nDiagnosticou %s no dia %s",palavradoente,asctime(timeinfo));
                                        fclose(aq);
                                        system("cls");
                                        gotoxy(75,20);
                                        textcolor(LIGHTCYAN);
                                        printf("Registado na conta do doente");
                                        Sleep(2200);
                                        break;

                                case 2: textcolor(WHITE);
                                        gotoxy(65,15);
                                        printf("Neste passo pedimos que veja o manual de utilizador");
                                        gotoxy(65,18);
                                        printf("Siga os passos indicados pelo manual no passo 7, tecla 2");
                                        gotoxy(65,21);
                                        printf("Vai ter de abrir a pasta do programa e encontrar a ficha do doente");
                                        gotoxy(65,23);
                                        printf("Obrigado");
                                        textcolor(GREEN);
                                        gotoxy(65,25);
                                        system("pause");
                                        break;//ver como consigo ligar a conta aos txt's

                                case 3: gotoxy(77,20);
                                        textcolor(LIGHTRED);
                                        printf("A voltar");Sleep(100);printf(".");Sleep(200);printf(".");Sleep(300);printf(".");Sleep(400);system("cls");break;

                                default: gotoxy(75,20);
                                         textcolor(LIGHTRED);
                                         printf("Escolha uma das op��es");
                                         Sleep(1000);break;
                            }

                        }while(escolha3!=3);break;



                    case 3: system("cls");
                            medicamentos();break;//chamar a fun�ao dos medicamentos



                    case 4: //case para fazer log out da conta
                            system("cls");
                            gotoxy(73,20);
                            textcolor(LIGHTRED);
                            printf("login out");Sleep(200);printf(".");Sleep(300);printf(".");Sleep(400);printf(".");Sleep(500);system("cls");break;

                    default: gotoxy(75,22);
                             textcolor(LIGHTRED);
                             printf("Escolha uma das op��es");
                             Sleep(1000);break;


                }

                }while(menu2!=4);break;


        case 2: registo();//chamar a fun�ao de registo
                gotoxy(70,20);
                printf("A registar, espere um pouco.");Sleep(400);printf(".");Sleep(500);printf(".");Sleep(600);printf(".");Sleep(600);//fingir que esta a carregar
                system("cls");
                break;


        case 3: //sair do programa
                gotoxy(73,20);
                textcolor(LIGHTRED);
                printf("A sair do seu M�dico virtual");Sleep(200);printf(".");Sleep(300);printf(".");Sleep(400);printf(".");Sleep(500);
                system("cls");
                gotoxy(70,20);
                textcolor(LIGHTRED);
                printf("Para qualquer diagn�stico visite Medcare!\n");
                Sleep(1500);break;


        default: gotoxy(75,22);
                 textcolor(LIGHTRED);
                 printf("Escolha uma das op��es");
                 Sleep(1000);break;
    }

    }while(escolha!=3);//para sair quando carregar no tres

    return 0;
}
