#include <stdio.h>

void adicionarNavioDiagonal(int tabuleiro[10][10]){
for (int i = 0; i < 10; i++)
{
  tabuleiro[i][9-i] = 1; //marca a posição da direta para a esquerda
}
}


#define LINHAS 10
#define COLUNAS 10

int main(){
int tabuleiro[LINHAS][COLUNAS] = {0};

adicionarNavioDiagonal(tabuleiro);

// colunas
printf("\t");
for (int i = 0; i < COLUNAS; i++)
{
  printf("%c\t", 'A' + i);
}
printf("\n");

// linhas 
for (int i = 0; i < LINHAS; i++)
{
    printf("%d\t", i +1);
    for (int j = 0; j < COLUNAS; j++)
    {
       printf("%d\t", tabuleiro[i][j]);
    }
    printf("\n");
}

return 0;
}