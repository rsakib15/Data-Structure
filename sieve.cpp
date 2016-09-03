#include <bits/stdc++.h>
using namespace std;
const int SIZE=1e6+10;

bool status[SIZE];
vector<int>prime;

void sieve(){
    memset(status,1,sizeof(status));
    for(int i=2;i<=SIZE;i++){
        if(status[i]==1){
            for(int j=2*i;j<=SIZE;j+=i){
                status[j]=0;
            }
        }
    }
    for(int i=2;i<=SIZE;i++){
        if(status[i]==1){
            prime.push_back(i);
        }
    }
}

int main(){
    int arr[100010];
    sieve();
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
        cout<<prime[arr[i]-1]<<endl;
}
