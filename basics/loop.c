#include<stdio.h>
#include<string.h>
char reverse(char *s){
    int c,i,j;
    for(i=0,j=strlen(s)-1;i<j;i++,j--){
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }

}
char itoa(int num,char *s){
    int i=0,sign=1;
    if(num<0){sign=-1;num=-num;}
    do{
        s[i++]=num%10+'0';
    }while((num/=10)>0);
    if(sign)s[i++]='-';
    s[i]='\0';
    reverse(s);
}
int main(){
    char st[]="yolo";
    /* reverse(st);
    printf("%s",st); */
    char numb[5];
    itoa(-793,numb);
    printf("%s",numb);

}