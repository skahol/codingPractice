#include<iostream>
using namespace std;

void leftRotate(int arr[],int start,int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		
		start++;
		end--;
	}
}
void reversalRotate( int arr[],int l, int h,int d)		// index=0 format
{
	leftRotate(arr,l,d-1);	// swapped d elements
	leftRotate(arr,d,h);		// swapped next elements
	leftRotate(arr,0,h);		// swappped whole list.
}
int sumPair(int arr[],int s,int sum,int pair[])	// pair array get changes 
{int count=0;
//	int a=0,b=0;	// two indexes of pair array
	/// can easly find number of pairs for case by count=0 variable.
	for(int j=0;j<s-1;j++)
	{
		for(int i=j+1;i<s;i++)
		{
			if( sum==(arr[j]+arr[i]))
			{
				//a=j;
				//b=i;	// count++;
				pair[0]=arr[j];
				pair[1]=arr[i];
				cout<<"pair( "<<pair[0]<<", "<<pair[1]<<")"<<endl;
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int size=10;
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int r;
	cin>>r;		// rotated by.
	reversalRotate(arr,0,size-1,r);
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	int sum;
	cin>>sum;	// sum of pair to be fined
	int pair[2];	// pair of two number whose sum is given
	int count=sumPair(arr,size,sum,pair);
	if(count==0)
		cout<<"false"<<endl<<"there is no such pair of sum="<<sum<<".";
	else
		cout<<"True"<<endl<<"counts :"<<count<<endl;

	return 0;
}
