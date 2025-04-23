#include<stdio.h>
int bsearch(int x,int v[],int n);
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
    int arx[]={0,1,2,3};
    printf("%i",bsearch(2,arx,4));
    
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
  