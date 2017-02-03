#include <iostream>
#include <cstdio>
#define N 8
int K=6;
 
int A[N]={3,6,4,1,3,4,1,4},B[N];
 
int countingsort(int A[],int B[],int K){
    int C[K];
    int i,j;
    for(i=0;i<=K;i++)
        C[i]=0;
 
    for(j=1;j<N;j++)
         C[A[j]] = C[A[j]] + 1;
 
    for(i=1;i<=K;i++)
        C[i]=C[i]+C[i-1];
 
    for(j=N;j>=1;j--){
        B[C[A[j]]]=A[j];
        C[A[j]]=C[A[j]]-1;
    }
 
 
    for(int i=0;i<N;i++)
        printf("%d ",B[i]);
}
 
 
 int main(){
    countingsort(A,B,K);
 
 }
 
