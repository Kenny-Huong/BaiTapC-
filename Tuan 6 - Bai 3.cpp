#include<iostream>
using namespace std;

class vector
{
	int a,b,c; 
	public:
		vector(int a=0,int b=0,int c=0) 
		{
			this->a=a;
			this->b=b;
			this->c=c; 
		} 
		~vector(){}
		friend istream& operator >> (istream& in,vector &tmp);
		friend ostream& operator << (ostream&,vector);
		vector operator + (vector );
		vector operator - (vector );
};
istream& operator >> (istream& in,vector &tmp)
{
	cout<<"Nhap truc hoanh(OX): ";in>>tmp.a;
	cout<<"Nhap truc tung(OY): ";in>>tmp.b;
	cout<<"Nhap chieu cao(OZ): ";in>>tmp.c;
	return in;
}
ostream& operator << (ostream& out,vector tmp)
{
	out<<tmp.a<<"X + "<<tmp.b<<"Y + "<<tmp.c<<"Z\n";
	return out;
}
vector vector::operator+(vector tmp)
{
	vector s;
	s.a=this->a+tmp.a;
	s.b=this->b+tmp.b;
	s.c=this->c+tmp.c;
	return s;
}
vector vector::operator-(vector tmp)
{
	vector s;
	s.a=this->a-tmp.a;
	s.b=this->b-tmp.b;
	s.c=this->c-tmp.c;
	return s;
}
int main()
{
	vector a,b;
	cout<<"\n\t\tNhap thong tin cua vector thu nhat\n";
	cin>>a;
	cout<<a;
	cout<<"\n\t\tNhap thong tin cua vector thu hai\n";
	cin>>b;
	cout<<b;
	
	cout<<"\nTong cua hai vector la: "<<a+b<<endl;
	cout<<"\nHieu cua hai vector la: "<<a-b<<endl;
	return 0;
}
