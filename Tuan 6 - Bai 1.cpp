#include<iostream>
using namespace std;
int ucln(int a,int b)
{
	if(a==0)
		return b;
	return ucln(b%a,a);	 
} 
class PS 
{
		int tu,mau;
	public:
		friend ostream& operator << (ostream&,PS temp);
		friend istream& operator >> (istream&,PS&);
		PS operator + (PS); 
		PS operator - (PS);
		PS operator * (PS);
		PS operator / (PS); 		
}; 
ostream& operator << (ostream& out,PS temp)
{
	if(temp.tu != temp.mau) 
		out<<temp.tu<<"/"<<temp.mau<<endl; 
	else if(temp.mau == 1)
		out<<temp.tu<<endl; 
	else 
		out<<1<<endl;	
}
istream& operator >> (istream& in,PS& temp)
{
	cout<<"\tNhap tu so: ";
	in>>temp.tu;
	cout<<"\tNhap mau so: ";
	in>>temp.mau; 
}
PS PS::operator+(PS temp)
{
	PS s;
	
	s.tu = this->tu*temp.mau + temp.tu*this->mau; 
	s.mau=this->mau * this->mau;
	int Tu=s.tu,Mau=s.mau;
	Tu/=ucln(s.tu,s.mau);   
	Mau/=ucln(s.tu,s.mau);
	s.tu=Tu;
	s.mau=Mau; 
	return s; 
} 
PS PS::operator-(PS temp)
{
	PS s;
	
	s.tu = this->tu*temp.mau - temp.tu*this->mau; 
	s.mau=this->mau * this->mau;
	int Tu=s.tu,Mau=s.mau;
	Tu/=ucln(s.tu,s.mau);   
	Mau/=ucln(s.tu,s.mau);
	s.tu=Tu;
	s.mau=Mau; 
	return s; 
} 
PS PS::operator*(PS temp)
{
	PS s;
	
	s.tu=this->tu * temp.tu;
	s.mau=this->mau * temp.mau;
	int Tu=s.tu,Mau=s.mau;
	Tu/=ucln(s.tu,s.mau);   
	Mau/=ucln(s.tu,s.mau);
	s.tu=Tu;
	s.mau=Mau; 
	return s; 
} 
PS PS::operator/(PS temp)
{
	PS s;
	
	s.tu=this->tu * temp.mau;
	s.mau=this->mau * temp.tu;
	int Tu=s.tu,Mau=s.mau;
	Tu/=ucln(s.tu,s.mau);   
	Mau/=ucln(s.tu,s.mau);
	s.tu=Tu;
	s.mau=Mau; 
	return s; 
}
int main()
{
	PS a,b;
	cout<<"\nNhap phan so thu nhat\n ";
	cin>>a; 
	cout<<"\nNHap phan so thu hai\n";
	cin>>b; 
	cout<<"\n\n\nGia tri cua phan so thu nhat la: "<<a;
	cout<<"Gia tri cua phan so thu hai la: "<<b; 
	cout<<"Tong cua hai phan so la: "<<a+b; 
	cout<<"Hieu cua hai phan so la: "<<a-b; 
	cout<<"Tich cua hai phan so la: "<<a*b; 
	cout<<"Thuong cua hai phan so la: "<<a/b; 
 	cout << endl; 
	return 0;
}
