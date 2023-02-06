#include<iostream>
#include<conio.h>
using namespace std;
/////////////////////////
void ReadArray(int *a,int n);
void PrintArray(int *a,int n);
void SwapArray(int &a,int &b);
void SortArray(int *a,int n,bool sortType);

//////////////////////////
int main()
{
	int n;
	cout<<"Enter Number For Array : ";
	cin>>n;
	int *a=new int[n];
	bool sortType=true;    //true Ascending   false  descending
	
	ReadArray(a,n);
	SortArray(a,n,sortType);
	PrintArray(a,n);
	
	getch();
	return 0;
}
///////////////////
//////////////////
void ReadArray(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
	cout<<"Enter Number["<<i+1<<"]:";
	cin>>a[i];
    }
}
///////////////////
void PrintArray(int *a,int n)
{
     for(int i=0;i<n;i++)
	 {
	 cout<<a[i]<<"\t";	
	 }	
	 cout<<endl;	
}
//////////////////////////////
///////////////////////////////
void SortArray(int *a,int n,bool sortType)
{
	for(int i=n-1;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(sortType==false)
			{
			    if(a[j]>a[j+1])
			   {
			    	swap(a[j],a[j+1]);
		    	}	
			}else
			     if(a[j]<a[j+1])
			   {
			    	swap(a[j],a[j+1]);
		    	}	
			{
				
			}
		}
	}
	
}
//////////////////////////////////////
void Swap(int &a,int &b)
{
int temp=a;
a=b;
b=temp;		
}

