#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[],int length){
	for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
	}
	cout<<endl;
}

int bubble_sort(int arr[],int length){
	for(int i=0;i<length-1;i++){
		for(int j=0;j<length-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	print_array(arr,length);
}



int main(){
	int arr[] = {4,6,3,7,5,9,2,8,1,10};
	int length= sizeof(arr)/sizeof(arr[0]);
	print_array(arr,length);
	bubble_sort(arr,length);
	return 0;
}
