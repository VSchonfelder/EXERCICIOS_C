#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int main()
{
 unsigned long p;
 
    printf("Digite um número P (que deve ser par) presente no intervalo: 2 <= P <= 4.294.967.294: \n");
    scanf("%lu", &p);
    
    if(p==2) {
        
    printf("1 + 1 = 2");
    }
    
    if(p<2 || p>4294967294 || p % 2 != 0) {
        
    printf("Número inválido");
    }
    
    else {
        
    int a, b, s=0, da, db;
    
    for(a=2; a<p; a++) {
    
    float raiza=sqrt(a);
    int ca=0;
    
    for (da=2; da<=raiza; da++) {
        
      if(a % da == 0) {
          
        ca++;
        break;
      } 
    }
      
        
    b = p-a;
        
    float raizb=sqrt(b);
    int cb=0;
        
    for (db=2; db<=raizb; db++) {
        
      if(b % db == 0) {
          
        cb++;
        break;
      } 
    }
    
    
    if (ca == 0 && cb == 0 && a+b == p) {
    
    s++;
    if(s != 0) {
    printf("%d + %d = %.0lu\n", a, b, p);
    break;
 }
    }
  
  if(s != 0) break;
 }
}

    return 0;
}
