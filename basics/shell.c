#include<stdio.h>
int shell_sort(int *v,int n);
int main(){
    int ar[]={5,4,3,2,1};
    shell_sort(ar,5);
    for(int i=0;i<5;i++)printf("%d ",ar[i]);
    
}
int shell_sort(int *v,int n){
    int gap,i,j,temp;
    for(gap=n/2;gap>0;gap/=2){
        for(i=gap;i<n;i++){
            for(j=i-gap;j>=0 && v[j]>v[j+gap];j-=gap){
                temp=v[j];
                v[j]=v[j+gap];
                v[j+gap]=temp;
            }
        }
    }
    
}