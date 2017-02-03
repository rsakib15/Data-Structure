#include <iostream>
#include <cstring>
#define stack_size 30
using namespace std;
 
char stack[stack_size];
int top = -1;
 
void push(char x){
    top++;
    stack[top]=x;
}
 
char pop(){
        char x;
        if(top<0)
            return -1;
        else{
        	x=stack[top];
        	top--;
        	return x;
        }
}
int check(char x){
    switch(x){
        case '(':
            return 1;
            break;
        case '+':
        case '-':
            return 2;
            break;
        case '*':
        case '/':
            return 3;
    }
}
 
int main(){
        string str;
        char ch;
        int i;
        cout<<"Infix: ";
        getline(cin,str);
        cout<<"Postfix: ";
        int len=str.size();
        for(i=0;i<len;i++){
            if(isalnum(str[i]))
                cout<<str[i];
            else if(str[i]=='(')
                push(str[i]);
            else if(str[i]==')'){
                while((ch=pop())!='(')
                    cout<<ch;
                }
            else{
                while(check(stack[top])>=check(str[i])){
                    cout<<pop();
                }
                push(str[i]);
            }
        }
 
        while(top!=-1){
            cout<<pop();
        }
        return 0;
}
