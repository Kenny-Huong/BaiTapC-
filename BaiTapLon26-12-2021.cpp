#include <iostream>
using namespace std;

struct Nhanvien{
	string mnv;
	char   tennv[100];
	float  luongngay;
	float  ngaycong;
	float  luongthang;
	float  thuong;
};
void menu(){
	cout << "----------------MENU---------------"<<"\n";
	cout << "1.Nhap danh sach nhan vien tu ban phim"<<"\n";
	cout << "2.Tinh luong thang cua nhan vien voi luong thang = luong ngay * ngay cong"<<"\n";
	cout << "3.In ra danh sach nhan vien voi day du thong tin duoi dang bang"<<"\n";
	cout << "4.In thong tin nhan vien co ngay cong cao nhat"<<"\n";
	cout << "5.Sap xep danh sach nhan vien theo thu tu giam dan cua truong thuong"<<"\n";
	cout << "6.Them vao danh sach nhan vien co thong tin duoc nhap vao tu ban phim sao cho van dam bao thu tu sap xep"<<"\n";
	cout << "7.Xoa khoi danh sach nhan vien co ma la manv, voi manv nhap vao tu ban phim"<<"\n";
	cout << "8.Luu danh sach nhan vien duoi dang tepk employee.dat"<<"\n";
	cout << "9.Doc danh sach nhan vien tu tep employee.dat va ket xuat thong tin len man hinh"<<endl;
			
}

void NhapDSNV(Nhanvien a[],int &n){
	cout << " " << endl;
	cout << "\nBan muon nhap bao nhieu nhan vien : ";
	cin >> n;
	cout << " " << endl;
	for (int i = 0; i < n; i++){
		cin.ignore();
		cout << "Vui long nhap thong tin nhan vien !!" << i + 1 << endl;
		cout << "Nhap ma sinh vien : ";cin >> (a[i].mnv);
		cout << "Ten nhan vien : ";    cin.getline(a[i].tennv,100);
		cout << "Luong ngay : ";       cin >> (a[i].luongngay);
		cout << "Ngay cong : ";        cin >> (a[i].ngaycong);
	}
		cout << " " << endl;					
}

void Tlt(Nhanvien a[],int &n){
	for (int i = 0; i < n; i++){
        a[i].luongthang = (a[i].luongngay * a[i].ngaycong);
       	cout << "luong thang cua nhan vien " << a[i].tennv << "la : " << a[i].luongthang << endl;
		   	   		
    }
}

void Thuong(Nhanvien a[],int &n){
	for (int i = 0; i < n; i++){
		if (a[i].ngaycong >= 26){
			cout << "Thuong = 5000000";
		}
		else if(a[i].ngaycong < 26 && a[i].ngaycong >= 24){
			cout << "Thuong = 3000000";	
		}
		else if(a[i].ngaycong < 24 & a[i].ngaycong >= 22){
			cout << "Thuong = 2000000";
		}
		else if(a[i].ngaycong < 22){
			cout << "Thuong = 1000000";
		}			
    }
}

void InDSNV(Nhanvien a[],int &n){
	    cout << "------------Danh sach nhan vien----------" << endl;
		cout << "STT" << setw(15) << "mnv" ;
		cout << setw(15) << "tennv" << endl;
   	for (int i = 0; i < n; i++){
	cout << " "     << setw(2)   << i+1 << " ";
	cout << setw(15)<< a[i].mnv  << " ";
	cout << set(15) << a[i].tennv<< " " << endl;				
    }
}

void InNVNCCN(Nhanvien a[],int &n){
        int h = 0;	
 		for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++){
        	if ( a[i].ngaycong < a[j].ngaycong){
        		h = j;
			}
		}
		
	}
	cout << "Nhan vien co ngay cong cao nhat la : " << endl;
	cout << "Ma nhan vien : " ;
	cout << "Ten nhan vien : " ;
	cout << "Ngay cong : " << endl;
	cout << a[h].mnv << a[h].tennv << a[h].ngaycong << endl;
	
}

void Sapxep(Nhanvien a[],int &n){
	Nhanvien kenny;
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++){
        	if ( a[i].thuong > a[j].thuong){
     	    kenny = a[i];
     	    a[i] = a[j];
     	    a[j] = kenny;
     	    }
		}	
   }
	cout << "Danh sach nhan vien co thu tu giam dan cua truong thuong : " << endl;
	cout << "Ma nhan vien : " ; 
	cout << "Ten nhan vien : " ;
	cout << "truong thuong : " << endl;
	for (int i = 0; i < n; i++){
		cout << a[i].mnv << a[i].tennv << a[i].thuong << endl;
	}
}

void Addnv(Nhanvien a[],int &n){
	
}









