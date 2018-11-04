#include<iostream>
using namespace std;

void getData(int arr[],int l);
void rotate(int arr[],int d,int l);
void reverse(int arr[],int START,int END);
void printData(int arr[],int l);

int main()
{
	int SIZE;
	cout<<"enter size of array:";
	cin	>>SIZE;
	
	int array[SIZE];
	getData(array,SIZE);
	
	int d;
	cout<<"rotate by:";
	cin>>d;
	
	rotate(array,d,SIZE);
	printData(array,SIZE);
	
	return 0;
}

void getData(int arr[],int l)
{
	for(int i=0;i<l;i++)
	{
		cin >> *(arr+i);
	}
}
void rotate(int arr[],int m,int l)
{
	reverse(arr,0,m-1);
	reverse(arr,m,l-1);
	reverse(arr,0,l-1);
}
void reverse(int arr[],int START,int END)
{
	int temp;
	while(START<END)
	{
		temp=arr[START];
		arr[START]=arr[END];
		arr[END]=temp;
		START++;
		END--;
	}
}

void printData(int arr[],int l)
{
	for(int i=0;i<l;i++)
		cout<<arr[i]<<endl;
}
