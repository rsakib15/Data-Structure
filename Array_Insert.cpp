#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    int i,j,position,value,n;
    int arr[100];
 
    cout<<"How many items: ";
    cin>>n;
    cout<<"Enter item:"<<endl;
 
    for(i=0;i<n;i++){
        cout<<"item "<<i+1<<": ";
        cin>>arr[i];
    }
 
    cout<<"Array Items: ";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
 
    cout << "Enter position to enter value: ";
    cin >> position;
    cout << "Enter Value : ";
    cin >> value;
 
 
    for(i=n-1;i>=position-1;i--)
        arr[i+1]=arr[i];
 
 
    arr[position-1]=value;
    n++;
 
    cout<<"After Insertion "<<endl;
    cout<<"Total Elements: "<<n<<endl;
     for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
 
 
}
 
