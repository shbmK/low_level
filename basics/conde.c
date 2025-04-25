#include<stdio.h>
int bsearch(int x,int v[],int n);
int change(char s[],char t[]);
int atoi(char s[]);
int main(){
  /* int a,b;
  int c;
  a=10;b=12;
  c=a>b?a:b;
  printf("%d",c); */
  
  
  /* int n=1;
  int s[]={-1,1,1};
  if (n > 0)
  for (int i = 0; i < n; i++)
  if (s[i] > 0) {
    printf("true all\n");
    }
    else // n>0
    printf("error - n is zero\n");//else is associated with the closest if */
    /* int arx[]={0,1,2,3};
    printf("%i",bsearch(2,arx,4)); */
    /* char source[]="yolo\nto\nthe\n\tmoon";
    char target[50];
    change(source,target);
    printf("%s\n%s",source,target);
 */
    printf("%d",atoi("-298"));
  }
  int atoi(char s[]){
    int i,n,sgn;
    for(i=0;s[i]=='\n'||s[i]=='\t'||s[i]==' ';i++);
    sgn=1;
    if( s[i++]=='-')sgn=-1;
    for(n=0;s[i]>='0'&&s[i]<='9';i++)n=10*n+s[i]-'0';
    return sgn*n;
  }
  int change(char s[],char t[]){
    int i=0,j=0;
    while(s[i]!='\0'){
      char c=s[i];
      switch(c){
        case '\n':
          t[j++]='\\';
          t[j++]='n';
          break;
        case '\t':
          t[j++]='\\';
          t[j++]='t';
          break;
        default:
          t[j++]=s[i];
          break;
      }
      i++;
    }
    t[j]='\0';
    return 0;
  }
  int bsearch(int x,int v[],int n){
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high){
      mid=(low+high)/2;
      if (x<v[mid])high=mid-1;
      else if (x>v[mid])low=mid+1;
      else return mid;
    }
    return -1;
  }
  