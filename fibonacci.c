#include <stdio.h>
#include<stdlib.h>

/*Dado a sequência de Fibonacci, onde se inicia por 0 e 1 
e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), 
escreva um programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence 
ou não a sequência.
*/
int main(void){

    int n, i;
    int valor1=0, valor2=1;
    int fibo=0;
    
    printf("Digite o valor que gostaria de verificar se está presente na sequência de Fibonacci! ");
    scanf("%d",&n);

    //printf("%d\n", n);
    
    if(n==0||n==1){
        printf("O número pertence a sequência de Fibonacci");
    }
        for(i=2;i<n;i++){
        fibo = valor1+valor2;
        
        if(fibo=n){
        printf("O número pertence a sequência de Fibonacci");
        return EXIT_SUCCESS;
    }
        }
    valor1 = valor2;
    valor2 = fibo;

    return EXIT_SUCCESS;
}
