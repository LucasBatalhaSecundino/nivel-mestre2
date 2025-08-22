#include <stdio.h>

int main() {
    int opcao;
    int nota1, nota2, nota3;

    printf("Menu de gerenciamento de estudandtes\n");
    printf("1. Calcular média\n");
    printf("2. Determinar status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular a média\n")
        printf("Digite a primeira nota: \n");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: \n");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: \n");
        scanf("%f", &nota3);
        if ((nota1 >=0 && nota1 <= 10) && (nota2 >= 0 && nota2 <=10) && (nota3 >= 0 && nota3 <=10 ))  
        {
            
        }
        
        break;
     case 2: 
     printf("Determinar status\n");
     break;
     case 3:
     printf("Saindo do programa\n");
     break;
    
    default:
    printf("Opção invalida!!")
        break;
    }

 

  return 0;
}