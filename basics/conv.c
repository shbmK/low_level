#include<stdio.h>
atoi(s)
char s[];
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + s[i] - '0';
    return n;
}
lower(char s);
casting(num)
int num;
{
    double a=123.456789;
    return a+num;
}
main(){
   /* int a=atoi("090\n"); 
   printf("%i",a);
   char c='D';
   char d='d';
   printf("%c %c",lower(c),lower(d)); */
   printf("%d",casting(11)); //%lf or %f returns 0.000
}

lower(s)
char s;
{
    if(s>='A' && s<='Z'){
        return s-'A'+'a';
    }
    return s;
}
