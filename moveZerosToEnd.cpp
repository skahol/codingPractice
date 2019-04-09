#include<iostream>
using namespace std;
// program to move all zeros at end
// using leftRotateByOne.
void leftRotateByOne(int arr[],int low,int high)
{
	int temp=arr[low];
	for(int i=low;i<high;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[high]=temp;

}

void  fix(int arr[],int n)
{
	int count=0;
	int low;
	int high=n-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
			count++;
	}
	for(int i=0;i<n;i++)
	{
		while(arr[i]==0 && count>0){
			low=i;
		leftRotateByOne(arr,low,high);
		count--;	/// for case if already all zeros are moved 
		}
	}
}
int main()
{
	int arr[]={1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
	int n=sizeof(arr)/sizeof(arr[0]);
	fix(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
