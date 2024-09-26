#include <iostream>
#include <iomanip>
using namespace std;

			
/*
typedef struct 
{
	char	masp[15];
	char	tensp[30];
	int 	soluong;
	int 	dongia;
}	san_pham;

void nhapds(san_pham a[], int m)
{
	for(int i = 0; i < m; i++)
	{
		cin.ignore();
		cout << "\nNhap san pham thu " << i + 1 << endl;
		cout <<      "Ma san pham  : "; cin.getline(a[i].masp, 15);
		cout <<      "Ten san pham : "; cin.getline(a[i].tensp, 30);
		cout << "So luong san pham :"; cin >> a[i].soluong;
		cout << "Don gia san pham  :"; cin >> a[i].dongia;
		cout << endl;
	}
}

void inds(san_pham a[], int m)
{
	cout << "\n\n-----------Danh Sach San Pham -------------" << endl;
	cout << setw(15) <<   "Ma san pham";
	cout << setw(30) <<   "Ten san pham";
	cout << setw(15) << 	 "So luong";
	cout << setw(15) <<"Don gia"<< endl;
	
	for (int i = 0; i < m; i++)
	{
		cout << setw(15) << a[i].masp;
		cout << setw(30) << a[i].tensp;
		cout << setw(15) << a[i].soluong;
		cout << setw(15) << a[i].dongia	<< endl;
	}
}

void spgiaduoi20k (san_pham a[], int m)
{
	cout << "\n ---- Danh sach san pham co gia < 20k ----" << endl;
	cout << setw(15) <<  "Ma san pham";
	cout << setw(30) << "Ten san pham";
	cout << setw(15) <<     "So luong";
	cout << setw(15) <<"Don gia"<<endl; 
	
	for(int i = 0; i < m; i++)
	if (a[i].dongia < 20000)
	{
		cout << setw(15) << a[i].masp;
		cout << setw(30) << a[i].tensp;
		cout << setw(15) << a[i].soluong;
		cout << setw(15) << a[i].dongia	<< endl;
	}
}

int main()
{
	san_pham sp[50];
	int n;
	cout << "Nhap so san pham : "; cin >> n;
	nhapds(sp, n);
	inds(sp, n);
	spgiaduoi20k(sp, n);
	return 0;
}

*/

/*
typedef struct
{
	char	magv[10];
	char	hoten[20];
	int 	somon;
	int 	hocky;
}	giang_vien;

void nhapds(giang_vien a[], int m)
{
	for (int i = 0; i < m; i++)
	{
		cin.ignore(); 
		cout << "\nNhap san pham thu " << i + 1 << endl;
		cout << "Nhap ma giang vien : "; cin.getline(a[i].magv, 10);
		cout << "Ho va ten :"; cin.getline(a[i].hoten, 20);
		cout << "So mon day :"; cin >> a[i].somon;
		cout << " Hoc ky :"; cin >> a[i].hocky; 
		cout << endl; 
	}
}

void tieude()
{
	cout << setw(15) << "Ma gv";
	cout << setw(30) << "Ten giang vien";
	cout << setw(15) << "So mon";
	cout << setw(15) << "Hoc ky";
	cout << endl;
 } 

void inds(giang_vien a[], int m)
{
	cout << "\n\n --- Danh Sach Giang Vien --- " << endl;
	tieude();
	for (int i = 0; i < m; i++)
	{
		cout << setw(15) << a[i].magv;
		cout << setw(30) << a[i].hoten;
		cout << setw(15) << a[i].somon;
		cout << setw(15) << a[i].hocky;
		cout << endl;
	}
}

void gvday5mon (giang_vien a[], int n)
{
	cout << "\n--- Ds Gv day 5 mon tro len --" << endl;
	tieude();
	for (int i =0; i < n; i++)
		if (a[i].somon >= 5)
			{
				cout << setw(15) << a[i].magv;
				cout << setw(30) << a[i].hoten;
				cout << setw(15) << a[i].somon;
				cout << setw(15) << a[i].hocky;
				cout << endl;
			}
	
}

int main()
{
	giang_vien gv[50];
	int n;
	cout << "Nhap so giang vien"; cin >> n;
	nhapds(gv, n);
	inds(gv, n);
	gvday5mon(gv, n);
	return 0;
}
*/

/*
typedef struct
{
	char	manh[10];
	char 	tenmh[30];
	int 	soluong;
	float 	dongia;
	float 	thanhtien;
 } mathang;

void nhapds(mathang a[], int n)
{
	for (int i = 0; i < n; i++)
	{
	cout << "\nNhap mat hang thu : " << i + 1 << endl;
	cin.ignore();
	cout << "Ma mat hang : "; cin.getline(a[i].manh, 10);
	cout <<"\nTen mat hang : "; cin.getline(a[i].tenmh, 30);
	cout << "\nSo luong : "; cin >> a[i].soluong;
	cout << "\nDon gia : "; cin >> a[i].dongia;
	}
}

void tieude()
{
	cout << setw(10) << "Ma mh ";
	cout << setw(30) << "Ten mat hang";
	cout << setw(10) << "So luong";
	cout << setw(15) << "Don gia";
	cout << setw(15) << "Thanh tien";
	cout << endl; 
}

void inds(mathang a[], int n)
{
	cout << "\n --- Danh sach mat hang ---" << endl;
	tieude();
	for (int i = 0; i < n; i++)
	{
		cout << setw(10) << a[i].manh;
		cout << setw(30) << a[i].tenmh;
		cout << setw(10) << a[i].soluong;
		cout << setw(15) << a[i].dongia;
		cout << setw(15) << a[i].thanhtien;
		cout << endl;
	}
 } 

void tinh_tt(mathang a[], int n)
{
	for (int i = 0; i < n; i++)
	a[i].thanhtien = a[i].soluong*a[i].dongia;
 } 

void soluongduoi50(mathang a[], int n)
{
	cout << "\n -- Ds mh co so luong duoi 50 -- " << endl;
	tieude();
	for (int i = 0; i < n; i++)
		if(a[i].soluong < 50)
		{
			cout << setw(10) << a[i].manh;
			cout << setw(30) << a[i].tenmh;
			cout << setw(10) << a[i].soluong;
			cout << setw(15) << a[i].dongia;
			cout << setw(15) << a[i].thanhtien;
			cout << endl;
		}
}

int main()
{
	int n;
	mathang mh[50];
	cout << "Nhap so mat hang : "; cin >> n;
	nhapds(mh, n);
	tinh_tt(mh, n);
	inds(mh, n);
	soluongduoi50(mh, n);
	return 0;
}
*/



 // -- Bt : Vt ctrinh tao 1 cau trc kieu hinh tron chua thong tin ; r , s, p 
/*
#define PI 3.14
#define MAX 100 

typedef struct 
{
	float r; // ban kinh
	float s; // dien tich
	float p; // chu vi
} hinh_tron;

void nhap(hinh_tron &X)
{
	cout << "\nNhap vao ban kinh r = ";
	cin >> X.r;
} 

void tinhS(hinh_tron &X)
{
	X.s = PI*X.r*X.r;
}

void tinhP(hinh_tron &X)
{
	X.p = 2*PI*X.r;
}

void swap(hinh_tron &hq, hinh_tron &h2)
{
	hinh_tron tg;
	tg = h1;
	h1 = h2;
	h2 = tg;
}

void SapxeptheoS (hinh_tron ht[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (ht )
}
*/

			// Bai 5 : Danh sach Sinh vien
/*				
typedef struct 
{
	char masv[15];
	char tensv[30];
	float diemlt;
	float diemth;
} 	sinhvien;

void nhapds(sinhvien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap sinh vien thu " << i + 1 << " : " << endl;
		cin.ignore();
		cout << "Ma sinh vien : "; cin.getline(a[i].masv, 15);
		cout << "Ten sinh vien : "; cin.getline(a[i].tensv, 30);
		cout << "Diem ly thuyet : "; cin >> a[i].diemlt;
		cout << "Diem thuc hanh : "; cin >> a[i].diemth;
		cout << endl;
	}
}

void tieude()
{
	cout << setw(15) << "Ma sinh vien ";
	cout << setw(30) << "Ten sinh vien ";
	cout << setw(15) << "Diem LT";
	cout << setw(15) << "Diem TH";
	cout << endl;
}

void inds(sinhvien a[], int n)
{
	cout << "\n--- Danh sach sinh vien --- " << endl;
	tieude();
	for (int i = 0; i < n; i++)
	{
		cout << setw(15) << a[i].masv;
		cout << setw(30) << a[i].tensv;
		cout << setw(15) << a[i].diemlt;
		cout << setw(15) << a[i].diemth;
		cout << endl;
	}
}

void dstruot_lt(sinhvien a[], int n)
{
	cout << "\nDanh sach sv truot ly thuyet" << endl;
	tieude();
	for (int i = 0; i < n; i++)
	if (a[i].diemlt < 5)
	{
		cout << setw(15) << a[i].masv;
		cout << setw(30) << a[i].tensv;
		cout << setw(15) << a[i].diemlt;
		cout << setw(15) << a[i].diemth;
		cout << endl;	
	}
}

void dstruot_th(sinhvien a[], int n)
{
	cout << "\nDanh sach sv truot thuc hanh" << endl;
	tieude();
	for(int i = 0; i < n; i++)
	if (a[i].diemth < 5)
	{
		cout << setw(15) << a[i].masv;
		cout << setw(30) << a[i].tensv;
		cout << setw(15) << a[i].diemlt;
		cout << setw(15) << a[i].diemth;
		cout << endl;
	}
}

int main()
{
	int n;
	sinhvien sv[50];
	cout << "Nhap so luong sinh vien : "; cin >> n;
	nhapds(sv, n);
	inds(sv, n);
	dstruot_lt(sv, n);
	dstruot_th(sv, n);
	return 0;
}

*/

			//Bai 6 : tinh luongt phu cap va tong luong
/*			
 typedef struct
 {
 	char	masv[10];
 	char	tensv[30];
 	float	luong;
 	float	phucap;
	float 	tongluong; 	
 }	nhanvien;
 
void nhapds (nhanvien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap nhan vien thu " << i + 1 << " : " << endl;
		cin.ignore();
		cout << "Ma sinh vien : "; cin.getline(a[i].masv, 10);
		cout << "\nTen nhan vien :"; cin.getline(a[i].masv, 30);
		cout << "\nLuong : "; cin >> a[i].luong; 
	}
}

void tieude();
{
	cout << setw(10) << "Ma nv";
	cout << setw(30) << "Ten nhan vien";
	cout << setw(12) << "Luong";
	cout << setw(12) << "Phu cap";
	cout << setw(15) << "Tong luong";
	cout endl; 
}

void TinhPhuCap(nhanvien a[], int n)
{
	for(int i = 0; i < n; i++)
		a[i].phucap = 0.25 * a[i].luong;
}

void TinhLuongTong (nhanvien a[], int n)

*/


		// Phan so va tu so
/*
typedef struct 
{
	int tu;
	int mau;
} phanso;

int main(){
	phanso a, b, c;
	cout << "\nNhap phan so a" << endl; 
	cout << "Tu  so : "; cin >> a.tu;
	cout << "Mau so : "; cin >> a.mau;
	cout << "\Nhap phan so b" << endl;
	cout << "Tu so  : "; cin >> b.tu;
	cout << "Mau so : "; cin >> b.mau;
	cout << "Phan so thu nhat la " << a.tu << "/" << a.mau << endl;
	cout << "Phan so thu hai  la " << b.tu << "/" << b.mau << endl;
	c.tu = a.tu * b.mau + a.mau * b.tu;
	c.mau =a.mau * b.mau;
	cout << "Tong hai phan so la : " << (float)c.tu/c.mau << endl;
	c.tu = a.tu * b.mau - a.mau * b.tu;
	c.mau = a.mau   * b.mau;
	cout << "Hieu hai phan so la : " << (float)c.tu/c.mau << endl;
	c.tu = a.tu * b.tu;
	c.mau = a.mau * b.mau;
	cout << "Tich hai phan so la : " << (float)c.tu/c.mau << endl;
	c.tu = a.tu * b.mau;
	c.mau = a.mau * b.tu;
	cout << "Thuong hai phan so la : " << (float)c.tu/c.mau << endl;
	return 0; 
} 
*/


		//Bai 2 :  ctrinh quan ly hoc sinh 
/*
typedef struct 
{
	int	ng;
	int th;
	int nam;
} ngaythang;

typedef struct
{
	char		hoten[30];
	ngaythang	ns;
	int 		gt;
	float 		diem;
} sinhvien;

sinhvien lop[3];

void  nhap(sinhvien *p)
{
	cin.ignore();
	cout << "\nHo ten    : "; cin.getline(p -> hoten, 30);
	cout << "\nNgay sinh : "; 
	cin >> (p -> ns).ng >> (p -> ns).th >> (p -> ns).nam;
	cout << "\nGioi tinh : "; cin >> p -> gt;
	cout << "\nDiem      : "; cin >> p -> diem;
}

void nhapds(sinhvien *a)
{
	int sosv = sizeof(lop) / sizeof(sinhvien);
	for (int i = 1; i <= sosv; i++)
		nhap (&a[i]);
}

void in(sinhvien x)
{
	cout << x.hoten << "\t";
	cout << x.ns.ng << "/" << x.ns.th << "/" << x.ns.nam << "\t";
	cout << x.gt << "\t";
	cout << x.diem << endl;
}

void inds(const sinhvien * a)
{
	int sosv = sizeof(lop) / sizeof(sinhvien);
	for (int i = 1; i <= sosv; i++)
		int (a[i);		
}

void sua(sinhvien &r)
{
	int chon;
	do
	{
		cout << "1 : Sua ho tem 	" << endl;
		cout << "2 : Sua ngay sinh	" << endl;
		cout << "3 : Sua gioi tinh	" << endl;
		cout << "4 : Sua diem 		" << endl;
		cout << "0 : Thoi !!!		" << endl;
		cout << "Sua (0/1/2/3/4) ? 	"; cin >> chon;
		cin.ignore();
		switch (chon)
		{
			case 1 : cin.getline(r.hoten, 30);
			break;
			case 2 : cin >> r.ns.ng >> r.ns.th >> r.ns.nam ;
			break;
			case 3 : cin >> r.gt; 
			break;
			case 4 : cin >> r.diem;
			break;
		}
	}
	while (chon);
}

void suads(sinhvien *a)
{
	int n;
	cout << "Chon sinh vien can sua : "; cin >> n;
	cin.ignore();
	sua(a[n]);
}

int main()
{
	sinhvien sv[50];
	     int n;
	cout << "Nhap so sinh vien : "; cin >> n;
	nhapds(sv);
	  inds(sv);
	 suads(sv);
	  inds(sv);
	return;
}
*/

		// BAI 3 : SO PHUC
/*
typedef struct 
{
	float thuc;
	float 	ao;
 } sophuc;
 
sophuc cong(sophuc p, sophuc q)
{
	sophuc kq;
	kq.thuc = p.thuc + q.ao;
	return kq;
}

sophuc tru(sophuc p, sophuc q)
{
	sophuc kq;
	kq.thuc = p.thuc - q.thuc;
	kq.ao	= p.ao 	 - q.ao;
	return kq;
}

void in(sophuc a)
{
	cout << "(" << a.thuc << "," << a.ao << ") " << endl;  
}

int main()
{
	sophuc x, y;
	cout << "Nhap so phuc x " << endl;
	cout << "Phan thuc		"; cin >> x.thuc;
	cout << "Phan ao 		"; cin >> x.ao;
	cout << "Nhap so phuc y " << endl;
	cout << "Phan thu 		"; cin >> y.thuc;
	cout << "Phan ao 		"; cin >> y.ao;
	cout << "x + y = "; in(cong(x,y));
	cout << "x - y = "; in( tru(x,y)); 
	return 0;
}

*/

	// BAI 4 : thong tin ve mot lop sinh vien , sv co diem cao nhat
/*	
typedef struct
{
	int ng;
	int th;
	int nam;
 } ngaythang;
 
 typedef struct
 {
 	char		hoten[30];
 	ngaythang 	ns;
 	int		gt;
 	float 		diem;
 }sinhvien;

sinhvien lop[3];

void nhap(sinhvien *p)
{	
	cout << "\nHo va ten : ";
	cin.ignore();
	cin.getline(p -> hoten, 30);
	cout << "\nNgay sinh : "; 
	cin >> (p -> ns).ng >> (p -> ns).th >> (p -> ns).nam;
	cout << "\nGioi tinh : "; cin >> p -> gt;
	cout << "\nDiem   	 : "; cin >> p -> diem;
}

void nhapds(sinhvien *a)
{
	int sosv = sizeof(lop) / sizeof(sinhvien);
	for (int i = 1; i <= sosv; i++)
		nhap(&a[i]);
}

void in(sinhvien x)
{
	cout << x.hoten << "\t";
	cout << x.ns.ng << "/" << x.ns.th << "/" << x.ns.nam << "\t";
	cout << x.gt    << "\t";
	cout << x.diem  << endl;
}

void inds(const sinhvien * a)
{
	int sosv = sizeof (lop) / sizeof (sinhvien);
	for (int i = 1; i <= sosv; i++)
		in (a[i]);
}

void insvdiemcaonhat (sinhvien a[])
{
	float max;
	int sosv = sizeof (lop) / sizeof (sinhvien);
	max = a[0].diem;
	for (int i = 1; i <= sosv; i++)
		if (max < a[i].diem)
			max = a[i].diem;
	int j = 0;
	cout << "Diem cao nhat lop : " << endl;
	for (int i = 1; i <= sosv; i++)
	{
		if(a[i].diem == max)
		{
			cout << "#" << j  + 1 << endl;
			cout << 	   a[i].hoten << " " << a[i].ns.nam;
			cout << "/" << a[i].ns.th << "/" << a[i].ns.nam;
			cout << " " << a[i].gt 	  << " " << a[i].diem	<< endl;
			
		}
	}
}

int main()
{
	cout << "Nhap danh sach hoc sinh " << endl;
	nhapds(lop);
	inds(lop);
	insvdiemcaonhat(lop);
	return 0;
}
*/

		// Bai 5 :
/*


typedef struct
{
	int 	ID;
	char	hoten[30];
	int 	tuoi;
	float 	hk1, hk2;
	float 	dtb;
} sinhvien;

sinhvien lop[3];

void nhap(sinhvien *p)
{
	cout << "\nID : "; cin >> p -> ID;
	cout << "Ho va ten : ";
	cin.ignore();
	cin.getline(p -> hoten, 30);
	cout << "Tuoi : "; cin >> p -> tuoi;
	cout << "Diem hk 1 : "; cin >> p -> hk1;
	cout << "Diem hk 2 : "; cin >> p -> hk2;
	cout << endl;
}

void nhapds(sinhvien *a)
{
	int sosv = sizeof(lop) / sizeof(sinhvien);
	for (int i = 1; i <= sosv; i++)
		nhap (&a[i]);
}

void tieude()
{
	cout << setw(15) << "ID   	  " << setw(15) << "Ten     ";
	cout << setw(15) << "Tuoi 	  " << setw(15) << "Hoc ky 1";
	cout << setw(15) << "Hoc ky  2" << setw(20) << "Diem trung binh" << endl;
	
}

void in(sinhvien x)
{
	cout << setw(15) << x.ID   << setw(15) << x.hoten;
	cout << setw(15) << x.tuoi << setw(15) << x.hk1;
	cout << setw(15) << x.hk2  << setw(20) << x.dtb << endl;
}

void inds(sinhvien *a)
{
	int sosv = sizeof(lop) / sizeof(sinhvien);
	for (int i = 1; i <= sosv; i++)
		in(a[i]);
}

void tinhdtb(sinhvien a[])
{
	int sosv = sizeof(lop) / sizeof(sinhvien);
	for (int i = 1; i <= sosv; i++)
		a[i].dtb = (a[i].hk1 + 2 * a[i].hk2) / 3;
		cout << setw(30) << "Ho ten sv " << setw(20) << "Diem trung binh " << endl;
		for (int i = 1; i <= sosv; i++)
		cout << setw(30) << a[i].hoten << setw(20) << a[i].dtb << endl;
}

void tongket(sinhvien a[])
{
	int sosv = sizeof (lop) / sizeof (sinhvien);
	float max = a[0].dtb;
	for (int i = 1; i <= sosv; i++)
		if( max < a[i].dtb)
			max = a[i].dtb;
	int j = 0;
	tieude();
	for (int i = 1; i <= sosv; i++)
	{
		if (a[i].dtb == max)
			in(a[i]);
		j++;
	}
}

void tienbo(sinhvien a[])
{
	int sosv = sizeof (lop) / sizeof (sinhvien);
	tieude();
	for (int i = 1; i <= sosv; i++)
		if (a[i].hk1 < a[i].hk2)
			in(a[i]);
}

int main()
{
	nhapds(lop);
	cout << "Danh sach lop da nhap la " << endl;
	tieude();
	inds(lop);
	cout << "Diem trung binh cuoi nam cua ca lop" << "\n\n";
	tinhdtb(lop);
	cout << "Sinh vien co diem tong ket cao nhat \n\n";
	tongket(lop);
	cout << "Danh sach cac sinh vien tien bo \n\n";
	tienbo(lop);
	return 0;
}

*/

			// Bai 6 : Cong Nhan
/*
struct congnhan
{
	char 	hoten[30];
	int 	namsinh;
	int 	giolam;
};

void nhap(congnhan *p)
{
	cin.ignore();
	cout << "Ho ten   : "; cin.getline(p -> hoten, 30);
	cout << "Nam sinh : "; 		cin >> p -> namsinh;
	cout << "Gio lam  : "; 		cin >> p -> giolam;
}

void nhapds (congnhan a[], int n)
{
	for (int i = 1; i <= n; i++)
		nhap(&a[i]);
}

c
void incn_nhanthuong(congnhan a[], int n)
{
	cout << "\t\t ----- Danh sach cong nhan thuong ------ " << endl;
	tieude();
	for(int i = 1; i <= n; i++)
		if(a[i].giolam > 40)
			in(a[i]);
}

int main()
{
	int n;
	cout << "Nhap so cong nhan "; cin >> n;
	congnhan dscn[n];
	nhapds(dscn, n);
	cout << "\t\t\t Danh sach cong nhan " << endl;
	inds(dscn, n);
	incn_nhanthuong(dscn, n);
	return 0;
}
*/


		// Bai 7 : 
/*
typedef struct
{
	int 	msv;
	char	hoten[30];
	int 	ns;
	float 	dtb;
} sinhvien;

sinhvien sv[30];

void nhap(sinhvien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
	cout << "\nMa sinh vien	 : "; cin >> a[i].msv;
	cout << "Ho ten 	  	 : ";
	cin.ignore();
	cin.getline(a[i].hoten , 30);
	cout << "Nam sinh         : "; cin >> a[i].ns;
	cout << "Diem trung binh  : "; cin >> a[i].dtb;
	cout << endl;
	}
	
}

void tieude()
{
	cout <<  "MSV"; 
	cout << setw(15) << "Ho Ten";
	cout << setw(19) << "Nam sinh";
	cout << setw(13) << "DTB";
	cout << endl;
}

void in(sinhvien a[], int n)
{
	tieude();
	for (int i = 0; i < n; i++)
	{
		cout << a[i].msv;
		cout << setw(15) << a[i].hoten;
		cout << setw(19) << a[i].ns;
		cout << setw(13) << a[i].dtb << endl;
	}
}

void swap (sinhvien &s1, sinhvien &s2)
{
	sinhvien tg;
	tg = s1;
	s1 = s2;
	s2 = tg;
}

void sapxep(sinhvien a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i].ns > a[j].ns)
			{
				swap(a[i],a[j]);
			}
		}
	}
}

int main()
{
	int n;
	cout << "Nhap so sinh vien "; cin >> n;
	nhap(sv, n);
	in(sv, n);
	cout << "\n\t\t Danh sach sinh vien giam dan cua tuoi  " << endl;
	sapxep(sv, n);
	in(sv, n);
	return 0;
}
*/












