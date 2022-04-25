#include <stdio.h>
#include <stdlib.h>


int massaMolecular(){
   int x, y, xa, ya, m;
   printf("Valor de x: %d\n",x);
   scanf("%d", &x);
   printf("Valor de y: %d\n",y);
   scanf("%d", &y);

   printf("%4d%4d\n", xa, ya);
   xa = x;
   y = ya;
   m = (x*y)/ (xa + ya);

   return m;
}

int main(){

    massaMolecular;
    int x, y, xa, ya, m;


    printf("Valor da massa eh: %d\n",m);
   

    system ("pause");
    return 0;
}

