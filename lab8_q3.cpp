/*
3. Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
*/


#include<iostream>
using namespace std;


void lowest(int arr[],int &k)
{
	cout<<"the "<<k<<"th lowest element is "<<arr[k-1]<<endl;
}

void highest(int arr[],int &k,int &x)
{
	cout<<"the "<<k<<"th largest element is "<<arr[x-k]<<endl;
}


void f_sort(int arr[],int &n)
{
	int x;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if (arr[j]<arr[i])
			{
				x=arr[j];//storing the value
				arr[j]=arr[i];//swapping
				arr[i]=x;//swap complete
			}
			else continue;
		}
	}
	
}

/*
the driver functon starts here
*/


int main()
{
	int x,k,ch;
	cout <<"Give the number of numbers you want to analyse "<<endl;
	cin>>x;
	int arr[x];
	for(int i=0;i<x;i++)
	{
		cout<<"enter the number "<<(i+1)<<endl;
		cin>>arr[i];
	}
	f_sort(arr,x);
	cout<<"for kth largest element press 0 \n for kth smallest element press anyother number \n";
	cin>>ch;
	cout <<"now enter the value of k\n";
	cin>>k;
	if(k>x)
	{
		cout<<"error! error! error!/n program terminated";
		/*
		for some naughty users, an escape plane. sir, is calling the main function a viable option? mail me at arnab.pal@niser.ac.in
		*/
	}
	else
	{
		if(ch==0)
		{
			highest(arr,k,x);//for the kth highest value
		}
		else
		{
			lowest(arr,k);//for the kth lowest
			
		}
		
	}
	
}
