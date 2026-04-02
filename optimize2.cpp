#include<iostream>
using namespace std;
long long sum1,sum2,sum;
long long chain2(){
    for(int i=1;i<=9e7;i+=2){
        sum1+=i;
        sum2+=i+1;
    }
    sum=sum1+sum2;
    return sum;
}
int main(){
    chain2();
}