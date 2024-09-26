#include<iostream>
#include<Math.h>
using namespace std;
int main()
{
   int n;
   cout<<"nhap vao so phan tu mang:";
   cin>>n; 
   int a[n];
   for(int i=0;i<n;i++)
   {
      cout<<"a["<<i<<"]=";
      cin>>a[i];
   }         
   int max=a[0];
   int VT=0;
   for(int i=0;i<n;i++)
   {
      if(max<a[i])
      {
         max=a[i];
         VT=i;
      }
   }
   cout<<"MAX LA:"<<max<<endl;
  cout<<"VI TRI CUA MAX TRONG MANG LA:"<<VT<<endl;
  for (int i=0;i<n;i++)
	{
		int S=0;
		for (int j=1;j<a[i];j++)
		{
			if (a[i]%j==0)
			{
				S+=j;
			}
		}
		if (S==a[i]) 
		{
			cout<<"SO HOAN HAO TRONG MANG LA:"<<a[i]<<" "<<endl;
		}
	}
    for (int i=0;i<n;i++)
	{
		for (int j=1;j<a[i];j++)
		{
			if (a[i]==pow(j,2))
			{
				cout<<"SO CHINH PHUONG TRONG MANG LA:"<<a[i]<<endl;
			}
		}
	}
                return 0;
}
