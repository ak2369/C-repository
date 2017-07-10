#include<stdio.h>
int main(int argc, char *argv[])
{
int n=atoi(argv[1]);
int i=2;
int x=0;
while(i<n){
i+=2;
x+=i;
}
printf("Sum of all even numbers b/w 1 and n: %d\n",x);
return 0;
}
