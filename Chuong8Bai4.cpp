#include <iostream>
using namespace std;

int kt(int a[100],int i)
{
	int j,tong = 0;
	for(j = 1;j < a[i]; j++)
	if(a[i]%j==0)
	tong+=j;
	if(tong==a[i])
	return 1;
	else
	return 0;
	 
}
main()
{ 
  int a[100],i,n;
  cout << "Nhap vao so phan tu trong mang : ";
  cin >> n;
  for(i=0;i<n;i++)
  {
  	cout << "a[" <<i<< "] =";
  	cin>>a[i]; 
  }
  cout << "Cac so hoan hao trong mang : \n";
  for(i=0;i<n;i++)
  {
  	if(a[i]<=1)
  	continue;
  	if(kt(a,i)==1)
  	cout<<a[i]<<" ";
  	
  }
}
