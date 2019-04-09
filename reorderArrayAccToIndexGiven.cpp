#include<stdio.h>
#include<stdlib.h>
void swap(int& a, int& b){
	int temp=a;
	a=b;
	b=temp;
}
void print(int arr[], int n)
{
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int main(){				// Time Complexity O(n) and  auxiliary space O(1).
	int arr[]={90,80,70,60,50,0,10,20,30,40};
	int index[]={9,8,7,6,5,0,1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp;
	for(int i=0; i<n; i++){
		if(index[i]!=i){			// if ==i do nothing;
			temp=index[i];
			swap( arr[i], arr[temp]);
			swap(index[i],index[temp]);
			i--;			// repeat iteration until index[i]==i;
		}
	}
	print(arr,n);
}
