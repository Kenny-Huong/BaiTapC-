//Bài 1:  Cho lớp độc giả (DocGia) mô tả các đối tượng độc giả. Lớp có thuộc tính:mã, họ, tên, số tháng hiệu lực. Lớp độc giả trẻ (DGTre), lớp độc giả người lớn (DGLon) kế thừa từ lớp độc giả.
// Lớp đọc giả trẻ bổ sung thêm thuộc tính: năm sinh. Lớp đôc giả người lớn bổ sung thêm thuộc tính: nghề nghiệp.
//-   Quản lý danh sách các loại độc giả (cả hai loại). 
//-   Tìm độc giả trẻ em có số tháng hiệu lực <10, độc giả người lớn là giảng viên. 
//-   Tính tổng tiền làm thẻ của tất cả các độc giả. Biết độc giả trẻ em tiền làm thẻ = số tháng hiệu lực * 20000, độc giả người lớn tiền làm thẻ = số tháng hiệu lực * 30000


#include <iostream>
using namespace std;

class DocGia{
	protected:
		int ma;
		string ten;
		int sothang;
	public:
		
		DocGia(int ma = 0, string ten = " ", int sothang = 0)
		{
			this -> ma = ma;
			this -> ten = ten;
			this -> sothang = sothang;
		}
		
		~DocGia()
		{
			
		}
		
		virtual	void nhap()
		{
			cout << "Nhap ma : "; cin >> ma;
			fflush(stdin);
			cout << "Nhap ten : "; getline(cin, ten);
			cout << "Nhap so thang hieu luc : "; cin >> sothang;
		}
		
		virtual void xuat()
		{
			cout << "Ma : " << ma << endl;
			cout << "Ten : " << ten << endl;
			cout << "So thang hieu luc : " << sothang << " thang " << endl;
		}
		
		virtual int find() = 0;
};

class DG_Tre : public DocGia{
	private:
		int ns;
	public:
		void nhap()
		{
			DocGia :: nhap();
			cout << "Nhap nam sinh : "; cin >> ns;
		}
		
		void xuat()
		{
			DocGia :: xuat();
			cout << "Nam sinh : " << ns << endl;
		}
		
		int find() override
		{
			
		}
};

class DG_Gia : public DocGia{
	private:
		string nghenghiep;
	public:
		void nhap()
		{
			DocGia :: nhap();
			fflush(stdin);
			cout << "Nhap nghe nghiep : "; getline(cin, nghenghiep);
		}
		
		void xuat()
		{
			DocGia :: xuat();
			cout << "Nghe Nghiep : " << nghenghiep << endl;			
		}
		
		int find()
		{
			if(nghenghiep == "giang vien")
				return 1;
			return 0;
		
		}
};



int main()
{
		DocGia *d[10];
		int choice, n = 0, j;
			cout << "\n1.Doc Gia Tre \n2.Doc Gia Lon \n3.Stop" << endl;
			while(1)
			{
				cout << "Nhap lua chon : "; cin >> choice;
				if(choice == 1)
					d[n] = new DG_Tre();
				
				if(choice == 2)
					d[n] = new DG_Gia();
			
				if(choice == 3)
					break;
				d[n] -> nhap();	
				n++;
				
			}
		
		
		
			cout <<"\n\nDanh sach doc gia tre em co so thang hieu luc <10:\n";
			for(int j=0; j<n; j++)
			{
				if(d[j]-> find())	
					d[j]->xuat();
			}
		
		
return  0;
}