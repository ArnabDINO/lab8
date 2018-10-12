/*
2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
*/

//in a galaxy far far away...
#include<iostream>
using namespace std;

/*
sorting function (for ease of programming) sir PLEASE send further suggestions at arnab.pal@niser.ac.in
*/
void f_sort(int darth_vader[],int &n)
{
	int x;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if (darth_vader[j]<=darth_vader[i])
			{
				x=darth_vader[j];
				darth_vader[j]=darth_vader[i];
				darth_vader[i]=x;
			}
			
		}
	}
}

/*
the minimum function starts here
its simple after the sorting 
*/
void mini(int darth_vader[],int n)
{
	cout<<"smallest number is "<<darth_vader[0]<<endl;
}

/*
the maximum function starts here
its supper simple after sorting too
*/

void maxi(int darth_vader[],int n)
{
	cout<<"largest number is "<<darth_vader[n-1]<<endl;
}

/*
MEAN FUNCTION no puns here
*/

void mean(int darth_vader[],int x)
{
	float mean,sum=0;;
	for(int i=0;i<x;i++)
	{
		sum=sum+darth_vader[i];
	}
	mean=sum/x;
	cout<<"the mean is "<<mean<<endl;
}

/* the median function now*/

void median(int darth_vader[],int x)
{
	float median;
	if (x%2==1)
	{
		median=darth_vader[(x/2)+1];
	}
	else median=(darth_vader[x/2]+darth_vader[(x/2)+1])/2;
	cout<<"the median is "<<median<<endl;
}

/*
the function for frequency; the most notorious one
*/

void freq(int darth_vader[],int x)
{

}

/*
driver at the end to drive the chu-chu-chu
*/

int main()
{
	int x,k;
	bool ch;
	cout <<"Give the number of numbers you want to analyse "<<endl;
	cin>>x;
	int darth_vader[x];
	for(int i=0;i<x;i++)
	{
		cout<<"enter the number "<<(i+1)<<endl;
		cin>>darth_vader[i];
	}
	f_sort(darth_vader,x);
	maxi(darth_vader,x);
	mini(darth_vader,x);
	mean(darth_vader,x);
	median(darth_vader,x);
	freq(darth_vader,x);
}
