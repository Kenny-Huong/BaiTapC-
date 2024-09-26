#include <iostream>
#include <iomanip> 
#include <fstream>
using namespace std;

/*
const int size = 10;

int main()
{
	fstream f;
	int a[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
		b[size];
	f.open ("a.dat", ios::out | ios::binary);
	if(!f)
	{
		cout << "Khong the tao duoc tep tin " << f << endl;
		exit(1);
	}
	f.write((char*)(a), sizeof(a)); //ghi du lieu vao tep
	f.close();
	f.open("a.dat", ios::in | ios::binary);
	if(!f)
	{
		cout << "Khong the mo tep tin" << f << endl;
		exit(1);
	}
	f.read((char*)(b), sizeof(b));	//doc du lieu tu tep
	for (int i = 0; i < size; i++)
		cout << b[i] << "\t";
	cout << endl;
	f.close();
 return 0;
}
*/
	
	// Bai 1 : ktra si chan hay le roi luu kq vao tep
/*
int main()
{
	int n;
	fstream f;
	f.open("output.txt", ios::out); // Mo tep de ghi
	if(!f)
	{
		cout << "Khong tao duoc tep !" << endl;
		return -1;
	}
	cout << "Nhap n :"; cin >> n;
	if (n % 2 == 0)
		f << n << " la so chan" << endl;
	else 
		f << n << " la so le" << endl;
		cout << "\n Da ghi tep roi nha anh !!!!!" << endl;
return 0;
 } 
*/ 


		// Bai 2 : tin UCLN , kq ghi luu vao tep "luu.txt"
		
/*
int UCLN(int m, int n)
{
	while (m != n)
		if(m > n)
			m = m - n;
		else 
			n = n - m;
	return m;
}

void doctep(char tentep[], int &m, int &n)
{
	fstream f1(tentep, ios::in);
	if (!f1)
	{
		cout << "Khong the mo duoc tep" << f1 << endl;
		exit(1);
	}
	f1 >> m >> n;
	f1.close();
}

void ghitep(char tentep[], int &m, int &n)
{
	fstream f2(tentep, ios::out);
	if (!f2)
	{
		cout << "Khong the tao duoc tep" << f2 << endl;
		exit(1);
	}
	f2 << "\n" << " UCLN = " << UCLN(m, n);
}

int main()
{
	int n, m;
	cout << "\n Nhap ten tep can doc du lieu : "; cin.getline(f, 30);
	doctep(f, m, n);
	cout << "\n Nhap ten tep ghi du lieu : "; cin.getline(f, 30);
	ghitep(f, m, n);
	return 0;
}

*/
			// Bai 3 : in so chan tu 1 - 100 vao tep cb "so_chan.txt
/*
void GhiSoChan(ofstream &f1)
{
	int dem = 0;
	f1 << "Day so chan tu 1 -> 100 \n";
	for (int a = 1; a <= 100; a++)
	{
		if (a % 2 == 0)
		{
			dem ++;
			f1 << a;
		}
		if (dem % 10 == 0)
			f1 << "\n";
		if (dem % 10 != 0)
			f1 << "\t";
	}
	cout << "Da ghi xong tep ! ";
}

int main ()
{
	ofstream f("so_chan.txt");
	if(!f)
	{
		cout << "Khong the tao tep" << endl;
		return -1;
	}
	GhiSoChan(f);
	f.close();
	return 0;
}
*/
/*
typedef struct
{
	char	manv[10];
	char 	ten[30];
	char	sdt[12];
	float 	hesoluong;
	float 	luongthang;
	int 	luongcb;
	float	phucap;
	double	thunhap;
} nhanvien;

void nhap_1nv(nhanvien 	*x)
{
	cin.ignore();
	cout << "Nhap ma nhan vien  : "; cin.getline(x -> manv, 10);
	cout << "Nhap ten nhan vien : "; cin.getline(x -> ten , 30);
	cout << "Nhap so dien thoai : "; cin.getline(x -> sdt , 12);
	cout << "Nhap luong co ban cua nv  : "; cin >> x -> luongcb;
	cout << "Nhap phu cap cua nv :"       ; cin >> x -> phucap;
	cout << "Nhap he so luong cua nv :"   ; cin >> x -> hesoluong;
}

void nhap_ds(nhanvien a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin nhan vien thu : " << i + 1 << endl;
		nhap_1nv(&a[i]);
	}

}

void tieude()
{
	cout<<setw(15)<<"Ma nhan vien"<<"|";
	cout<<setw(20)<<"Ten nhan vien"<<"|";
	cout<<setw(15)<<"So dien thoai"<<"|";
	cout<<setw(15)<<"He so luong"<<"|";
	cout<<setw(15)<<"Luong thang"<<"|";
	cout<<setw(15)<<"Luong Co Ban"<<"|";
	cout<<setw(15)<<"Phu Cap"<<"|";
	cout<<setw(15)<<"Thu nhap"<<"|"<<endl;
}

void xuat_nv(nhanvien a[], int n)
{
	out<<"-------------- DANH SACH NHAN VIEN -----------------"<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------------------------------------"<<endl;
tieude();
for (int i=0; i<n; i++)
{
 	cout<<setw(15)<<a[i].manv<<"|";
	cout<<setw(20)<<a[i].ten<<"|";
	cout<<setw(15)<<a[i].sdt<<"|";
	cout<<setw(15)<<a[i].hesoluong<<"|";
	cout<<setw(15)<<a[i].luongthang<<"|";
	cout<<setw(15)<<a[i].luongcb<<"|";
	cout<<setw(15)<<a[i].phucap<<"|";
	cout<<setw(15)<<a[i].thunhap<<"|"<<endl;
}
cout<<"---------------------------------------------------------------------------------------------------------------------------------------"<<endl;

}


void tinh_luong_thang(nhanvien a[], int n)
{
	for(int i=0; i<n; i++)
	a[i].luongthang = a[i].luongcb*a[i].hesoluong ;
}

void tinh_thu_nhap(nhanvien a[], int n)
{
	for(int i=0; i<n; i++)
	a[i].thunhap = (double)a[i].luongcb+a[i].phucap;
}

void tntangdan(nhanvien a[], int n)
{
	for (int i=0; i<n-1; i++)
	for (int j=i+1; j<n; j++)
	if(a[i].thunhap > a[j].thunhap)
{ nhanvien tg = a[i];
	a[i] = a[j];
	a[j] = tg;
}
xuat_nv(a,n);
}

int nhan_vien_luong_cao_nhat(nhanvien a[],int n)
{ 
	float max=a[0].thunhap;
	int vitri=0;
	for(int i=1;i<n;i++)
		if(max < a[i].thunhap)
		{
		 max = a[i].thunhap;
		vitri =i;
		}
		
	cout<<"DANH SACH NHAN THU NHAP CAO NHAT"<<endl;
	tieude();
	cout<<"-------------------------------"<<endl;
	for(int i=0;i<n;i++)
	if(a[i].thunhap == max)
	{
	cout<<setw(15)<<a[i].manv<<"|";
cout<<setw(20)<<a[i].ten<<"|";
cout<<setw(15)<<a[i].sdt<<"|";
cout<<setw(15)<<a[i].hesoluong<<"|";
cout<<setw(15)<<a[i].luongthang<<"|";
cout<<setw(15)<<a[i].luongcb<<"|";
cout<<setw(15)<<a[i].phucap<<"|";
cout<<setw(15)<<a[i].thunhap<<"|"<<endl;
}
cout<<"------------------------------"<<endl;
}

}

*/

		// Bai 5 : ghi thong tin so le pham vi tu 1 -> 100 vao "so_le.txt"
/*
void ghi(ofstream &file)
{
	int dem = 0;
	file << "Day so le tu 1 -> 100 \n";
	
	for (int a = 1; a <= 100; a++)
	{
		if (a % 2 != 0)
		{
			dem ++;
			file << a;
		}
		if (dem % 10 == 0)
			file << "\n";
		if (dem %  10 != 0)
			file << "\t";
	}
	cout << "Da ghi tep thanh cong ! " << endl;
 } 

int main()
{
	ofstream f("so_le.txt");
	if (!f)
	{
		cout << "Khong the mo tep";
		return -1;
	}
	ghi(f);
	f.close();
	return 0;
}
*/

		//Bai 6 : tim SLN SNN trong tep "in6.txt" roi ghi vao "out6.txt"
/*
void doctep (char tentep[], int &x, int &y, int &z)
{
	fstream f(tentep, ios :: in);
	if(!f)
	{
		cout << "Khong the mo duoc tep tin" << f << endl;
		exit(1);
	}
	f >> x >> y >> z;
	f.close();
}

int max(int a, int b, int c)
{
	int m = a;
	if (m < b) m = b;
	if (m < c) m = c;
	return m;
}

int min(int a, int b, int c)
{
	int m = a;
	if (m > b) m = b;
	if (m > c) m = c;
	return m;
}

void ghitep(char tentep[], int &x, int &y, int &z)
{
	fstream f1(tentep, ios :: out);
	if (!f1)
	{
		cout << "Khong tao duoc tep" << f1 << endl;
		exit (1);
	}
	f1 << "\n" << "So lon nhat trong 3 so la : " << max(x, y, z);
	f1 << "\n" << "So nho nhat trong 3 so la : " << min(x, y, z);
	cout << "Da ghi xong tep ! " << endl;
}

int main()
{
	char 	f[30];
	int 	a, b, c;
	cout << "Nhap ten tep doc du lieu : ";
	cin.getline(f, 30);
	doctep(f, a, b, c);
	cout << "\nNhap ten tep ghi du lieu : ";
	cin.getline(f, 30); 
	ghitep(f, a, b, c);
	return 0;
}
*/

//c2
/*
int max(int a, int b, int c)
{
	int m = a;
	if (m < b) m = b;
	if (m < c) m = c;
	return m;
}

int min(int a, int b, int c)
{
	int m = a;
	if (m > b) m = b;
	if (m > c) m = c;
	return m;
}
	
int main()
{
	int a, b, c;
	ifstream f("in6.txt", ios::in);
	if (!f)
	{
		cout << "Khng mo duoc tep ! " << endl;
		exit(1);
	}
	
	f >> a >> b >> c;
	f.close();
	ofstream f1("in6.txt", ios::app); // ios::app ghi vao cuoi tep
	f1 << "\nSo lon nhat trong 3 so la : " << max(a, b, c) << endl;
	f1 << "\nSo nho nhat trong 3 so la : " << min(a, b, c) << endl;
	f.close();
	return 0;
}
*/

 	//Bai 9 : 

void snt(int a[], int n)
	for (int i = 0; i < n; i++)
	{
		
	 } 










































