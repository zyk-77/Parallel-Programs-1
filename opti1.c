#include<stdio.h>
long long a[1000000]={1},sum=0,i;
void recursion(int n){
    if(n==1) return ;
    for(i=0;i<n/2;++i) a[i]+=a[n-i-1];
    recursion(n/2);
}
int main(){
    int m,n;
    for(n=0;n<1000000;++n){a[n]=1;sum+=a[n];}
    recursion(1000000);
    printf("%d\n%d",a[0],sum);
    return 0;
}