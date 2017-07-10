#include<stdio.h>
int main(int argc, char *argv[])
{
int n=atoi(argv[1]);
int i=2;
while(i<n){
printf("%d,",i);
i+=2;
}
printf("\n");
return 0;
}
