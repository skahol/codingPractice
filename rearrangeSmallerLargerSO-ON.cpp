#include<iostream>
#include<algorithm>		// to use sort()
using  namespace std;
// simple solution---> use min and max function
/*
void swap(int& a, int& b)
{
	int temp=a;
	a=b;
	b=temp;
}
int MIN(int arr[],int low,int high){
	int min=arr[low];
	int index=low;
	for(int i=low;i<=high;i++){
		if(arr[i]<min){
			min=arr[i];
			index=i;
		}
	}
	return index;
}
int MAX(int arr[], int low,int high){
	int max=arr[low];
	int index=low;
	for(int i=low;i<=high;i++){
		if(arr[i]>max){
			max=arr[i];
			index=i;
		}
	}
	return index;
}
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
}
int main(){
	int arr[]={9,1,8,2,7,3,6,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int low=0;
	int high=n-1;
	int fetch;
	for(int i=0;i<n;i++)
	{
		if(i%2 == 0){
			fetch = MIN(arr, i, high);
		}
		else{
			fetch= MAX(arr,i,high);
		}
		swap(arr[i], arr[fetch]);
	}
	print(arr,n);
	return 0;
}*//////////////////////
// efficient solution
void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;
}
int main(){				//--->O(n)  -----space:O(n)
	int arr[]={5, 8, 1, 4, 2, 9, 3, 7, 6};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n) ;
	print(arr,n);

	int narr[n];
	int i=0, j=n-1;
	
	for(int k=0;k<n;k++){
		if(k%2==0){
			narr[k]=arr[i];
			i++;
		}
		else{
			narr[k]=arr[j];
			j--;
		}
	}
	print(narr,n);
}
