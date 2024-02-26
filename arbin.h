//TAD Arbin
//#include <stdio.h>
 
/*
Funções do TAD Arbin
•Arbin inicArbin( void ) : cria e retorna uma arvore binaria vazia
•Arbin esqArbin( Arbin a): retorna a subarvore esquerda
• Pre: a!=arvore vazia
• Pos: esqArbin = subarvore esquerda
•Arbin dirArbin( Arbin a): retorna a subarvore direita
• Pre: a!=arvore vazia
• Pos: dirArbin = subarvore direita
•TipoA raizArbin( Arbin a): retorna a raiz
• Pre: a!=arvore vazia
• Pos: raizArbin = elem
void destruirArbin( Arbin a): destrói a arvore binária, retornando toda 
a memória ocupada.
*/
 
typedef int TipoA;
 
typedef struct NodoArbin{
    TipoA info;
    struct NodoArbin *esq, *dir;
}Tarbin, *Arbin;
 
// cria e retorna uma arvore binaria vazia
Arbin inicArbin( void );
 
//retorna a subarvore esquerda
Arbin esqArbin( Arbin a);
 
//retorna a subarvore direita
Arbin dirArbin( Arbin a);
 
//retorna a raiz
TipoA raizArbin( Arbin a);
 
//destrói a arvore binária, retornando toda a memória ocupada.
void destruirArbin( Arbin a);

//Adiciona no de forma que fique balanceada
Arbin adicArbin(Arbin a, TipoA elem);

//retorna o peso da árvore
int pesoArbin(Arbin arv);

//verifica se é vazia
int isVazia(Arbin arv);

//verifica se o elemento está na árvore
int estaArbin( Arbin a, TipoA elem);
 
//verifica se o elemento está na árvore de busca 
int estaArbinBusca( Arbin a, TipoA elem);

//Inserir elem na árvore binária de busca
Arbin insArbinBusca(Arbin a , TipoA elem);

//conta a quantidade de folhas de uma árvore
int numFolhas(Arbin arv);

//conta a quantidade de vezes que um elem aparece
int numOcorrencias(Arbin arv, int elem);

//retorna o a última folha mais a direita
Arbin dirFolha(Arbin a);

//retorna o a última folha mais a esquerda
Arbin esqFolha(Arbin a);

//conta elementos no nivel
int contNivel( Arbin a, int nivel);

//mostra arv
//void mostraArv(Arbin a);