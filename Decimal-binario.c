#include <stdio.h>

int main (){
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    while((n1 != -1) && (n2 != -1)){
        int pot1=1, pot2 = 1;
    // 1 numero

        // calculo da potencia
        while((pot1 * 2) <= n1){
            pot1 = 2 * pot1;
        }
        // potencia maior que 0
        while(pot1 > 0){
            // se consegue dividir colcoar 1 se n 0
            if(pot1 <= n1){
                printf("1");
                n1 = n1 - pot1;
            }else{
                printf("0");
            }
            // nova potencia
            pot1 = pot1/2;
        }
  
        printf(" ");
    // 2 numero
        // calculo da potencia      
        while((pot2 * 2) <= n2){
            pot2 = 2 * pot2;
        }
         // potencia maior que 0
        while(pot2 > 0){
            // se consegue dividir colcoar 1 se n 0
            if(pot2 <= n2){
                printf("1");
                n2 = n2 - pot2;
            }else{
                printf("0");
            }
            // nova potencia
            pot2 = pot2/2;
        }
        printf("\n");
        // pegando novos numeros
        scanf("%d %d", &n1, &n2);
    }
    
    
    
    return 0;
}