#include<iostream>
using namespace std;
void leftRotate(int narr[],int n,int k)
{
	for(int i=k%n;i<k%n+n;i++)
		cout<<narr[i]<<" ";	
} 
int main()
{
	int arr[]={ 11,22,31,14,34,12,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	int narr[2*n];
	for(int i=0;i<n;i++)
	{
		narr[i]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		narr[n+i]=arr[i];
	}
	
	for(int i=0;i<2*n;i++)
	{
		cout<<narr[i]<<" ";
	}
	cout<<endl;
	int k;
	cin>>k;		// number of rotations
	leftRotate(narr,n,k);
}
