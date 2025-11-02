#include<iostream>
#include<vector>
using namespace std;
void merge (int arr[],int l , int mid , int r){
	int an = mid -l +1;
	int bn = r-mid;
	int a[an];
	int b[bn];
	for(int i = 0; i<an; i++){
		a[i]=arr[l+i];
	}
	for (int i= 0; i<bn;i++){
		b[i]=arr[mid+1 +i];    
	}
	int i=0,j=0,k=l;
	while(i<an and j<bn){
		if (a[i]<b[j]){
			arr[k]=a[i];
			k++,i++;
		}
		else{
			arr[k]=b[j];
			k++,j++;
		}
	}
	while (i<an){
			arr[k]=a[i];
			k++,i++;		
	}
	while (j<bn){
			arr[k]=b[j];
			k++,j++;		
	}
}
void mergeSort(int arr[],int l ,int r){
	if (l>=r)  return ; 
	int mid = (l+r)/2;
	mergeSort(arr, l ,mid );
	mergeSort(arr,mid+1,r);
	merge(arr,l,mid,r);
}
int main(){
	int arr[10]={45,76,1,5,3,7,6,87,16,46};
	mergeSort(arr,0,9);
	for(int i= 0 ; i<10; i++){
		cout<<arr[i]<<"  ";
	}

}
