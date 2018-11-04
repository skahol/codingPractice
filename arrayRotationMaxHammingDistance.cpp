#include<iostream>
using namespace std;

void rotateByOne(int arr[],int s,int narr[],int k)		// k for counting kth rotation not for no. of rotations
{
	// doesnot make any changes in arr
	int temp[k];
	for(int i=0;i<k;i++)
	{
		temp[i]=arr[i];
	}
	for(int i=0;i<s-k;i++)
	{
		narr[i]=arr[i+k];
	}
	for(int i=s-k,j=0; i<s; i++,j++)
	{
		narr[i]=temp[j];	
	}
}
int main()
{
	int arr[]={11,23,32,65,12,11,15,54,26,14,32};
	int size=sizeof(arr)/sizeof(arr[0]);
	int narr[size];			// new array created to store elements of array after each rotation
	int maxHd=0;		// initialise maximium hamming distance =0
	int count;
	for(int i=1;i<=size;i++)			// no need of equal  in i<size also correct ,bcz = one is case of similar arr and narr case
	{
		rotateByOne(arr,size,narr,i);
		
		// printing newly formed array
		for(int i=0;i<size;i++)
			cout<<narr[i]<<" ";	
		cout<<endl;
		
		count=0;					// count initialise to zero for each iteration 
		for(int i=0;i<size;i++)
		{
			if(arr[i]!=narr[i])		// narr is new rotated array for each iteration
				count++;	
		}
		cout<<"hamming distance count ="<<count<<endl;
		if(count>maxHd)
		{
			maxHd=count;	
		}		
	}
	cout<<endl<<"Maximum Hamming Distance ="<<maxHd<<endl;
	return 0;
}
