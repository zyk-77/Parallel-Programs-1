#include<iostream>
using namespace std;
int a[5001][5001],sum[5001],b[5001]={1};
void multi1(){
    for(int i=0;i<5001;++i){
        for(int j=0;j<5001;++j){
            sum[j]+=a[i][j]*b[i];
        }
    }
}
int main(){
    multi1();
    for(int i=0;i<5001;++i) cout<<sum[i]<<' ';
    return 0;
}