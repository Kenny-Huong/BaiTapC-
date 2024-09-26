#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

struct PhanXuong
{
	char MaNv[20];
	char TenNv[30];
	long NgayCong;
	long LuongNgay;
	long LuongThang;
    long LuongThuong; 
	};
    
void Nhap(PhanXuong nv[], int n)
	{
		for (int i = 0; i < n; i++)
		{	
		cout << "\nNhap thong tin nhan vien thu " << i + 1 << ":" << endl;
		cin.ignore();
		cout << "Ma Nhan Vien : ";
		cin.getline(nv[i].MaNv, 20);
		cout << "Ho va Ten : "; 
		cin.getline(nv[i].TenNv, 20);
		cout << "Luong Ngay : "; 
		cin  >> nv[i].LuongNgay;
		cout << "Ngay Cong : "; 
		cin  >> nv[i].NgayCong;
	}
}


void Tinhtoan(PhanXuong nv[] , int &n)
{
	for (int i = 0; i < n; i++)
	{
		if(nv[i].NgayCong >= 26){
			nv[i].LuongThuong = 5000000 ; 
		}
		else if(24 <= nv[i].NgayCong || nv[i].NgayCong < 26 ){
			nv[i].LuongThuong = 3000000 ; 
		}
		else if(22 <= nv[i].NgayCong || nv[i].NgayCong < 24 ){
			nv[i].LuongThuong = 2000000 ; 
		}
		else if( nv[i].NgayCong < 22 ){
			nv[i].LuongThuong = 1000000 ; 	
		}
	}
	cout<<endl;
}
void Luongthang(PhanXuong nv[] , int &n) {
        	
 for (int i = 0; i < n; i++)
		{
		 nv[i].LuongThang = nv[i].NgayCong * nv[i].LuongNgay;
			
			}		
	cout<<".---------------------------------------------------------------------------------------------------."<<"\n";
	cout<<"|                                      TINH LUONG THANG NHAN VIEN                                   |"<<endl;
	cout<<"|---------------------------------------------------------------------------------------------------|"<<"\n";
    cout<<"|"<<"STT|"<<setw(15)<<"Ma NV|" <<setw(20)<<"Ten NV"<<setw(9)<<"|"<<setw(20)<<"LUONG THANG"<<endl;
    cout<<"|---------------------------------------------------------------------------------------------------|"<<"\n";

	for (int i = 0; i < n; i++)
    {
        cout<<"| "<<setw(2)<<i+1<<"|";
		cout<<setw(14)<<nv[i].MaNv<<"|";
        cout<<setw(17)<<nv[i].TenNv<<setw(12)<<"|";
        cout<<setw(19)<<nv[i].LuongThang<<endl;
		cout<<".---------------------------------------------------------------------------------------------------|"<<"\n";
	        
    }
}
void Thuong(PhanXuong nv[] , int &n){
	for(int i = 0; i < n; i++){
		if(nv[i].NgayCong >= 26){
			nv[i].LuongThuong = 5000000;
		}else if(nv[i].NgayCong >= 24){
			nv[i].LuongThuong = 3000000;
		}else if(nv[i].NgayCong >= 22){
			nv[i].LuongThuong = 2000000;
		}else {
			nv[i].LuongThuong = 1000000;
		}
}

}
void Tieude()
{
	cout << setw(10) << right << "||Ma NV||";
	cout << setw(15) << right << "||Ten NV||";
	cout << setw(20) << right << "||LUONG NGAY||";
	cout << setw(25) << right << "||NGAY CONG||";
	cout << setw(30) << right << "||LUONG THANG||";
	cout << setw(35) << right << "||LUONG THUONG||";
	cout << endl;
}

void Xuat(PhanXuong nv[], int n)
{
	Tieude();
	for ( int i = 0; i < n; i++)
	{
		cout << setw(10) << right << nv[i].MaNv;
		cout << setw(15) << right << nv[i].TenNv;
	    cout << setw(20) << right << nv[i].LuongNgay;
	    cout << setw(25) << right << nv[i].NgayCong;
	    cout << setw(30) << right << nv[i].LuongThang;
	    cout << setw(35) << right << nv[i].LuongThuong;
	    cout << endl;
	}    
}

void Tieude1()
{
	cout << setw(10) << right << "||Ma NV||";
	cout << setw(15) << right << "||Ten NV||";
	cout << setw(25) << right << "||NGAY CONG||";
	cout << setw(30) << right << "||LUONG THUONG||";
	cout << endl;
}
void Xuat1(PhanXuong nv[], int n)
{
	Tieude1();
	for ( int i = 0; i < n; i++)
	{
		cout << setw(10) << right << nv[i].MaNv;
		cout << setw(15) << right << nv[i].TenNv;
	    cout << setw(25) << right << nv[i].NgayCong;
	    cout << setw(30) << right << nv[i].LuongThuong;
	    cout << endl;
	}    
}

void Ngaycongmax(PhanXuong nv[], int n){
	
	int k=0;
	for(int i = 0; i < n; i++)
	{
        for(int j = 1; j < n; j++)
		{
            if(nv[i].NgayCong<nv[j].NgayCong)
			{                               
               k=j;
            }
        }
    }
 	cout<<".--------------------------------------------------------------."<<"\n";
	cout<<"|                        NGAY CONG CAO NHAT                    |"<<endl;
    cout<<"|--------------------------------------------------------------|"<<"\n";
	cout<<"|"<<setw(12)<<"MA NV |"<<setw(20)<<"TEN NV"<<setw(8)<<"|";      
    cout<<setw(23)<<" NGAY CONG |"<<endl;
	cout<<"|--------------------------------------------------------------|"<<"\n";
	cout<<"|"<<setw(3)<<nv[k].MaNv<<setw(9)<<"|";
	cout<<setw(15)<<nv[k].TenNv<<setw(13)<<"|";
	cout<<setw(16)<<nv[k].NgayCong<<setw(7)<<" |"<<endl;
	cout<<".--------------------------------------------------------------."<<"\n";
	}

void Sapxep(PhanXuong nv[], int n)
{
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (nv[i].LuongThuong < nv[j].LuongThuong)
				swap(nv[i], nv[j]);
	}
}
Xuat(nv,n);
}
void Them_Nv (PhanXuong nv[], int &n)
{
        n++;
	    cout<<"\nNhap thong tin nguoi can nhap vao cuoi mang\n" ;
	    cin.ignore();
	    cout<<"\nNhap ma nhan vien moi :";
		cin.getline(nv[n-1].MaNv,20);
		cout<<"--Nhap ten nhan vien :";
		cin.getline(nv[n-1].TenNv,30);
		cout<<"---Nhap luong ngay : ";
		cin>>nv[n-1].LuongNgay;
		cout<<"--------Nhap ngay cong  :";
		cin>>nv[n-1].NgayCong;
		for (int i = 0; i <n; i++){
		   nv[i].LuongThang=nv[i].NgayCong*nv[i].LuongNgay;
			if(nv[i].NgayCong >= 26){
			nv[i].LuongThuong = 5000000 ; 
		}
		else if(24 <= nv[i].NgayCong && nv[i].NgayCong < 26 ){
			nv[i].LuongThuong = 3000000 ; 
		}
		else if(22 <= nv[i].NgayCong && nv[i].NgayCong < 24 ){
			nv[i].LuongThuong = 2000000 ; 
		}
		else if( nv[i].NgayCong < 22 ){
			nv[i].LuongThuong = 1000000 ;}
		
	}
	Xuat(nv,n);
}

void XoaNv(PhanXuong nv[], int &n, char k[]){
	for(int i = 0; i < n; i++){
			if(strcmp(nv[i].MaNv,k)==0)
			{
				for (int j = i ; j < n ; j++)
				{
					nv[j] = nv[j + 1];
				}
				cout << "\n Da xoa thanh cong nv co ma :" << k << endl;
				break;
			}
      }
   	Tieude();
	for (int i = 0; i < n-1; i++)
	{
		cout << nv[i].MaNv << "\t";
		cout << "\t" << nv[i].TenNv;
		cout << "\t\t" << nv[i].LuongNgay;
		cout << "\t\t" << nv[i].NgayCong;
		cout << "\t\t" << nv[i].LuongThang;
		cout << "\t\t" << nv[i].LuongThuong << endl;
	}
}


void Luutep(PhanXuong nv[],int n)
{
	fstream f;
	f.open("employee.dat",ios::out); 
	if(!f)
	{
		cout<<"Khong the luu tep nay!";
	}
	else
	{
    f<<setw(23)<<left<<"Ma Nv";
	f<<setw(22)<<left<<"Ten Nv ";
	f<<setw(40)<<left<<"Ngay Cong ";
	f<<setw(31)<<left<<"Luong Thang ";
	f<<setw(20)<<left<<"Luong Thuong";
	f<<endl;
    for (int i=0;i<n;i++){
	f<<setw(23)<<nv[i].MaNv;
 	f<<setw(22)<<nv[i].TenNv;
    f<<setw(40)<<nv[i].NgayCong;
    f<<setw(31)<<nv[i].LuongThang;
    f<<setw(20)<<nv[i].LuongThuong << endl;
    }
        }
       	cout<<"\nDa luu tep thanh cong! " << endl;
	  
	f.close();
}

void Doctep(PhanXuong nv[], int n,string x[])
{
cout<<" "<<endl;	
	fstream f;
	f.open("employee.dat",ios::in);
	for(int i = 0; i < n; i++)
	{
   	    while(!f.eof())
		{
			getline(f,x[i]);
			cout<<x[i]<<endl;		
		}	
	}
	f.close();
cout<<" "<<endl;

}

void menu(){
		cout << "\n----------------------DANH SACH LUA CHON CHUC NANG----------------------" << endl;
		cout << "| [1].Nhap danh sach Nhan Vien.                                          |" << endl;
		cout << "| [2].Tinh Luong Thang Cua Nhan Vien.                                    |" << endl;
		cout << "| [3].In danh sach Nhan Vien day du thong tin duoi dang bang.            |" << endl;
		cout << "| [4].In thong tin Nhan Vien co ngay cong cao nhat.                      |" << endl;
		cout << "| [5].Danh sach Nhan Vien giam dan cua truong thuong.                    |" << endl;
		cout << "| [6].Them thong tin Nhan Vien vao danh sach.                            |" << endl;
		cout << "| [7].Xoa khoi danh sach Nhan Vien co ma la manv.                        |" << endl;
		cout << "| [8].Luu danh dach Nhan Vien ra tep employee.dat.                       |" << endl;
		cout << "| [9].Doc danh sach Nhan Vien tu tep employee.dat va xuat ra man hinh.   |" << endl;
		cout << "| [0].Thoat.                                                             |" << endl;
		cout << "-------------------------------------------------------------------------"  << endl;
	
}

int main()
{
	string x[1000]; 
	char k[10];
	int chose, n;
	PhanXuong nv[50];
	menu();

	do
	{
	
		cout << "Nhap Lua chon cua ban : "; cin >> chose;
		switch (chose)
	   {
		case 0: break;
		case 1:
			cout << "\nNhap so luong Nhan vien : "; cin >> n;
			Nhap(nv, n);
			break;
		case 2:
			Luongthang(nv, n);
			Thuong(nv,n);
			cout<<endl;
			Xuat1(nv, n);
			break;
		case 3:
			cout<<"Danh Sach Nhan Vien la :\n " << endl; 	
			Xuat(nv, n);
			break;
		case 4:
		    cout<<"Ngay Cong MAX La :"<<endl;
		    Ngaycongmax(nv,n);
			break;
		case 5:
			cout<<"Danh sach nhan vien sau khi sap xep theo thu tu giam dan la :\n" << endl ; 
			Sapxep(nv, n);
			break;
		case 6:
			Them_Nv(nv,n);  
			break;
		case 7 : 
		  	cout<<"Nhap ma nhan vien can xoa :";
			cin.ignore();
            cin.getline(k,10);
			XoaNv(nv,n,k);
			n--;  
		    break ; 
        case 8 : 
            Luutep(nv,n) ; 
            cout<<"Da luu thanh cong !" ; 
            break ; 
        case 9 : 
            Doctep(nv,n,x) ; 
            break ; 
		default:cout << "\nERROR : Khong co lua chon nao" << endl;
			break;
		}
	} while (chose != 0);
	return 0;
}
