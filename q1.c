#include<stdio.h>
int main(int argc, char *argv[])
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
if (a>b){
printf("%d is max.\n", a);
}
else if(b>a){("%d is max.\n", b);
}
else{
printf("both are equal.\n");
}
return 0;
}

