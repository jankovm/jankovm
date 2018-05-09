#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
typedef struct cvor
{
    int info;
    struct cvor *next;



} TCvor;

int unosElementa (TCvor **phead, int el, int pos);


#endif // LISTA_H_INCLUDED
