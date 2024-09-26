#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
struct nhanvien { 
	char ma_nv[10];
 	char ten_nv[30];
  	int hsl_nv;
	};
void nhap(int n,nhanvien a[]){ 
	for(int i=0;i<n;i++){ 
 		cout<<"Ma NV"<<i+1<<" la: ";
  		cin.getline(a[i].ma_nv,10);
    	cout<<"Ten NV"<<i+1<<" la: ";
	  	cin.getline(a[i].ten_nv,30);
    	cout<<"He so luong cua NV "<<i+1<<" la: ";
	  	cin>>a[i].hsl_nv;
    	fflush(stdin);
     	cout<<endl;
 		}
	}
void xuat(int n,nhanvien a[]){ 
	for(int i=0;i<n;i++){
 		float lcb;
   		float pc;
   		double tl;
   		lcb=a[i].hsl_nv*27500;
   		pc=0.25*lcb;
   		tl=lcb+pc;
   		//cout<<a[i].ma_nv<<"\t"<<a[i].ten_nv<<"\t"<<a[i].hsl_nv<<"\t\t"<<lcb<<"\t\t\t"<<pc<<"\t\t"<<tl<<endl;
   		cout<<left<<setw(10)<<a[i].ma_nv<<setw(20)<<a[i].ten_nv<<setw(15)<<a[i].hsl_nv<<setw(15)<<lcb<<setw(15)<<pc<<setw(15)<<tl<<endl;
 		}
	}
void giamdan(int n, nhanvien a[]){ 
	for(int i=0;i<n;i++){ 
 		for(int j=i+1;j<n;j++){ 
   		if(a[i].hsl_nv<a[j].hsl_nv){
   			nhanvien tg=a[i];
    		a[i]=a[j];
	    	a[j]=tg; 
	  		}
 		}
	}xuat(n,a);
}
int main(){ 
int n;
	nhanvien a[100];
	cout<<"Nhap so nhan vien: ";cin>>n;
	fflush(stdin);
	cout<<"Nhap danh sach nhan vien: \n";
	nhap(n,a);
	cout<<"Hien thi danh sach nhan vien duoi dang bang: \n";
    cout<<left<<setw(10)<<"Ma_nv "<<setw(20)<<"Ten_nv"<<setw(15)<<"He So Luong"<<setw(15)<<"Luong Co Ban"<<setw(15)<<"Phu Cap"<<setw(15)<<"Tong Luong ";
    cout<<endl;
	xuat(n,a);
	cout<<"Danh sach nhan vien theo thu tu giam dan: \n";
	cout<<left<<setw(10)<<"Ma_nv "<<setw(20)<<"Ten_nv"<<setw(15)<<"He So Luong"<<setw(15)<<"Luong Co Ban"<<setw(15)<<"Phu Cap"<<setw(15)<<"Tong Luong ";
	cout<<endl;
	giamdan(n,a);
	return 0;
}
