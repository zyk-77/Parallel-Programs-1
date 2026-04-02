#include<iostream>
using namespace std;
long long sum;
int  chain1(){
    for(int i=1;i<=9e7;++i){sum+=i;}
    return sum;
}
int main(){
    chain1();
}