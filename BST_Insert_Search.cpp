#include <iostream>
using namespace std;
 
struct tree_node{
    int data;
    struct tree_node *leftptr,*rightptr;
};
 
struct tree_node *root=NULL,*ptr=NULL;
 
void maketree(struct tree_node *rpt,int x){
    if(rpt==NULL){
        rpt=new tree_node;
        rpt->data=x;
        rpt->leftptr=NULL;
        rpt->rightptr=NULL;
    }
    else if(x<rpt->data){
        maketree(rpt->leftptr,x);
        rpt->leftptr=root;
    }
    else if(x>rpt->data){
        maketree(rpt->rightptr,x);
        rpt->rightptr=root;
    }
    root=rpt;
}
 
 
void inorder(struct tree_node *ptr){
 
    if(ptr!=NULL){
        cout<<ptr->data<<" ";
        inorder(ptr->leftptr);
        inorder(ptr->rightptr);
    }
}
 
 
void search(struct tree_node *ptr,int item){
    if(ptr!=NULL){
        if(item==ptr->data)
            cout<<item<<" Found"<<endl;
        else if(item<ptr->data)
            search(ptr->leftptr,item);
        else if (item>ptr->data)
            search(ptr->rightptr,item);
    }
}
 
void search(){
    int item;
    cout<<"Search: ";
    cin>>item;
    search(root,item);
 
}
int main(){
    int n,item;
    cout<<"How many element you want to insert: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>item;
        maketree(root,item);
    }
    cout<<"Inorder : ";
    inorder(root);
    cout<<endl;
    search();
 
 
}
 
