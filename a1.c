#include<stdio.h>
int main(int argc, char *argv[])
{
int numbers[10];
int i;
for(i=0;i<10;i++){
scanf("%d", numbers[i]);
}
for(i=0;i<10;i++) {
printf("Elements:%d\n", numbers[i]);}
return 0;
}
