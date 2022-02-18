#include <stdio.h>
#include<stdlib.h>
int main()
{
  
  //int arr[5]={1,2,3,4,5};
  //int arr[]
  int a=10;
  int *ptr_stack = &a;
 int *ptr_malloc= (int*)malloc(1*sizeof(int)); 
 printf("before freeing memory %p\n",ptr_malloc);
 char *ptr_calloc=(char*)calloc(5,sizeof(char));
char *ptr_realloc=(char*)realloc(ptr_calloc,4*sizeof(char));
 free(ptr_malloc);
  //free(ptr_calloc);
   free(ptr_realloc);
   ptr_malloc=NULL;
   ptr_calloc=NULL;
   ptr_realloc=NULL;
   printf("after freeing memory %p\n",ptr_malloc);
    return 0;
#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    int *ptr= (int*)malloc(N*sizeof(int));//created a block of 5 character elements in heap and stored the first add of the array in ptr
for(int i=0;i<N;i++){
    scanf("%d",ptr+i);//assigned values to the 5 memory locations
}
for(int i=0;i<N;i++){
    printf("%d",*(ptr+i));//assigned values to the 5 memory locations
}
free(ptr);
ptr=NULL;
CALLOC
#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
  
    int *ptr = (int*)calloc(N,sizeof(int));
    for(int i=0;i<N;i++){
    scanf("%d",ptr+i);
    }
for(int i=0;i<N;i++){
    printf("%d",*(ptr+i));
}
free(ptr);
ptr=NULL;
}}}REALLOC
#include<stdio.h>
#include<stdlib.h>
#define N 5
#define NUM 8
int main()
{
  
    int *ptr_1 = (int*)calloc(N,sizeof(int));
    for(int i=0;i<N;i++){
    scanf("%d",ptr_1+i);
    }
for(int i=0;i<N;i++){
    printf("%d",*(ptr_1+i));
}
int *ptr_2 = (int*)realloc(ptr_1,NUM*sizeof(int));
    for(int i=0;i<NUM;i++){
    scanf("%d",ptr_2+i);
    }
for(int i=0;i<NUM;i++){
    printf("%d",*(ptr_2+i));
}
free(ptr_1);
free(ptr_2);
ptr_1=NULL;
ptr_2=NULL;
}

