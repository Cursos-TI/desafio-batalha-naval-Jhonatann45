#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void imprimirTabuleiro(int tabuleiro[LINHAS][COLUNAS]){
   printf("\t");
   for (int i = 0; i < COLUNAS; i++)
   {
   printf("%c\t", 'A' + i);
   }
   printf("\n");


for (int i = 0; i < LINHAS; i++)
{
    printf("%d\t", i + 1);
    for (int j = 0; j < COLUNAS; j++)
    {
       printf("%d\t", tabuleiro[i][j]);
    }
    printf("\n");
}
}

// função para adicionar a habilidade em cone no tabuleiro
void adicionarCone(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna){
for (int i = 0; i < 3; i++)
{
    for (int j = coluna - i; j <= coluna + i; j++)
    {
        if (linha + i < LINHAS && j >= 0 && j < COLUNAS)
        {
            tabuleiro[linha + i][j] = 2;
        } 
      }
    }
  }


// função para adicionar a habilidade em cruz no tabuleiro
void adicionarCruz(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna){
    tabuleiro[linha][coluna] = 4;

  
    // esquerda e direita (na mesma linha)
    if (coluna - 2 >= 0) tabuleiro[linha][coluna - 2] = 4; // esquerda
    if (coluna + 2 < COLUNAS) tabuleiro[linha][coluna + 2] = 4; // direita

    // esquerda e direita (na mesma linha)
    if (coluna - 1 >= 0) tabuleiro[linha][coluna - 1] = 4; // esquerda
    if (coluna + 1 < COLUNAS) tabuleiro[linha][coluna + 1] = 4; // direita // esquerda e direita (na mesma linha)
 
    // cima e baixo
    if (linha - 1 >= 0) tabuleiro[linha - 1][coluna] = 4;  // cima
    if (linha + 1 < LINHAS) tabuleiro[linha + 1][coluna] = 4; // baixo

}


// Função para adicionar a habilidade em octaedro no tabuleiro
void adicionarOctaedro(int tabuleiro[LINHAS][COLUNAS], int linha, int coluna){

// marca a posição central
    tabuleiro[linha][coluna] = 3;

//  Marca as posições ao redor (cima, baixo, esquerda, direita)
if (linha - 1 >= 0) tabuleiro[linha - 1][coluna] = 3; // cima
if (linha + 1 < LINHAS) tabuleiro[linha + 1][coluna]= 3; // baixo
if (coluna - 1 >= 0) tabuleiro[linha][coluna - 1] = 3; //esquerda
if (coluna + 1 < COLUNAS) tabuleiro[linha][coluna + 1] = 3; // direita
}


int main(){
int tabuleiro[LINHAS][COLUNAS] = {0}; // iniciar tabuleiro com 0

// teste habilidades

adicionarCone(tabuleiro,1,2); // Adiciona um cone na posição (2, 2)

adicionarCruz(tabuleiro, 5,5);  // Adiciona uma cruz na posição (6,6)

adicionarOctaedro(tabuleiro, 7,7);  // Adiciona um octaedro na posição (8, 8)

imprimirTabuleiro(tabuleiro);  // Imprime o tabuleiro após as modificações


return 0;
}
