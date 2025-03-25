#include <stdio.h>
   //navio horizontal
 void adicionarNavioHorizontal(int tabuleiro[10][10], int linha, int coluna, int tamanho){
 for (int i = 0; i < tamanho; i++)
 {
    tabuleiro[linha][coluna + i] = 1;
 }
}
 //Navio vertical
 void adicionarNavioVertical(int tabuleiro [10][10], int linha, int coluna, int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
     tabuleiro[linha + i][coluna] = 1;
    }

 }

 #define LINHAS 10
 #define COLUNAS 10


int main(){
int tabuleiro [LINHAS][COLUNAS] = {0};

// impressão dos navios no tabuleiro
   adicionarNavioHorizontal(tabuleiro, 2,3,3);

   adicionarNavioVertical(tabuleiro, 4,5,4);

// impressao das colunas(A,B,C..)
printf("\t");
for (int i = 0; i < COLUNAS; i++)
{
   printf("%c\t" , 'A'+ i);
}
printf("\n");


// imprime linhas numeradas // loops aninhados
for (int i = 0; i < LINHAS; i++)
{
printf("%d\t" , i + 1);
for (int j = 0; j < COLUNAS; j++)
{
   printf("%d\t", tabuleiro[i][j]);
}
printf("\n");
}


return 0;

}