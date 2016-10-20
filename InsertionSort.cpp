#include <bits/stdc++.h>
using namespace std;

print_array(int arr[],int length){
	for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
	}
	cout<<endl;
}

int insertion_sort(int arr[],int length){
	for(int i=1;i<length;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
			int temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
        }
	}
	print_array(arr,length);
}



int main(){
	int arr[] = {4,6,3,7,5,9,2,8,1,10};
	int length= sizeof(arr)/sizeof(arr[0]);
	insertion_sort(arr,length);
}
