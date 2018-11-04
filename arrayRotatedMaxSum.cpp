#include<iostream>
using namespace std;
void rotateByOne(int arr[],int s)
{
	int temp=arr[0];
	int i;
	for(i=0;i<s-1;i++)
		arr[i]=arr[i+1];
	
	arr[i]=temp;
}
int SUM(int arr[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
		sum+=(i*arr[i]);
	return sum;
}
int leftRotate(int arr[],int size)
{
	int max=0;
	int sum=0;
	for(int i=0;i<=size-1;i++)
	{
		sum=SUM(arr,size);
		if(sum>max)
			max=sum;
	
		rotateByOne(arr,size);
	}
	return max;
}
int main()
{
	int arr[4]={1,20,2,10};
	int size=4;
	
	int maxSUM=leftRotate(arr,size);
	
	cout<<"maxSum :"<<maxSUM;
	return 0;
}
