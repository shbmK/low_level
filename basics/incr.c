#include<stdio.h>
squeeze(s,c)
char s[];
char c;
{
    int i,j;
    for(i=j=0;s[i]!='\0';i++)
        if(s[i]!=c)s[j++]=s[i];
    s[j]='\0';
}
strcat(s,t)
char s[],t[];
{
    int i,j=0;
    for(i=0;s[i]!='\0';i++);
    while((s[i++]=t[j++])!='\0');
}
main(){
    char st[8]="yolo";
    /* squeeze(st,'o');
    printf("%s",st); */
    char tt[]="polo";
    strcat(st,tt);
    printf("%s",st);
}