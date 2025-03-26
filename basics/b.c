#include<stdio.h>
main(){
    int lower,upper,step;
    float fahr,cels;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;
    while (fahr<=upper){
        cels=(5.0/9.0)*(fahr-32);
        printf("%4.0f %6.1f\n",fahr,cels);
        fahr+=step;
    }
}