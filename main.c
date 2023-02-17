#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "node.h"
/*
void push(NodePtr* top, int x);
int pop(NodePtr* top);
*/
int main(int argc, char **argv){
  
  int i,N,j;
  NodePtr top=NULL;
   
   for(i=1;i<argc;i++){
     push(&top,atoi(argv[i]));
   }

   while(top){
     printf("%d\n",pop(&top));
   }


 
 
  

 /*
 Stack s;
 printf("Checking the parentheses in argv arguments\n");
  for(i=1;i<argc;i++){
   
     for(j=0;j<strlen(argv[i]);j++){
       /* Use stack to help with the parentheses


     }


  }
*/



   return 0;
}
