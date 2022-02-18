#PRINT ELEMENTS IN ARRAY USING FUNCTIONS#
#include <stdio.h>
int add(int b[], int n){
    for(int i=0;i<n;i++){
    printf("%d",b[i]);
    }
}

int main()
{
   int a[]={1,2,3,4,5};
   int n=sizeof(a)/sizeof(a[0]);
  add(a,n);
  return 0;
}
#include <stdio.h>

int main()
{
    int a=10;
    int *ptr;
     ptr=&a;
     printf("value of a is %d %d\n",a,*ptr);
     printf("value of a is %d",(*ptr)+1);
     printf("value of a is %d\n",(*ptr+1));
     int arr[]={2,3,5};
     ptr=arr;//array name it self base address
     
     printf("%u---%u---%d\n",ptr,arr,*ptr);
     printf("%u\n",ptr++);
     printf("%d\n",*ptr);
     
}

#include <stdio.h>
int add(int*c,int*d);
int main()
{
   int a=10,b=20;
   int res=add(&a,&b);
   printf("%d",res);
}
int add(int *c,int *d)
{
    int sum=*c+*d;
    return sum;
}
