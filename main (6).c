#include <stdio.h> 
  
 void valor(int *p) { 
     printf("Digite o número: "); 
     scanf("%d", p); 
 } 
  
 void somavalor(int *p1, int *p2) { 
     printf("Soma: %d + %d = %d\n", *p1, *p2, (*p1 + *p2)); 
 } 
  
 void subvalor(int *p1, int *p2) { 
     printf("Subtração: %d - %d = %d\n", *p1, *p2, (*p1 - *p2)); 
 } 
  
 void divivalor(int *p1, int *p2) { 
     printf("Divisão: %d / %d = %d\n", *p1, *p2, (*p1 / *p2)); 
 } 
  
 void multivalor(int *p1, int *p2) { 
     printf("Multiplicação: %d * %d = %d\n", *p1, *p2, (*p1 * *p2)); 
 } 
  
 int main() { 
     int n1, n2; 
     int *p1, *p2; 
  
     p1 = &n1; 
     p2 = &n2; 
  
     valor(p1); 
     valor(p2); 
  
     int conta; 
     printf("Digite a operação matemática (+, -, /, *): \n1 - Soma\n2 - Subtração\n3 - Divisão\n4 - Multiplicação\n"); 
     scanf("%d", &conta); 
  
     switch (conta) { 
         case 1: 
             somavalor(p1, p2); 
             break; 
         case 2: 
             subvalor(p1, p2); 
             break; 
         case 3: 
             divivalor(p1, p2); 
             break; 
         case 4: 
             multivalor(p1, p2); 
             break; 
         default: 
             printf("Opção inválida!\n"); 
     } 
  
     return 0; 
 }