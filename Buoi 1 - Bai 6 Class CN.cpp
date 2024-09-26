#include <iostream>
using namespace std;

class CN
{
	string ht;
	int tuoi;
	string qq;
	float bl;
	public:
		CN(string ht="",int tuoi=0,char* qq="",float bl=0.0)
		{
			this->ht=ht;
			this->tuoi=tuoi;
			this->qq=qq;
			this->bl=bl; 
		}	
		void import()
		{
			cout<<"Nhap ho va ten: ";getline(cin,ht);
			
			cout<<"Nhap tuoi: ";cin>>tuoi;
			fflush(stdin);
			cout<<"Nhap que quan: ";getline(cin,qq);
			
			cout<<"Nhap bac luong: ";cin>>bl; 
			cout<<endl; 
		} 
		void display()
		{
			cout<<"Ho va ten: "<<ht<<endl
				<<"Tuoi: "<<tuoi<<endl
				<<"Que quan: "<<qq<<endl
				<<"Bac luong: "<<bl<<endl
				<<"tien luong: "<<this->Ttien()<<endl; 
		} 
		double Ttien() 
		{
			return this->bl*2500 + (this->bl*2500)*0.2; 
		}
}; 
#define a() a
int main()
{
	CN a();
	a.import();
	a.display(); 
	return 0;
}