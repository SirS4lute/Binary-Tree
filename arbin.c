
Arbin inicArbin(){
    return NULL;
}

Arbin esqArbin( Arbin a){
    return a->esq;
}
 
Arbin dirArbin( Arbin a){
    return a->dir;
}

TipoA raizArbin( Arbin a){
    return a->info;
}

Arbin adicArbin(Arbin a, TipoA elem){
    if(a == NULL){
        a = (Arbin) malloc(sizeof(struct NodoArbin));
        a->esq = NULL;
        a->dir = NULL;
        a->info = elem;
        return a;
    }
    else if(pesoArbin(a->esq) > pesoArbin(a->dir)){
        if(a->dir == NULL){
            /*a->dir = (Arbin) malloc(sizeof(struct NodoArbin));
            a->dir->esq = NULL;
            a->dir->dir = NULL;
            a->dir->info = elem;
            return NULL;*/
            a->dir = adicArbin(a->dir, elem);
        }
        else
            adicArbin(a->dir, elem);
    }
    else if(pesoArbin(a->dir) >= pesoArbin(a->esq)){
        if(a->esq == NULL){
            /*a->esq = (Arbin) malloc(sizeof(struct NodoArbin));
            a->esq->esq = NULL;
            a->esq->dir = NULL;
            a->esq->info = elem;
            return NULL;*/
            a->esq = adicArbin(a->esq, elem);
        }
        else
            adicArbin(a->esq, elem);
    }
}

int pesoArbin(Arbin arv){ //conta elementos na árvore -> O(n)
    if(isVazia(arv))
      return 0;
    else{
      return 1 + pesoArbin(esqArbin(arv)) + pesoArbin(dirArbin(arv));
    }
}

int estaArbin(Arbin arv, TipoA elem){ //está na árvore? -> O(log (n))
    if(isVazia(arv))
      return 0;
    else if(raizArbin(arv) == elem)
      return 1;
    else{
      if(estaArbin(esqArbin(arv), elem))
        return 1;
      if(estaArbin(dirArbin(arv), elem))
        return 1;
    }
}

int estaArbinBusca(Arbin arv, TipoA elem){ //está na árvore? -> O(log (n))
    if(isVazia(arv))
      return 0;
    else if(raizArbin(arv) == elem)
      return 1;
    else{
        if(raizArbin(arv) > elem){ //se o elemento for menor que a raiz então vai para sub-árvore da esquerda      
          if(estaArbin(esqArbin(arv), elem))
            return 1;
        }
        if(raizArbin(arv) < elem){ //se o elemento for maior que a raiz então vai para sub-árvore da direita
          if(estaArbin(dirArbin(arv), elem))
            return 1;
        }
    }
}

Arbin insArbinBusca(Arbin a , TipoA elem){
    if(a == NULL){
        a = (Arbin) malloc(sizeof(struct NodoArbin));
        a->esq = NULL;
        a->dir = NULL;
        a->info = elem;
        return a;
    }
    else if(elem <= raizArbin(a)){
        if(esqArbin(a) == NULL)
            a->esq = insArbinBusca(esqArbin(a), elem);
        else
            insArbinBusca(esqArbin(a), elem);
    }
    else if(elem > raizArbin(a)){
        if(dirArbin(a) == NULL)
            a->dir = insArbinBusca(dirArbin(a), elem);
        else
            insArbinBusca(dirArbin(a), elem);
    }
}

Arbin removeraiz (Arbin a) {  
    if(esqArbin(a) != NULL){
        Arbin novaRaiz = esqArbin(a);
        Arbin aux = dirFolha(novaRaiz);
        aux->dir = a->dir;
        free(a);
        return novaRaiz;
    }
    if(dirArbin(a) != NULL){
        Arbin novaRaiz = dirArbin(a);
        Arbin aux = esqFolha(novaRaiz);
        aux->esq = a->esq;
        free(a);
        return novaRaiz;
    }
    free(a);
    return NULL;
}

Arbin elimArbinBusca(Arbin a , TipoA elem){ //fazer sem balancear por enquanto
    if(a != NULL){
        if(elem < raizArbin(a)){
            if(elem == raizArbin(esqArbin(a))){
                a->esq = removeraiz(esqArbin(a));
                return a;
            }
            else
                return elimArbinBusca(esqArbin(a), elem);
        }
        if(elem > raizArbin(a)){
            if(elem == raizArbin(dirArbin(a))){
                a->dir = removeraiz(dirArbin(a));
                return a;
            }
            else
                return elimArbinBusca(dirArbin(a), elem);
        }
        else{
            return removeraiz(a);
        }
    }
    else{
        printf("ELEMENTO NAO ENCONTRADO");
        return a;
    }
}

//int contaFolhaArbin(Arbin arv){ //conta elementos na árvore -> O(n)
int numFolhas(Arbin arv){ //conta elementos na árvore -> O(n)
    if(isVazia(arv))
      return 0;
    else if(isVazia(esqArbin(arv)) && isVazia(dirArbin(arv)))
      return 1;
    else
      return numFolhas(esqArbin(arv)) + numFolhas(dirArbin(arv));
}

int numOcorrencias(Arbin arv, int elem){ //conta elementos na árvore -> O(n)
    if(isVazia(arv))
      return 0;
    else if(raizArbin(arv) == elem)
      return 1 + numOcorrencias(esqArbin(arv), elem) + numOcorrencias(dirArbin(arv), elem);
    else
      return numOcorrencias(esqArbin(arv), elem) + numOcorrencias(dirArbin(arv), elem);
}

Arbin dirFolha(Arbin a){
    if(isVazia(dirArbin(a)))
        return a;
    else
        return dirFolha(a->dir);
}

Arbin esqFolha(Arbin a){
    if(isVazia(esqArbin(a)))
        return a;
    else
        return esqFolha(a->esq);
}

int isVazia(Arbin arv){
    if(arv == NULL)
      return 1;
    else
      return 0;
}

int contNivel( Arbin a, int nivel){
    if(isVazia(a))
        return 0;
    if(!isVazia(a) && nivel >= 0){
        if(nivel == 0)
            return 1;
        else{
            
            return contNivel(esqArbin(a), nivel - 1) + contNivel(dirArbin(a), nivel - 1);
            
        }
    }
}

/*void mostraArv(Arbin a){
    if(isVazia(a)){
        printf(" X "); 
    }
    else{
        
        mostraArv(esqArbin(a));
        printf("%d", raizArbin(a));
        mostraArv(dirArbin(a));
        printf("%d", raizArbin(a));
        
    }
}*/