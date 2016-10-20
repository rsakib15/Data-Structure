#include <bits/stdc++.h>
using namespace std;

void print_array(int arr[],int length){
	for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
	}
	cout<<endl;
}

int selection_sort(int arr[],int length){
	int min;
	
	for(int i=0;i<length;i++){
		min=i;
		for(int j=i+1;j<length;j++){
			if(arr[j]<arr[min])
				min=j;
		}
		swap(arr[i],arr[min]);
	}

	print_array(arr,length);
}



int main(){
	int arr[] = {4,6,3,7,5,9,2,8,1,10};
	int length= sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr,length);

	return 0;
}
