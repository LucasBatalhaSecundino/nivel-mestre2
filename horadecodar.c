#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
int numerojogador, numerocomputador, resultado;
char tipocomparacao;

// gerar um número aleatorio
srand(time(0));
numerocomputador = rand() % 100 + 1;// numero entre 100 e 1

//inicio do jogo
printf("Bem vindo ao jogo\n");
printf("Você deve escolher um número e o tipo de comparação\n");
printf("M. Maior\n");
printf("N. Menor\n");
printf("I. Igual\n");

printf("Escolha a comparação: ");
scanf("%c", &tipocomparacao);
printf("Escolha um número de 1 a 100: ");
scanf("%d", &numerojogador);

//exibir o número do computador

printf("O número do computador foi: %d\n", numerocomputador);

switch (tipocomparacao)
{
case 'M':
  resultado = numerojogador > numerocomputador ? 1 : 0;
  printf("Você escolheu a opção maior\n");
  
    break;
case 'N':
resultado = numerojogador < numerocomputador ? 1 : 0;
printf("Você escolheu a opção menor\n");

break;

case 'I':
resultado = numerojogador == numerocomputador ? 1 : 0;
printf("Você escolheu a opção igual\n");

break;

default:
    break;

}
printf("O numéro do computador é: %d e o numéro do jogador é: %d\n", numerocomputador, numerojogador);
if (resultado == 1) 
{
    printf("Parabéns você venceu\n");
}else{
    printf("Você perdeu\n");
}



}