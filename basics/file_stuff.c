#include<stdio.h>
/* main(){
    int c;
    c=getchar();
    while(c!=EOF){
        putchar(c);
        c=getchar();
    }
} */
/* main(){
    int c;
    while((c=getchar())!=EOF){
        putchar(c);
    }
} */
/* main(){
    int nc=0;
    while(getchar()!=EOF){++nc;printf("inc");}
    printf("%d",nc);
} */
/* main(){
    int nc;
    for(nc=0;getchar()!=EOF;nc++);
    printf("%d",nc);
} */
/* main(){
    int nl=0;
    int c;
    for(int a=0;(c=getchar())!=EOF;a++)if(c=='\n')nl++;
    printf("%d",nl);    
} */
#define YES 1
#define NO 0
#include<stdio.h>
main(){
    int nl,nw,nc,inword;
    nl=nw=nc=0;inword=NO;
    int c;
    while((c=getchar())!=EOF){
        nc++;
        if(c=='\n')nl++;
        if(c==' '||c=='\t'||c=='\n')inword=NO;
        else if(inword==NO){
            inword=YES;
            nw++;
        }
    }
    printf("%d %d %d",nl,nw,nc);
}