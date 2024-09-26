#include <iostream>
#include <iomanip>
#include <fstream> 
using namespace std;

void nhap_mang(int a[],int &n) 
{
	cout<<"\n\t\t\tNhap danh sach  "<<n<<" Phan Tu\n";
	for(int i=0;i<n;i++)
	{
		cout<<"A["<<i<<"]=";
		cin>>a[i]; 
	} 
	cout<<endl; 
}

void ghi_file(char b[],int a[],int n)
{
	fstream f(b,ios::out);
	cout<<"\n\t\t\tDa ghi file thanh cong\n";
	for(int i=0;i<n;i++)
		f<<a[i]<<"\t";	 
	f.close();	
}
 
void doc_file(int a[],int n)
{
	int b; 
	ifstream f("vao.txt",ios::in);
	 
	if(!f) 
	{
		cout<<"\n\t\t\tKhong ton tai file vao.txt\n"; 
	} 
	cout<<"\n\t\t\t\Doc file vao.txt \n"; 
	for(int i=0;i<n;i++)
	{
		f>>b;
		cout<<b<<"\t"; 
	}
	f.close(); 
} 

bool so_hoan_hao(int n)
{
	int dem=0; 
	for(int i=1;i<n;i++)
		if(n%i==0)
			dem+=i ;
	if(dem==n)
		return 1;
	return 0;			
}
 
void sap_xep(int a[],int &n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp; 
			} 
} 

void so_hoan_hao(int a[],int n)
{
	int dem=0; 
	cout<<"\n\t\t\tCac so hoan hao trong mang co"<<n<<" Phan tu \n";
	for(int i=0;i<n;i++)
		if(so_hoan_hao(a[i]))
			dem++;
	cout<<"\nco "<<dem<<" so hoan hao trong mang\n";
	for(int i=0;i<n;i++)
		if(so_hoan_hao(a[i]))
			cout<<"\t"<<a[i];
} 

int main()
{
	cout<<"nhap so luong phan tu cua mang: ";
	int n;
	cin>>n;
	int a[n];
	nhap_mang(a,n); 
	ghi_file("vao.txt",a,n); 
	doc_file(a,n); 
	so_hoan_hao(a,n);	
	sap_xep(a,n);
	ghi_file("luu.txt",a,n);
	cout<<endl; 
	return 0;
}



