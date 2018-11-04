#include<iostream>
using namespace std;

void rotateByOne( int arr[], int s)		// called by reference
{
	int temp=arr[0];
	int i;
	for(i=0;i<s-1;i++)
		arr[i]=arr[i+1];
	arr[i]=temp;
}
void leftRotate(int arr[],int s,int d)
{
	for(int i=0;i<d;i++)
		rotateByOne(arr,s);
}
int pivotPoint(int arr[],int s)
{
	int p=0;	// as  max (pivoted) element
	int pt;		// pivot index
	for(int i=0;i<s;i++)
	{
		if(arr[i]>p)
		{
			p=arr[i];
			pt=i;		// change for each iteration of condition finnaly get the index of greater number amoung them
		}
	}
	return pt;		// return the index of pivoted element (index=0 format)
}
int binarySearch(int arr[],int l,int h,int x)
{
	if(l<=h)		// including one element in array only that case including 
	{
		int mid=(l+h)/2;
		
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]<x)
			return binarySearch(arr,mid+1,h,x);
		else if(arr[mid]>x)
			return binarySearch(arr,0,mid-1,x);	
	}
	return -1;		// out of bound value
}
int rotatedBS(int arr[],int h,int pt,int x)	// s must be of index =0 format
{
	if( x>=arr[0] )			// left sub-array  binarySearch till pivot point
		return 	binarySearch(arr,0,pt,x); 	// gonna return index number of that particular element
	else	// if x<arr[0]
		return binarySearch(arr,pt+1,h,x);
}
int main()
{
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int size=10;
	for(int i=0;i<10;i++)
		cout<<array[i]<<" ";
	cout<<endl<<"rotated by :";
	int r;
	cin>>r;		// rotated by
	
	leftRotate(array,size,r);
	for(int i=0;i<10;i++)
		cout<<array[i]<<" ";
	cout<<endl;
	
	int pivotP=pivotPoint(array,size);
	cout<<"pivot point:"<<pivotP<<endl<<"Element to be find :";
	int x;
	cin>>x;	// NUMBER to be find
	int res=rotatedBS(array,size-1,pivotP,x);
	cout<<res<<endl;		// index=0 format
	return 0;
}
