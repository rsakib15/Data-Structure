#include <iostream>
using namespace std;
struct node_data {
    int data;
    struct node_data *next;
};
struct node_data *start=NULL,*ptr=NULL,*np;;
 
 
void insertsorted(int x){
    np=new node_data;
    np->data=x;
    if(start==NULL || start->data >= np->data){
        np->next=start;
        start=np;
    }
    else{
        ptr=start;
        while(ptr->next!=NULL && ptr->next->data < np->data)
            ptr=ptr->next;
 
        np->next=ptr->next;
        ptr->next=np;
 
    }
}
 
void print(){
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
 
 
 
int main(){
    int n,num;
    cout<<"How many Elements You want to insert: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        insertsorted(num);
        cout<<"Sorted List: ";
        print();
    }
    cout<<"Final Elements:" ;
    print();
 
}
 
