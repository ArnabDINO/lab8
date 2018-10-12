/*
1. Write a program to find sum of all elements of an array. (Use functions)
*/

#include<iostream>
using namespace std;

void print(int &sum)
{
	cout<<"the sum is "<<sum<<endl;
}

void sum(int arr[],int x)
{
	int sum=0;
	for(int i=0;i<x;i++)
	{
		sum=sum+arr[i];
	}
	print(sum);
}


int main()
{
	int x;
	cout<<"give the number of numbers you want to add "<<endl;
	cin>>x;
	int arr[x];
	for(int i=0;i<x;i++)
	{
		cout<<"enter the number "<<(i+1)<<endl;
		cin>>arr[i];
	}
	sum(arr,x);
	
}
