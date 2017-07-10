#include<stdio.h>
int main(int argc, char *argv[])
{
int x = atoi(argv[1]);
if(x==0){
printf("%d is equal to zero.\n", x);
}
else if(x<0){
printf("%d is negative.\n", x);
}
else{
printf("%d is positive.\n", x);
}
return 0;
}
