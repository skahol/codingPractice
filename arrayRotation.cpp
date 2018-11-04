#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rotate(int *arr,int d,int l);
void getData(int *arr,int len);
void showData(int *arr,int len);

int main()
{
	int SIZE;
	int rotateFrom;
	printf("enter the size  of array:");
	scanf("%d",&SIZE);
	
	int array[SIZE];
	
	
	getData(array,SIZE);
	
	printf("rotate array by :");
	scanf("%d",&rotateFrom);
	
	rotate(array,rotateFrom,SIZE);
	showData(array,SIZE);
	return 0;
}

void getData(int *arr,int len)
{	
	printf("Enter elements of array :\n");
	for(int i=0 ; i<len ; i++)
	{
		scanf("%d",arr+i);		
	}
	//fflush(stdin);
}

void rotate(int *arr,int d,int l)     //(d) rotation from (d) point,,, l size of array 
{
	
	int i,j,k;
	int temp[d];      					 //creating a temp array
	for(int p=0 ; p<d ; p++)
	{
		temp[p]=*(arr+p);
	}
	
	for(j=0;j<l-d;j++)
	{
		arr[j]= *(arr+j+d) ;    
	}     
	
	for( i=0,k=l-d; i<d ;k++,i++)
	{
		arr[k]= temp[i] ;
	}
}

void showData(int* arr,int len)
{
	
	for(int i=0;i<len;i++)
	{
		printf("%d\n",*(arr+i));
	}
}

