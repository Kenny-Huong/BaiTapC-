//Xây dựng lớp máy tính MAYTINH gồm các thuộc tính: Mã hàng, tên hãng sản xuất, đơn
//giá, Dung lượng bộ nhớ RAM, trọng lượng và lớp này gồm các hàm thành phần:
//- Hàm khởi tạo với các tham số có giá trị ngầm định.
//- Hàm hủy.
//- Tái định nghĩa toán tử nhập “>>”.
//- Hàm tính tiền vận chuyển. Biết nếu trọng lượng máy tính > 2 (đơn vị tính là kg)
//thì tiền vận chuyển là 100000, nếu trọng lượng máy tính > 1 (đơn vị tính là kg) thì
//tiền vận chuyển là 50000, còn lại là 30000.
//- Tái định nghĩa toán tử xuất “<<”.
//Nhập vào danh sách n máy tính (n nguyên dương nhập từ bàn phím), hiển thị danh sách
//máy tính có dung lượng bộ nhớ RAM bằng 16.
//Nhập vào tên hãng sản xuất là SONY, nếu hãng này chưa có trong danh sách thì chèn
//hãng máy tính này vào đầu danh sách. Nếu có hãy xóa máy tính này khỏi danh sách? 


//void chen (GV *gv, int &n) {
//	char ten[30];
//	cin.ignore();
//	cout << "Nhap ten can tim: ";
//	cin.getline(ten, 31);
//	bool check = false;
//	for(int i = 0; i <n; i++) {
//		if(strcmpi(gv[i].get_ten(), ten) == 0) {
//			check = true;
//			break;
//		}
//	}
//
//	if(check) {
//		for(int i = 0; i <n; i++) {
//			if(strcmpi(gv[i].get_ten(), ten) == 0) {
//				cout << "Giao vien " <<gv[i].get_ten() << " co luong " << gv[i].luongcb() << endl;
//			}
//		}
//	} else {
//		int tuoi;
//		char bc[15];
//		char cn[30];
//		float bl;
//		n++;
//		gv[
#include <iostream>
using namespace std;

class MT{
	private:
		char mh[30], tenhang[30];
		float trongluong, tvc;
		int ram, dg;
	
	public:
	
		MT(char *mh = " ", char *tenhang = "", int dg = 0, float trongluong = 0, int ram = 0, float tvc = 0)
		{
			strcpy(this -> mh, mh);
			strcpy(this -> tenhang, tenhang);
			this -> dg = dg;
			this -> trongluong = trongluong;
			this -> ram = ram;
			this -> tvc = tvc;
		}
	
		~MT()
		{
			;
		}
	
		friend istream& operator >> (istream &is, MT &k)
		{
			fflush(stdin);
			cout << "Nhap ma hang : "; is.getline(k.mh, 30);
			cout << "Nhap ten hang san xuat : "; is.getline(k.tenhang, 30);
			cout << "Nhap don gia : "; is >> k.dg;
			cout << "Nhap dung luong bo nho RAM : "; is >> k.ram;
			cout << "Nhap trong luong : "; is >> k.trongluong;
			
			k.tvc = k.TienVanChuyen();
			
			return is;
		}
		
		double TienVanChuyen()
		{
			if(trongluong > 2)
				return 100000;
			else if(trongluong > 1)
				return 50000;
			else 
				return 30000;
		}
				
		friend ostream& operator << (ostream &os, MT &k)
		{
			os << "\nMa Hang : " << k.mh;
			os << "\nTen hang san xuat : " << k.tenhang;
			os << "\nDon gia : " << k.dg << " VND";
			os << "\nDung luong bo nho RAM : " << k.ram << " GB";
			os << "\nTrong luong : " << k.trongluong << " Kg";
			os << "\nTien van chuyen : " << k.tvc << " VND";
			
			return os;
		}
		
		 bool operator == (double k)
		{ 
			return this -> ram == k;
		}
};

//Nhập vào tên hãng sản xuất là SONY, nếu hãng này chưa có trong danh sách thì chèn
//hãng máy tính này vào đầu danh sách. Nếu có hãy xóa máy tính này khỏi danh sách? 
void nhap_ds(int &n, MT a[])
{
	cout << "Nhap Thong Tin Danh Sach MT " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << "-> Nhap thong tin MT thu " << i + 1 << endl;
		cin >> a[i];
	}
}

void xuat_ds(int &n, MT a[])
{
	for(int i = 0; i < n; i++)
	{
		cout << "\n * Danh Sach MT co dung luong RAM = 16 gb * " << endl;
		if (a[i] == 16)
		{
			cout << a[i];
		}
	}
}

int main()
{
	int n;
	cout << "So luong MT can nhap thong tin : "; cin >> n;
	while(n < 1)
	{
		cout << "Moi nhap lai so luong MT can nhap thong tin (> 1) : "; cin >> n;
	}
	MT a[n];
	nhap_ds(n, a);
	xuat_ds(n, a);
	
	return 0;
}



