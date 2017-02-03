#include <iostream>
#include <cmath>
using namespace std;
 
void heapify(int *heap,int i,int n){
    int lc= 2*i+1;
    int rc=2*i+2;
    int large_index;
 
    if(lc<n && heap[lc]>heap[i])
        large_index=lc;
    else
        large_index=i;
    if(rc<n && heap[rc]>heap[large_index])
        large_index=rc;
 
    if(i!=large_index)
    {
        swap(heap[i],heap[large_index]);
        heapify(heap,large_index,n);
    }
}
 
void buildheap(int *heap,int n){
    for(int i=n/2-1;i>=0;i--)
        heapify(heap,i,n);
}
 
void traverse(int *heap,int n){
    for(int i=0;i<n;i++)
        cout<<"Heap tree["<<i<<"]="<<heap[i]<<endl;
}
 
void heapsort(int *heap,int n){
    for(int i=n-1; i>=1; i--){
        swap(heap[0],heap[i]);
        heapify(heap,0,i);
    }
    cout<<"\nYour sorted array after heapsort: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Heap tree["<<i<<"] = "<<heap[i]<<endl;
    }
}
 
int main(){
    int n,heap[30];
    cout<<"How many data you want to insert: ";
   cin>>n;
    for(int i=0;i<n;i++)
        cin>>heap[i];
 
    buildheap(heap,n);
    traverse(heap,n);
    heapsort(heap,n);
 
}
 
