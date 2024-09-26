//Bài 2: Cho lớp người (Nguoi) mô tả các đối tượng người. Lớp có thuộc tính: họ và tên. Lớp sinh viên (Sinhvien), 
//lớp giảng viên (Giangvien) kế thừa từ lớp người. Lớp sinh viên bổ sung thêm thuộc tính: điểm thi. Lớp giảng viên bổ sung thêm thuộc tính: số bài báo. 
//- Tạo danh sách các đối tượng sinh viên và giảng viên (danh sách chứa hai loại đối tượng). 
//- Hiển thị danh sách đã  nhập. 
//- Tìm đối tượng được thưởng. Biết sinh viên được thưởng nếu điểm thi lớn hơn 8, giảng viên được thưởng nếu số bài báo lớn hơn 5.


#include <iostream>
using namespace std;

class Nguoi{
	protected:
		string ht;
	public:
		Nguoi(string ht = " ")
		{
			this -> ht = ht;
		}
		
		virtual void nhap()
		{
			fflush(stdin);
			cout << "Nhap ho va ten : "; getline(cin, ht);
		}
		
		virtual void xuat()
		{
			cout << "Ho va ten : " << ht << endl;
		}
		
		virtual int thuong() = 0;
};

class SinhVien : public Nguoi{
	private:
		float diem;
	public:
		void nhap()
		{
			Nguoi :: nhap();
			cout << "Nhap diem thi : "; cin >> diem;
		}
		
		void xuat()
		{
			Nguoi :: xuat();
			cout << "Diem thi : " << diem << endl;
		}
		
		int thuong()
		{
			return(diem > 8 ? 1 : 0);
		}
};

class GiangVien : public Nguoi{
	private:
		int sobaibao;
	public:
		void nhap()
		{
			Nguoi :: nhap();
			cout << "Nhap so bai bao : "; cin >> sobaibao;
		}
		
		void xuat()
		{
			Nguoi :: xuat();
			cout << "So bai bao : " << sobaibao << endl;
		}
		
		int thuong()
		{
			return(sobaibao > 5 ? 1 : 0);
		}
};

int main()
{
	Nguoi *a[10];
	int chon, n = 0;
	cout << "\n1.Nhap Sinh Vien \n2.Nhap Giang Vien \n3.Stop \n";
	
	while(1)
	{
		cout << "Chon : "; cin >> chon;
		if(chon == 1)
			a[n] = new SinhVien();
		if(chon == 2)
			a[n] = new GiangVien();
		if(chon == 3)
			break;
		a[n]-> nhap();
		n++;
	}
	cout << "Danh sach doi tuong duoc Thuong (diemthi > 8 , sobaibao > 5)" << endl;
	for(int i = 0; i < n; i++)
	{
		if(a[i] -> thuong());
		a[i] -> xuat();
	}
	cout << endl;

return 0;
	
	
}