#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;
 
struct tree_node{
	int data ;
	struct tree_node *left,*right ;
};
 
struct tree_node *root=NULL,*np,*ptr,*temp=NULL;
 
void insertnode(int x){
	 ptr=root ;
	 temp=ptr;
 
	 np=new tree_node ;
     np->data=x ;
	 np->left=NULL;
	 np->right=NULL ;
 
	 while(ptr!=NULL){
       temp=ptr ;
	   if(ptr->data>x)
		   ptr=ptr->left  ;
	   else
		   ptr=ptr->right;
	 }
 
	 if(temp==NULL)
        root=np ;
	 else if(temp->data>x)
		 temp->left=np ;
	 else
		 temp->right=np;
}
 
void inorder(tree_node *root){
    cout<<"Inorder : ";
    stack<tree_node*>stk;
    ptr= root;
    while (ptr!= NULL || !stk.empty()) {
        while(ptr!= NULL) {
            stk.push(ptr);
            ptr= ptr->left;
        }
        if (!stk.empty()) {
            ptr= stk.top();
            cout<<ptr->data<<" ";
            stk.pop();
            ptr= ptr->right;
        }
    }
    cout<<endl;
}
 
void preorder(tree_node *root){
    cout<<"Preorder : ";
    stack<tree_node*>stk;
    ptr= root;
    while (ptr!= NULL || !stk.empty()) {
        while(ptr!= NULL) {
            cout<<ptr->data<<" ";
            stk.push(ptr);
            ptr= ptr->left;
        }
        if (!stk.empty()) {
            ptr= stk.top();
            stk.pop();
            ptr= ptr->right;
        }
    }
    cout<<endl;
}
 
void postorder(tree_node *root) {
   cout<<"Postorder: ";
 
  stack<tree_node*> stk;
  stack<tree_node*> o;
  stk.push(root);
 
  while (!stk.empty()) {
    ptr= stk.top();
    o.push(ptr);
    stk.pop();
    if(ptr->left!=NULL)
      stk.push(ptr->left);
    if(ptr->right!=NULL)
      stk.push(ptr->right);
  }
 
    while (!o.empty()) {
    cout << o.top()->data << " ";
    o.pop();
  }
  cout<<endl;
}
 
 
int main(){
    int n,num;
    cout<<"How many Nodes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        insertnode(num);
    }
 
	inorder(root);
	preorder(root);
	postorder(root);
 
}
 
