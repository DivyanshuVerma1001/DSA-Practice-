#include <iostream>
using namespace std ;

int partition(int arr[],int l , int r){
	int pi_ele=arr[r];
	int j =0 ;
	int i = -1;
	while (j<=r){
		if (arr[j]<=pi_ele){
			i++;
			int temp= arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		j++	;
	}
	return i;
}
int partition2 (int arr[],int l , int r ){
	int pivot = arr[r];
	int i = l -1;
	int j = l;
	for ( ; j <r; j++){
		if(arr[j]<pivot ){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[j]);
	return i+1;
}

void quickSort(int arr[],int l ,int r){
	if (l>=r)  return ; 
	int pi = partition2 (arr, l , r);
	quickSort(arr, l,pi-1);
	quickSort(arr, pi+1, r);
}

int main(){
	int arr[]={10,3,7,9,1,8};
	quickSort(arr,0,5);
	for (int i =0; i<6; i++){
		cout << arr[i]<<"  ";
	}
}
