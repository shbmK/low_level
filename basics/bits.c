#include<stdio.h>
getbits(x,p,n)
unsigned x,p,n;
{
    return( (x>>(p-n+1))&~(~0<<n));
}
main(){
     printf("%u",getbits(31,4,3));//31->11111, res->111
}