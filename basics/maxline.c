#include<stdio.h>
#define MAXLINE 1000
/* main(){
    int len,max;
    char line[MAXLINE],save[MAXLINE];
    max=0;
    while((len=get_line(line,MAXLINE))>0){
        if(len>max){
            max=len;
            copy(line,save);
        }
    }
    if(max>0)printf("%s",save);
}
get_line(s,lim)
int lim;
char s[];
{
    int c,i;
    for(i=0;i<lim-1&&(c=getchar())!=EOF&&(c!='\n');i++)s[i]=c;
    if(c=='\n'){
        s[i]=c;
        i++;
    }
    s[i]='\0';
    return i;
}
copy(s1,s2)
char s1[],s2[];
{
    int i=0;
    while((s2[i]=s1[i])!='\0')++i;
} */
int max;
char line[MAXLINE],save[MAXLINE];
main() 
{
    int len;
    extern int max;
    extern char save[];
    max = 0;
    while ((len = get_line()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0) 
        printf("%s", save);
}
get_line() 
{
    int c, i;
    extern char line[];
    for (i = 0; i < MAXLINE-1
        && (c=getchar()) != EOF && c != '\n'; ++i)
            line[i] = c;
    if (c == '\n') {
        line [i] = c;
        ++i;
    }
    line[i] = '\0';
    return(i);
}
copy() 
{
    int i;
    extern char line[], save[];
    i = 0;
    while ((save[i] = line[i]) != '\0')
        ++i;
}