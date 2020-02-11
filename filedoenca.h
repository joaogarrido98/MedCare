#ifndef FILEDOENCA_H_INCLUDED
#define FILEDOENCA_H_INCLUDED

//funçoes para fazer as matrizes de cada doença


comum()
{
    gotoxy(50,13);
    int i,j;
    char medicamento[3][35]={"cegripe", "Ibuprofeno", "Bissolvon"};

    for (i=0;i<3; i++)
    {
    printf("\n                                                                               %2i-", (i+1));
    for (j=0;j<35; j++)
    {
    printf("%c", medicamento[i][j]);
    }
    }


}

grave()
{
    gotoxy(50,13);
    int i,j;
    char medicamento[3][35]={"Roflin", "Ibuprofeno", "benoroun"};

    for (i=0;i<3; i++)
    {
    printf("\n                                                                               %2i-", (i+1));
    for (j=0;j<35; j++)
    printf("%c", medicamento[i][j]);
    }


}

olhos()
{
    gotoxy(50,13);
    int i,j;
    char medicamento[3][35]={"soro fisiológico", "Maxitrol", "Visadron"};

    for (i=0;i<3; i++)
    {
    printf("\n                                                                               %2i-", (i+1));
    for (j=0;j<35; j++)
    printf("%c", medicamento[i][j]);
    }

}

rins()
{
    gotoxy(50,13);
    int i,j;
    char medicamento[3][35]={"aloprurinol", "liquidos", "Dpenicilamina"};

    for (i=0;i<3; i++)
    {
    printf("\n                                                                                 %2i-", (i+1));
    for (j=0;j<35; j++)
    printf("%c", medicamento[i][j]);
    }

}

barriga()
{
    gotoxy(50,13);
    int i,j;
    char medicamento[3][35]={"Ciprofloxacina", "Ofloxacina", "Lomefloxacina"};

    for (i=0;i<3; i++)
    {
    printf("\n                                                                               %2i-", (i+1));
    for (j=0;j<35; j++)
    printf("%c", medicamento[i][j]);
    }

}

garganta()
{
    gotoxy(50,13);
    int i,j;
    char medicamento[3][35]={"Amoxicilina", "Penicilina intramuscular", "Claritromicina"};

    for (i=0;i<3; i++)
    {
    printf("\n                                                                            %2i-", (i+1));
    for (j=0;j<35; j++)
    printf("%c", medicamento[i][j]);
    }

}


#endif // FILEDOENCA_H_INCLUDED
