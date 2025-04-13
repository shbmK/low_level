#include<stdio.h>
getbits(x,p,n)
unsigned x,p,n;
{
    return( (x>>(p-n+1))&~(~0<<n));
}
bitcount(int n){
    int b=0;
    for(int i=0;n!=0;n>>=1)if (n&1)b++;
    return b;
}
better_bitcount(int n){
    int b=0;
    while(n){n&=n-1;b++;}
    return b;
}
main(){
     //printf("%u",getbits(31,4,3));//31->11111, res->111
     printf("%i\n",bitcount(7));
     printf("%i",better_bitcount(7));
}