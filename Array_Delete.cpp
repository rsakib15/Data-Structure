#include <iostream>
#include <cstdio>
using namespace std;
 
int main(){
    int i,j,position,n;
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
 
    cout << "Enter position to delete value: ";
    cin >> position;
 
 
    for(i=position-1;i<n-1;i++)
        arr[i]=arr[i+1];
    n--;
 
    cout<<"After Delete "<<endl;
    cout<<"Total Elements: "<<n<<endl;
     for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
 
}
 
