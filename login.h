#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED

struct login login;

registo()//função de registo do cliente
{

    system("cls");
    gotoxy(66,8);
    textcolor(GREEN);
    printf("Bem vindo ao registador de conta");
    printf("\n");
    gotoxy(70,10);
    printf("Qual o seu peso:");
    scanf("%i",&login.peso);fflush(stdin);
    gotoxy(70,12);
    printf("Qual a sua altura em cm:");
    scanf("%i",&login.altura);fflush(stdin);
    gotoxy(70,14);
    printf("fuma?[Use sim ou nao]");
    gotoxy(70,15);
    gets(login.fumar);
    gotoxy(70,17);
    printf("Tem alguma doença?");
    gotoxy(70,18);
    gets(login.maligno);
    gotoxy(70,22);
    printf("Escolha o seu username: ");
    gets(login.nome);
    printf("\n");
    gotoxy(70,24);
    printf("Escolha uma password: ");
    gets(login.pass);
    strcat(login.nome , login.pass);

    FILE*aq;
    aq=fopen(login.nome,"w");
    fprintf(aq,"Conta de doente.\n username:%s\n password:%s\n peso:%i cm\n altura:%i quilos\n fuma:%s\n doenças:%s", login.nome , login.pass,login.peso, login.altura,login.fumar,login.maligno);
    fclose(aq);
    system("cls");
}


logindo()//função para fazer login
{
    textcolor(GREEN);
    system("cls");
    gotoxy(64,12);
    printf("Digite o seu utilizador e password para entrar");
    printf("\n");
    gotoxy(72,19);
    printf(" Username: ");
    gets(login.nome);
    printf("\n");
    gotoxy(72,23);
    printf(" Password: ");
    gets(login.pass);
    strcat(login.nome,login.pass);
    FILE*aq;
    aq = fopen(login.nome, "r");

    if(!aq)
    {
        fclose(aq);
        system("cls");
        printf("\n\n");
        gotoxy(73,19);
        printf("Login incorreto, por favor repita\n");
        gotoxy(73,23);
        system("pause");
        system("cls");
        logindo();
    }

    else
    {
        system("cls");
    }
}

#endif // LOGIN_H_INCLUDED
