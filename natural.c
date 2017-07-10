#include<stdio.h>
int main(int argc, char *argv[])
{
int i=0;
int n=atoi(argv[1]);
while(i<n){
printf("%d,",i);
i++;
}printf("\n");
return 0;
}
