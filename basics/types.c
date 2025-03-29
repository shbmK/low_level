#include<stdio.h>
char lin[]; //not mentioning size during declaration is somehow legal
/* main(){
    lin[0]='a';
    lin[1]='a';
    lin[2]='a';
    printf("%s",lin);
    printf("%c",lin[3]);
} */
//out:aaa

main(){
    lin[0]='a';
    lin[1]='b';
    lin[2]='c';
    printf("%s",lin); //use string when using array name
    printf("%c",lin[1]);//character when specific element
}
//out:abcb
