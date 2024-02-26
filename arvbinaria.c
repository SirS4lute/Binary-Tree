#include <stdio.h>
#include <stdlib.h>
#include "arbin.h"
#include "arbin.c"

int main()
{
    Arbin arv = inicArbin();
    Arbin arvBusca = inicArbin();
    arv = adicArbin(arv, 10);
    
    adicArbin(arv, 5);
    adicArbin(arv, 15);
    adicArbin(arv, 4);
    adicArbin(arv, 12);
    adicArbin(arv, 8);
    
    printf("%d", raizArbin(arv));
    printf("%d", raizArbin(arv->esq));
    printf("%d", raizArbin(arv->dir));
    printf("%d", raizArbin(arv->esq->esq));
    printf("%d", raizArbin(arv->dir->esq));
    printf("%d", raizArbin(arv->esq->dir));
    
    printf("\n%d", pesoArbin(arv));
    
    printf("\n%d", estaArbin(arv, 15));
    
    arvBusca = insArbinBusca(arvBusca, 50);
    
    insArbinBusca(arvBusca, 40);
    insArbinBusca(arvBusca, 30);
    insArbinBusca(arvBusca, 45);
    insArbinBusca(arvBusca, 55);
    insArbinBusca(arvBusca, 55);
    insArbinBusca(arvBusca, 52);
    
    printf("\n%d", raizArbin(arvBusca));
    printf("%d", raizArbin(arvBusca->esq));
    printf("%d", raizArbin(arvBusca->dir));
    printf("%d", raizArbin(arvBusca->esq->esq));
    printf("%d", raizArbin(arvBusca->dir->esq));
    printf("%d", raizArbin(arvBusca->esq->dir));
    printf("%d", raizArbin(arvBusca->dir->esq->esq));
    
    printf("\n%d", pesoArbin(arvBusca));
    
    elimArbinBusca(arvBusca, 40);
    printf("\n%d", raizArbin(arvBusca->esq));
    
    printf("\n%d", numFolhas(arvBusca));
    
    printf("\n%d\n", numOcorrencias(arvBusca, 55));
    
    Arbin arvBusca2 = inicArbin();
    
    arvBusca2 = insArbinBusca(arvBusca2, 5);
    
    insArbinBusca(arvBusca2, 4);
    insArbinBusca(arvBusca2, 6);
    insArbinBusca(arvBusca2, 2);
    insArbinBusca(arvBusca2, 7);
    insArbinBusca(arvBusca2, 3);
    insArbinBusca(arvBusca2, 8);
    insArbinBusca(arvBusca2, 1);
    
    //mostraArv(arvBusca2);
    
    printf(" %d ", raizArbin(arvBusca2->esq->esq->esq));
    printf(" %d ", raizArbin(arvBusca2->esq->esq));
    printf(" %d ", raizArbin(arvBusca2->esq->esq->dir));
    printf(" %d ", raizArbin(arvBusca2->esq));
    printf(" %d ", raizArbin(arvBusca2));
    printf(" %d ", raizArbin(arvBusca2->dir));
    printf(" %d ", raizArbin(arvBusca2->dir->dir));
    printf(" %d ", raizArbin(arvBusca2->dir->dir->dir));
    
    printf("\n%d", contNivel(arvBusca2, 3));
    
    return 0;
}