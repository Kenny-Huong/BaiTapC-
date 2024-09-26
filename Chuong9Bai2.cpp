#include<iostream.h>
#include<iomanip.h> 
using namespace std;
struct hs{
    string mahs;
	string hoten;
	string gioitinh;
	float toan,ly,hoa,diemtb;
	string xephang;	
};
void nhapmoths(hs &x){ 
	cout<<"nhap ma hoc sinh: ";
	cin>>x.mahs;
	cout<<"nhap ho va ten: ";
	cin>>x.hoten;
	cout<<"gioi tinh: ";
	cin>>x.gioitinh;
	cout<<"nhap diem toan: ";
	cin>>x.toan;
	while(x.toan<0||x.toan>10){
		cout<<"hay nhap lai diem toan: ";
		cin>>x.toan; 
	} 
	cout<<"nhap diem ly: ";
	cin>>x.ly;
	while(x.ly<0||x.ly>10){
		cout<<"hay nhap lai diem ly: ";
		cin>>x.ly; 
	} 
	cout<<"nhap diem hoa: ";
	cin>>x.hoa;
	while(x.hoa<0||x.hoa>10){
		cout<<"hay nhap lai diem hoa: ";
		cin>>x.hoa; 
	} 
	cout<<"\n"; 
} 
void nhapdanhsach(hs a[],int n){
	for(int i=0;i<n;i++)nhapmoths(a[i]); 
}
void diemtb(hs a[],int n){
	for(int i=0;i<n;i++) 
	a[i].diemtb=(a[i].toan*4+a[i].ly*3+a[i].hoa*2)/9; 
}

void xephang(hs a[],int n){
	for(int i=0;i<n;i++){
		if (a[i].diemtb<5)a[i].xephang="xep hang yeu";
	else if(a[i].diemtb>=5 && a[i].diemtb<6.5)a[i].xephang="xep hang trung binh";
	else if(a[i].diemtb>=6 && a[i].diemtb<8)a[i].xephang="xep hang kha";
	else if (a[i].diemtb>=8 && a[i].diemtb<9)a[i].xephang="xep hang gioi";
	else a[i].xephang="xep hang xuat sac"; 
	} 	
} 
void xuatmoths(hs x){
	cout<<"________________________________________\n"; 
	cout<<" | "<<setw(15)<<"ma hoc sinh: "<<setw(20)<<x.mahs<<" | "<<"\n";
	cout<<" | "<<setw(15)<<"ho va ten: "<<setw(20)<<x.hoten<<" | "<<"\n";
	cout<<" | "<<setw(15)<<"gioi tinh: "<<setw(20)<<x.gioitinh<<" | "<<"\n";
	cout<<" | "<<setw(15)<<"diem toan: "<<setw(20)<<x.toan<<" | "<<"\n";
	cout<<" | "<<setw(15)<<"diem ly: "<<setw(20)<<x.ly<<" | "<<"\n";
	cout<<" | "<<setw(15)<<"diem hoa: "<<setw(20)<<x.hoa<<" | "<<"\n";
	cout<<" | "<<setw(15)<<"diem trung binh: "<<setw(18)<<x.diemtb<<" | "<<"\n";
	cout<<" | "<<setw(15)<<"danh hieu: "<<setw(20)<<x.xephang<<" | "<<"\n";	
} 
void xuatdanhsach(hs a[],int n){
	for(int i=0;i<n;i++){
		xuatmoths(a[i]); 
	} 
}
void danhsachnu(hs a[],int n){
	for(int i=0;i<n;i++){
		if (a[i].gioitinh=="nu"&&a[i].xephang=="xep hang gioi" ||  a[i].xephang=="xep hang xuat sac")	 xuatmoths(a[i]); 		
	} 
}
int main(){
    hs a[100];
    int n; 
	cout<<"nhap so hoc sinh co trong danh sach: ";
	cin>>n;	 
	cout<<"\n\t-=---------------------------------*** NHAP DANH SACH ***---------------------------------=-\n\n"; 
	nhapdanhsach(a,n);
	cout<<"\n\n\t-=---------------------------------*** BANG HOC SINH ***---------------------------------=-\n\n";
	diemtb(a,n); 
	xephang(a,n); 
	xuatdanhsach(a,n); 
	cout<<"\n";
	cout<<"\n\n-=---------------------------------*** BANG HOC SINH NU XUAT SAC VA GIOI ***---------------------------------=-\n\n";
	danhsachnu(a,n);
	cout<<"\n"; 
	char o=3; 
	for(int i=0;i<=38;i++)cout<<o<<"  "; 
	cout<<"\n"; 
}
