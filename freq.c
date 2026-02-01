// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
 
 int n;
 scanf("%d", &n);
 int *arr = (int *) malloc(n * sizeof(int));
 int *freq = (int *) malloc(n * sizeof(int));
 
 for(int i = 0; i<n; i++){
     *(freq+i) = 0;
 }
 
 for(int *i = arr; i< arr+n; i++){
     scanf("%d", i);
 }
  
 
 for(int i = 0 ; i < n; i++) {
     if(*(freq+i)== -1) continue;
     for(int j = i +1 ; j < n ; j++){
         if(*(arr+i) == *(arr+j)){
             *(freq+i) += 1;
             *(freq+j) = -1;
         }
         
     }
 }
 
 printf("\nNumber\tFrequency\n");

 
 for(int i =0; i<n; i++){
     if(*(freq+i)!=-1){
          printf("\n%d\t%d\n", *(arr+i), *(freq+i)+1);
     }
 }
 
 
    
    
    
    
}
