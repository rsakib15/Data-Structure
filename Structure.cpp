#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
struct srt{
    string arr;
    int len;
};
struct srt name[20];
 
int main(){
    int i=0,n=4;
    while(getline(cin,name[i].arr)){
        name[i].len=(name[i].arr).length();
        i++;
    }
 
    for (int j=0;j<i; j++){
      for (int k=0;k<j; k++) {
         if (name[j].arr[k]>name[j+1].arr[k]) {
            swap(name[k],name[k+1]);
         }
      }
    }
    for(int k=0;k<=i;k++)
        printf("%s\n",name[k].arr,name[k].len);
 
}
