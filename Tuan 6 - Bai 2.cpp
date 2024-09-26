#include<iostream>
#include<iomanip.h>
#include<string.h>

using namespace std;
void tieu_de()
{
	cout<<"| STT |          ho va ten           |   ngay sinh   |  so cmt  |                      ho khau                     |\n";          
}
struct date
{
	int ngay,thang,nam;	
}; 
class KH
{
	char name[30];
	date ns;
	char cmt[10],ho_khau[50];
	public:
		KH()
		{
			strcpy(name," ");
			ns.ngay=ns.thang=ns.nam=0;
			strcpy(cmt," ");
			strcpy(ho_khau," "); 
		}
		friend istream& operator >> (istream&,KH&);
		friend ostream& operator << (ostream&,KH); 
		bool operator > (KH tmp);	
		void import_list(KH a[],int &n);
		void show_list(KH a[],int n);
		void HaNoi(KH a[],int n);
		void sort(KH a[],int &n);
		void menu(KH a[],int &n);
} ;
istream& operator >> (istream& in,KH& tmp)
{
 
	cout<<"Nhap ho va ten: ";
	in.getline(tmp.name,30);
	cout<<"Nhap ngay thang nam sinh (dd/mm/yyyy)\n";
	cout<<"Nhap ngay: ";in>>tmp.ns.ngay;
	cout<<"Nhap thang: ";in>>tmp.ns.thang;
	cout<<"Nhap nam: ";in>>tmp.ns.nam;
	in.ignore();
	cout<<"Nhap so chung minh thu: ";
	in.getline(tmp.cmt,10);
	cout<<"Nhap ho khau: ";
	in.getline(tmp.ho_khau,50); 
	return in;
}
ostream& operator << (ostream& out,KH tmp)
{
	out<<"|"<<setw(30)<<tmp.name
	   <<"|  "<<setw(2) <<tmp.ns.ngay<<"/"<<setw(2)<<tmp.ns.thang<<"/"<<setw(4)<<tmp.ns.nam
	   <<"   |"<<setw(10)<<tmp.cmt
	   <<"|"<<setw(50)<<tmp.ho_khau
	   <<"|"<<setw(0)<<endl;
	return out; 	
}
bool KH::operator > (KH tmp)
{
	if(this->ns.nam < tmp.ns.nam)
	{
		return true;
	}
	if(this->ns.nam == tmp.ns.nam)
	{
		if(this->ns.thang < tmp.ns.thang)
			return true;
		if(this->ns.thang == tmp.ns.thang)
		{
			if(this->ns.ngay < tmp.ns.ngay)
				return true;
		}	
	}
	return false;
}
void KH::import_list(KH a[],int &n)
{
	cout<<"\n\t\t\tNHAP DANH SACH THON TIN "<<n<<" KHACH HANG\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\n\tNhap thong tin cua khach hang thu "<<i+1<<endl;
		cin>>a[i];
	}
}
void KH::show_list(KH a[],int n)
{
	cout<<"\n\t\t\tXUAT DANH SACH THONG TIN "<<n<<" KHACH HANG\n";
	tieu_de();
	for(int i=0;i<n;i++)
	{
		
		cout<<"|"<<setw(5)<<i+1<<a[i];
	}
}
void KH::HaNoi(KH a[],int n)
{
	bool check=0;
	cout<<"\n\t\t\tXUAT THONG TIN CAC KHAC HANG O HA NOI TRONG DANH SACH\n";
	for(int i=0;i<n;i++)
	{
		if(strcmpi(a[i].ho_khau,"HaNoi")==0)
		{
			++check ;
			if(check == 1)
			tieu_de();
			cout<<"|"<<setw(5)<<check<<a[i];
		}
			
	}
	if(check==0)
		cout<<"\n\t\t\tKHONG CO KHACH HANG NAO CO HO KHAU LA \"HaNoi\" TRONG DANH SACH\n";				
}
void KH::sort(KH a[],int &n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if((a[j])>(a[i]))
				swap(a[i],a[j]);
	cout<<"\n\t\t\tDa SAP XEP DANH SACH GIAM DAN THEO TUOI THANH CONG! \n"	;		
}
void KH::menu(KH a[],int &n)
{
	cout<<"\n\t\t\t\t\tM_E_N_U\n"
		<<"1. nhap danh sach n khach hang(nhap tu ban phim)\n"
		<<"2. xuat danh sach khach hang\n"
		<<"3. hien thi thong tin cac khach hang co ho khau la \"HaNoi\"\n"
		<<"4. sap xep danh sach khach hang theo thu tu giam dan cua tuoi\n"
		<<"0. exit\n";
		int lc;cout<<"Nhap lua chon cua ban: ";cin>>lc;
		cin.ignore();
		switch(lc)
		{
			case 1:a[n].import_list(a,n);
			break;
			
			case 2:a[n].show_list(a,n);
			break;
			
			case 3:a[n].HaNoi(a,n);
			break;
			
			case 4:a[n].sort(a,n);
			break;
			
			case 0:return;
			break;
			default:cout<<"\n\t\t\tKhong co lua chon nay!\n\t\tChon lai\n";
		}
	a[n].menu(a,n);	
}
int main()
{
	int n;
	cout<<"Nhap so luong khach hang co tron danh sach: ";
	cin>>n;
	while(n<1)
	{
		cout<<"Nhap lai so khach hang co trong danh sach: ";
		cin>>n;
	}
	KH a[n];
	a[n].menu(a,n);
	return 0;
}
