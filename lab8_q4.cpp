/*
4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
*/

#include <iostream>
using namespace std;


void merge(int r2d2[],int c3p0[],int bb8[],int x,int y)
{
	for(int i=0;i<x;i++)
	{
		bb8[i]=r2d2[i];
	}
	for(int i=0;i<y;i++)
	{
		bb8[i+x]=c3p0[i];
	}
}

void sort(int bb8[],int n)
{
	int x;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if (bb8[j]<bb8[i])
			{
				x=bb8[j];//storing the value
				bb8[j]=bb8[i];//swapping
				bb8[i]=x;//swap complete
			}
			else continue;
		}
	}
	
}

void mini(int bb8[],int n)
{
	cout<<"smallest number is "<<bb8[0]<<endl;
}

void maxi(int bb8[],int n)
{
	cout<<"largest number is "<<bb8[n-1]<<endl;
}


int main()
{
	int x,y,k,ch;
	cout <<"Give the number of numbers you want to analye"<<endl;
	cin>>x;
	int r2d2[x];
	for(int i=0;i<x;i++)
	{
		cout<<"enter the number "<<(i+1)<<endl;
		cin>>r2d2[i];
	}
	cout <<"Okay I'm giving you another chance \n enter some further number of numbers you want to analye"<<endl;
	cin>>y;
	int c3p0[y],bb8[x+y];
	for(int i=0;i<y;i++)
	{
		cout<<"enter the number "<<(i+1)<<endl;
		cin>>c3p0[i];
	}
	merge(r2d2,c3p0,bb8,x,y);
	sort(bb8,x+y);
	maxi(bb8,x+y);
	mini(bb8,x+y);
}
