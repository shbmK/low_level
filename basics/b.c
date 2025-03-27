#include<stdio.h>
/* main(){
    int lower,upper,step;
    float fahr,cels;
    lower=0;
    upper=300;
    step=20;
    fahr=lower;
    while (fahr<=upper){
        cels=(5.0/9.0)*(fahr-32);
        printf("%4.0f %6.3f\n",fahr,cels);
        fahr+=step;
    }
} */
/* main(){
    int fahr;
    for(fahr=0;fahr<=300;fahr=fahr+20){
        printf("%d %.2f\n",fahr,(5.0/9.0)*(fahr-32));
    }

} */
main(){
    int fahr;
    for(fahr=300;fahr>=0;fahr=fahr-20){
        printf("%d %.2f\n",fahr,(5.0/9.0)*(fahr-32));
    }

}