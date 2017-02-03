#include <iostream>
using namespace std;
 
struct node_data{
    int data;
    struct node_data *next;
};
 
struct node_data *front=NULL,*rear=NULL,*np,*ptr;
 
 
int isempty(){
    if(front==NULL)
        return 1;
    else
        return 0;
}
 
void enqueue(int x){
    np=new node_data;
    np->data=x;
    np->next=NULL;
    if(front==NULL && rear==NULL){
        front=np;
        rear=np;
    }
    else{
        rear->next=np;
        rear=np;
    }
}
 
int dequeue(){
    ptr=front;
    if(isempty())
        cout<<"Queue is Empty"<<endl;
 
    if(front==rear){
        front=NULL;
        rear=NULL;
    }
    else{
        front=front->next;
    }
    delete ptr;
}
 
 
int Front(){
    cout<<"Front Element: ";
    if(front == NULL){
		cout<<"Queue is Empty"<<endl;
    }
	else
        cout<<front->data<<endl;
}
 
 
void print(){
    ptr=front;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
 
 
int main(){
    int n,num;
    cout<<"How many Elements You want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        enqueue(num);
    }
    cout<<"Queue Elements:" ;
    print();
    cout<<endl;
    Front();
    dequeue();
    dequeue();
    cout<<"Queue Elements:" ;
    print();
    cout<<endl;
    Front();
}
 
