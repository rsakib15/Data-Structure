#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
 
struct node_data{
    int data;
    struct node_data *next;
};
 
struct node_data *start=NULL,*np,*ptr=NULL,*p,*dp;
 
void add(int x){
    np=new node_data;
    np->data=x;
    np->next=NULL;
    if(start==NULL){
        start=np;
        ptr=np;
    }
    else{
        ptr->next=np;
        ptr=np;
    }
}
 
void print(){
    ptr=start;
    cout<<"Linked List Items : ";
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
 
void insertintofirst(int x){
    np=new node_data;
    np->data=x;
    np->next=start;
    start=np;
}
 
void insertintolast(int x){
    np=new node_data;
    np->data=x;
    np->next=NULL;
    ptr=start;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=np;
}
 
void insertbefore(int x,int y){
    np=new node_data;
    np->data=x;
    ptr=start;
    if(ptr->data==y){
        np->next=start;
        start=np;
    }
    while(ptr->next->data!=y){
        ptr=ptr->next;
    }
    np->next=ptr->next;
    ptr->next=np;
 
 
}
 
 
 
void deletefirst(){
    dp=start;
    start=start->next;
    delete dp;
}
 
void deletelast(){
    dp=start;
    while(dp->next!=NULL){
        p=dp;
        dp=dp->next;
    }
    p->next=dp->next;
    delete dp;
}
 
void deleteany(int x){
    dp=start;
    if(dp->data==x){
        start=start->next;
        delete dp;
    }
    else{
       while(dp->data!=x){
            p=dp;
            dp=dp->next;
        }
        p->next=dp->next;
        delete dp;
    }
}
 
 
 
 
 
 
 
int main(){
    add(10);
    print();
    insertintofirst(30);
    print();
    insertintolast(40);
    print();
    deletefirst();
    print();
    deleteany(40);
    print();
}
