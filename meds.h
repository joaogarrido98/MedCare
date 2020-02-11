#ifndef MEDS_H_INCLUDED
#define MEDS_H_INCLUDED

//fun��o para usar a data local do computador.


tempo()
{
    time_t rawtime;
    struct tm*timeinfo;
    int a, b,tempo;

    time(&rawtime);
    timeinfo=localtime(&rawtime);
    printf ("Hora local: %s", asctime (timeinfo));
    //esta parte � para registar a data num txt para mais tarde ler e usar no case historial como a hora a que ele apanhou a doen�a
    FILE*ptr;
    ptr=fopen("tempo.txt","w");
    fprintf(ptr,"Hora local:%s",asctime(timeinfo));
    fclose(ptr);

}

#endif // MEDS_H_INCLUDED
