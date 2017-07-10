#include<stdio.h>
int main(int argc, char *argv[])
{
int n = atoi(argv[1]);
int x = 0;
while(n>0){
n%10;
x+=1;
n/=10;
}printf("Number of digits: %d.\n", x);
return 0;
}
