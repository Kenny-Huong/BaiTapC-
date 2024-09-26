//Xây dựng lớp giáo viên GV gồm các thuộc tính họ tên ht (kiểu char[30]), tuổi t (kiểu số
//nguyên), bằng cấp cao nhất được đào tạo bc (kiểu char[15]), chuyên ngành (kiểu
//char[20]), bậc lương bl (kiểu float) là các thuộc tính riêng. Trong lớp có định nghĩa các
//hàm công cộng sau:
//- Hàm toán tử nhập >> đi với cin để nhập dữ liệu cho các thông tin trên của 1 giáo
//viên.
//- Hàm toán tử xuất << đi với cout để xuất các thông tin trên của giáo viên ra màn
//hình
//- Hàm tính tiền lương cơ bản lcb biết rằng lcb = bl *610
//Viết chương trình nhập vào n(n nguyên dương nhập từ bàn phím) giáo viên. In ra màn
//hình danh sách các giáo viên có tiền lương nhỏ hơn 2000.
//- Với 1 giáo viên có họ tên được nhập vào từ bàn phím cho biết trong danh sách có
//giáo viên đó không? Nếu có đưa ra lương của giáo viên đó. Nếu không có chèn
//thông tin giáo viên đó vào cuối danh sách.. 


#include <iostream>
using namespace std;

class GV{
	private:
		char ht[30], bc[15], cn[20];
		int t;
		float bl;
		double lcb;
	public:
		GV(char *ht = " ", char *bc = " ", char *cn = " ", int t = 0, float bl = 0, double lcb = 0)
		{
			strcpy(this -> ht, ht);
			strcpy(this -> bc, bc);
			strcpy(this -> cn, cn);
			this -> t = t;
			this -> bl = bl;
			this -> lcb = lcb;
		}
		
		friend istream& operator >> (istream& in, GV& k)
		{
			fflush(stdin);
			cout << "Nhap ho va ten : "; in.getline(k.ht, 30);
			cout << "Nhap tuoi : "; in >> k.t;
			fflush(stdin);
			cout << "Nhap bang cap : "; in.getline(k.bc, 15);
			cout << "Nhap chuyen nganh : "; in.getline(k.cn, 20);
			cout << "Nhap bac luong : "; in >> k.bl;
			k.lcb = k.TinhLCB();
			
			return in;
		}
		
		friend ostream& operator << (ostream& os, GV& k)
		{
			os << "\nHo va ten	: " << k.ht;
			os << "\nTuoi		: " << k.t;
			os << "\nBang Cap Max 	: " << k.bc;
			os << "\nChuyen nganh 	: " << k.cn;
			os << "\n-Bac luong	: " << k.bl;
			os << "\n--Luong co ban  : " << k.lcb;
			
			return os;
		}
		
		double TinhLCB()
		{
			return lcb = bl * 610;
		}
		
		bool operator < (double k)
		{
			return this -> lcb < k;	
		}
};

void nhap_ds_gv(int &n, GV a[])
{
	cout << "\nNhap Thong Tin Danh Sach Giao Vien " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "-> Nhap thong tin giao vien thu " << i + 1 << endl;
		cin >> a[i];
	}	
}
	
void xuat_ds_gv(int n, GV a[])
{
	cout << "\nThong Tin Danh Sach Giao Vien Da Nhap " << endl;
	for (int i = 0; i < n; i ++)
	{
		cout << "* Thong Tin Giao Vien Thu " << i + 1 <<  " * " << endl;
		cout << a[i];	
	}	
}	
	
void luong_nho_2000(int n, GV a[])
{
	cout << "\n\n2* Danh Sach Giao Vien Co LCB < 2000 *" << endl;
	for (int i = 0; i < n; i++)
	{
		if(a[i] < 2000)
		{
			cout << a[i];
		}
	}
}
int main()
{
	int n;
	cout << "Nhap so luong Giao Vien can nhap : "; cin >> n;
	while( n < 1 )
	{
		cout << "Moi nhap lai so luong Giao Vien ( > 1 ) : "; cin >> n; 
	}
	GV a[n];
	nhap_ds_gv(n, a);
	xuat_ds_gv(n, a);
	luong_nho_2000(n, a);
	return 0;
}