#include<iostream>
#include<conio.h>
using namespace std;
/////////////////////////
void ReadArray(int *a,int n);
void PrintArray(int *a,int n);
//////////////////////////
int main()
{
	int n;
	cout<<"Enter Number For Array : ";
	cin>>n;
	int *a=new int[n];
	
	ReadArray(a,n);
	PrintArray(a,n);
	
	getch();
	return 0;
}
///////////////////
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
