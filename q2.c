#include<stdio.h>
int main(int argc, char *argv[])
{
char a = atooi(argv[1]);
char b = atoi(argv[2]);
char c = atoi(argv[3]);
if (a > b && a > c){
printf("%s is the largest number.\n", a);
}
else if (b >a && b>c){
printf("%s is the largest number.\n", b);
}
else if (c >a && c> b){
printf("%s is the largest number.\n", c);
}
return 0;
}

