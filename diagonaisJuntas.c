#include <stdio.h>

void adicionarNavioDiagonalEsquerda(int tabuleiro[10][10]){
for (int i = 1; i < 4; i++)
{
  tabuleiro[i][9-i] = 1;
}
}
void adicionarNavioDiagonalDireita(int tabuleiro[10][10]){
   for (int i = 1; i < 4; i++)
   {
    tabuleiro[i][i] = 1;
   }
   


}

#define LINHAS 10
#define COLUNAS 10

int main(){
int tabuleiro[LINHAS][COLUNAS] = {0};

adicionarNavioDiagonalEsquerda(tabuleiro);

adicionarNavioDiagonalDireita(tabuleiro);
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