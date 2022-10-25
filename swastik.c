#include<stdio.h>

int main(){
    
   int n;
   scanf("%d",&n);
   if(n%2==0){
        n=n+1;
   }
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){

        if((n/2==i) || (n/2==j) || (0==i && n/2>j) || (0==j && n/2<i) || (n-1==j && n/2>i)||(n-1==i && (n/2) <j))
            printf(" *");
        else
            printf("  ");

       }
       printf("\n");
   }
   

    

    return 0;
}