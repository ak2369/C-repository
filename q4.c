#include<stdio.h>
int main(int argc, char *argv[])
{
int x = atoi(argv[1]);
if (x%2 == 0){
printf("x is even.\n");
}
else{
printf("x is odd.\n");
}
return 0;
}
