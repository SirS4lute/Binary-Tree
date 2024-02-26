# Binary Tree - Definition 🇺🇸
A binary tree is a non-linear tree-like data structure with at most two children for each parent.
Each node in a binary tree has a left and right reference along with the data element. The node at the top of a tree line is called the root node

Binary Tree - Cost Log(n):
```
Root node, with subtrees as children
          -
         ( ) Root node
        / \
      ( ) ( ) Subtrees / Branch
     / \
   ( ) ( ) No branch
            \
            ( ) Leaf node
    
Each node has 0, 1 or 2 children
       -
      (R) Root node
     / \
   (E) (D) Subtrees
    | \Right son
    \Left child
```

## Characteristics of a binary tree
  * Walk the tree from top to bottom
  * The length of a path in the tree is n-1
  * The height of a binary tree is the length of the longest path plus one (largestPath+1)
  * The weight of the tree is the sum of the weights of the subtrees plus one, recursively
  * The recursive stopping point for a tree is if the branch is actually a leaf (empty tree or with just one node)
  * Two trees are equal when: They are empty or have the same elements in the same positions
  
Complete Binary Tree is when the internal elements (branches and not leaves) have two sub-trees:
```
Full and balanced tree
     -
    (R) Level 0
   / \
 (E) (D) Level 1
```

Tree height is the number of nodes in the longest path, number of elements is (n = 2^h -1):
```
n = 2^h -1
h = 2 -> Height of previous tree (level 0 + level 1)
n = 2^2 - 1 = 3 -> Calculating the number of elements in the previous example
n = 3 -> Number of elements in the tree
```

## Algorithm complexity - worst case of a binary tree:
  * Tree height is proportional to log(n), where n is the number of elements in the tree
  * The number of comparisons in a binary tree is equal to its height, but there are different cases depending on the tree
```
  _log(n)_ ​​=> because the tree is binary
     two
  In other words, the base (2) raised to a number (x) which results in the number of elements in the tree (n)
  
  _log(7)_ => 7 = 2^x = 2.65
     two
  
  _log(8)_ => 8 = 2^x = 3
     two
    
  floor[2,65] = 2 //use in binary tree
  ceiling[2.65] = 3
```
  
The worst case number of comparisons is twice the height of the tree, with the height of a tree with n nodes being between lg(n) and n. A tree is considered balanced or balanced if its height is of the order of lg(n).

### Example of ordered tree
```
Tree sorting // Search tree
            --
           (20) -> 0
          / \
      (10) (30) -> 1
      / \ / \
    (5) (15)(25) (35) -> 2
             /
          (22) -> 3
```

### Functions we are using to operate binary trees in this repository
```
  //Create and return an empty binary tree
  Arbin inicArbin( void );
   
  //Returns the left subtree
  Arbin leftArbin( Arbin a);
   
  //Returns the right subtree
  Arbin dirArbin(Arbin a);
   
  //Returns the root
  TypeA rootArbin( Arbin a);
   
  //Destroys the binary tree, returning all occupied memory
  void destroyArbin(Arbin a);
  
  //Add node so that it is balanced
  Arbin adicArbin(Arbin a, TypeA elem);
  
  //Returns the weight of the tree
  int weightArbin(Arbin arv);
  
  //Check if it is empty
  int isEmpty(Arbin arv);
  
  //Checks if the element is in the tree
  int thisArbin( Arbin a, TypeA elem);
   
  //Checks if the element is in the search tree
  int thisArbinSearch( Arbin a, TypeA elem);
  
  //Insert element into the binary search tree
  Arbin insArbinSearch(Arbin a , TypeA elem);
  
  //Counts the number of leaves on a tree
  int numLeaves(Arbin arv);
  
  // Counts the number of times an element appears
  int numOccurencies(Arbin arv, int elem);
  
  //Returns the last rightmost sheet
  Arbin dirLeaf(Arbin a);
  
  //Returns the last leftmost sheet
  Arbin leftLeaf(Arbin a);
  
  //Counts elements in the level
  int contLevel( Arbin a, int level);
  
  //Show arv
  void showArv(Arbin a);
```

All the content in this repository dates back to my time at college, the theoretical material mostly comes from professors (that's why I give them credit here),
with some of my writings. The code found here is entirely __my own__.

# Árvore Binária - Definição 🇧🇷
Uma árvore binária é uma estrutura de dados não linear do tipo árvore com no máximo dois filhos para cada pai. 
Cada nó em uma árvore binária possui uma referência esquerda e direita junto com o elemento de dados. O nó no topo da hierarquia de uma árvore é chamado de nó raiz

Árvore Binária - Custo log(n):
```
Nó raiz, com sub-árvores como filhos
          - 
         ( ) Nó raiz
        /   \
      ( )   ( ) Sub-Árvores / Ramo
     /   \
   ( )   ( ) Nó ramo
            \
            ( ) Nó folha
    
Cada nó tem 0, 1 ou 2 filhos    
       -
      (R) Nó raiz
     /   \
   (E)   (D) Sub-Árvores
    |      \Filho direito 
    \Filho esquerdo
```

## Características de uma árvore binária
  * Anda-se na árvore de cima pra baixo
  * A longitude de um caminho na árvore é n-1
  * A altura de uma árvore binária é a longitude do maior caminho mais um (maiorCaminho+1)
  * O peso da árvore é a soma dos pesos das sub-árvores mais um, recursivamente
  * O ponto de parada recursiva para árvore é o ramo ser, na verdade, uma folha (árvore vazia ou somente com um nó)
  * Duas árvores são iguais quando: São vazias ou tem os mesmos elementos nas mesmas posições
  
Árvore Binária completa é quando os elementos internos (ramos e não folhas) possuem as duas sub-árvores:
```
Árvore cheia e balanceada
     -
    (R)   Nível 0
   /   \
 (E)   (D)  Nível 1 
```

Altura da árvore é o número de nós no maior caminho, quantidade de elementos é (n = 2^h -1):
```
n = 2^h -1
h = 2 -> Altura da árvore anterior (nível 0 + nível 1)
n = 2^2 - 1 = 3 -> Calculando a número de elementos do exemplo anterior
n = 3 -> Número de elementos na árvore
```

## Complexidade de algoritmo - pior caso de uma árvore binária:
  * Altura da árvore é proporcional a log(n), sendo n o número de elementos na árvore
  * O número de comparações numa árvore binária é igual a sua altura, porém existem casos diferentes dependendo da árvore
```
  _log(n)_ => pois a árvore é binária
     2
  Ou seja, a base (2) elevada a um número (x) que dá como resultado o número de elementos na árvore (n)
  
  _log(7)_ => 7 = 2^x = 2,65
     2
  
  _log(8)_ => 8 = 2^x = 3
     2
    
  piso[2,65] = 2 //usar na árvore binária
  teto[2,65] = 3
```
  
O pior caso de número de comparações é o dobro da altura da árvore, sendo que a altura de uma árvore com n nós fica entre lg(n) e n. Uma árvore é considerada equilibrada ou balanceada se sua altura é da ordem de lg(n).

### Exemplo de árvore ordenada
```  
Ordenação na árvore // Árvore de busca
            --
           (20)  -> 0
          /    \
      (10)      (30) -> 1
      /  \      /  \
    (5)  (15)(25)  (35) -> 2
             /
          (22) -> 3
```

### Funções que estamos utilizando para operar árvores binárias nesse repositório
```
  //Cria e retorna uma arvore binaria vazia
  Arbin inicArbin( void );
   
  //Retorna a sub-árvore esquerda
  Arbin esqArbin( Arbin a);
   
  //Retorna a sub-árvore direita
  Arbin dirArbin( Arbin a);
   
  //Retorna a raiz
  TipoA raizArbin( Arbin a);
   
  //Destrói a árvore binária, retornando toda a memória ocupada
  void destruirArbin( Arbin a);
  
  //Adiciona nó de forma que fique balanceada
  Arbin adicArbin(Arbin a, TipoA elem);
  
  //Retorna o peso da árvore
  int pesoArbin(Arbin arv);
  
  //Verifica se é vazia
  int isVazia(Arbin arv);
  
  //Verifica se o elemento está na árvore
  int estaArbin( Arbin a, TipoA elem);
   
  //Verifica se o elemento está na árvore de busca 
  int estaArbinBusca( Arbin a, TipoA elem);
  
  //Inserir elem na árvore binária de busca
  Arbin insArbinBusca(Arbin a , TipoA elem);
  
  //Conta a quantidade de folhas de uma árvore
  int numFolhas(Arbin arv);
  
  //Conta a quantidade de vezes que um elem aparece
  int numOcorrencias(Arbin arv, int elem);
  
  //Retorna o a última folha mais a direita
  Arbin dirFolha(Arbin a);
  
  //Retorna o a última folha mais a esquerda
  Arbin esqFolha(Arbin a);
  
  //Conta elementos no nível
  int contNivel( Arbin a, int nivel);
  
  //Mostra arv
  void mostraArv(Arbin a);
```

Todo o conteúdo presente neste repositório data da minha época na faculdade, o material teórico advém na sua maior parte de professores (por isso dou crédito aqui a eles), 
com alguns escritos meus. O código encontrado aqui é inteiramente de __minha autoria__.
  
