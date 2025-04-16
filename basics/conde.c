#include<stdio.h>
int main(){
    /* int a,b;
    int c;
    a=10;b=12;
    c=a>b?a:b;
    printf("%d",c); */
    int n=1;
    char s[]="101";
    if (n > 0)
    for (int i = 0; i < n; i++)
      if (s[i] > 0) {
          printf("...");
          return(i);
      }
    else /* WRONG */
    printf("error - n is zero\n");
}
