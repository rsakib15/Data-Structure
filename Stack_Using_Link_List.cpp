#include <iostream>
using namespace std;
 
struct node_data{
    int data;
    struct node_data *next;
};
 
struct node_data *np,*top=NULL,*ptr=NULL;
 
int isempty(){
    if(top==NULL)
        return 1;
    else
        return 0;
}
 
void push(int x){
    np=new node_data;
    np->data=x;
    np->next=top;
    top=np;
}
 
void pop(){
    if(isempty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        ptr=top;
        top=top->next;
        delete ptr;
    }
}
 
void Top(){
    cout<<"Top Element: ";
    if(isempty()){
        cout<<"Stack is empty";
    }
    else{
        cout<<top->data<<endl;
    }
}
 
 
 
int print(struct node_data *ptr){
    if(ptr==NULL){
        return 0;
    }
    else{
        print(ptr->next);
        cout<<ptr->data<<" ";
    }
}
 
 
int main(){
    int n,num;
    cout<<"How many Elements You want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        push(num);
    }
    cout<<"Stack Elements:" ;
    print(top);
    cout<<endl;
    Top();
    pop();
    pop();
    cout<<"Stack Elements:" ;
    print(top);
    cout<<endl;
    Top();
}
 
