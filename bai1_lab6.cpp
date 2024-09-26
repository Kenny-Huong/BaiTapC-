#include<iostream>
#include<string>
using namespace std;
class DocGia{
	protected: 
		string ma, ho, ten;
		int so_thang_hl;
	public:
		virtual void nhap()
		{
			fflush(stdin);
			cout<<"\nNhap ma: ";
			getline(cin,ma);
			
			cout<<"\nNhap ho: ";
			getline(cin,ho);
			
			cout<<"\nNhap ten: ";
			getline(cin,ten);
			
			cout<<"\nNhap so thang hieu luc: ";
			cin>>so_thang_hl;
		}	
		virtual void xuat()
		{
			cout<<"\nMa cua doc gia: "<<ma;
			cout<<"\nHo cua doc gia: "<<ho;
			cout<<"\nTen cua doc gia: "<<ten;
			cout<<"\nSo thnag hieu luc: "<<so_thang_hl;
		}
		virtual double ttien()=0;
		virtual int Tim() = 0;
};
class DGTre : public DocGia{
	private:
		int ns;
	public:
		void nhap()
		{
			DocGia::nhap();
			
			cout<<"\nNhap nam sinh: ";
			cin>>ns;
		} 
		void xuat()
		{
			DocGia::xuat();
			
			cout<<"\nNam sinh cua doc gia: "<<ns;
		}
		double ttien()
		{
			return so_thang_hl*20000;
		}
		int Tim()
		{
			if(so_thang_hl<10)
				return 1;
			return 0;
		}
};
class DGLon: public DocGia{
	private:
		string nn;
	public:
		void nhap()
		{
			DocGia::nhap();
			
			fflush(stdin);
			cout<<"\nNhap nghe nghiep: ";
			getline(cin,nn);
		}
		void xuat()
		{
			DocGia::xuat();
			
			cout<<"\nNghe nghiep cua doc gia la: "<<nn;
		}
		double ttien()
		{
			return so_thang_hl*30000;
		}
		int Tim()
		{
			if(nn=="Giang Vien"&&so_thang_hl>20)
				return 1;
			return 0;
		}
};
class QLDG{
	public: 
		DocGia*d[30];
		int n;
		void nhap()
		{
			cout<<"\n1.Nhap doc gia tre em"
				<<"\n2.Nhap doc gia nguoi lon"
				<<"\n3.Stop";
			int chon, i=0;
			float s=0;
			while(1){
				cout<<"\nNhap lua chon: ";
				cin>>chon;
				
				if (chon == 1)
					d[i] = new DGTre();
				else if(chon == 2)
					d[i] = new DGLon();
				else if(chon == 1)
					break;
				d[i]->nhap();
				s += d[i]->ttien();
				i++;
				n=i;
			}
			cout <<"\n\tTong tien lam the la: " << s;
		}
		void find()
		{
			cout <<"\n\nDanh sach doc giaq tre em co so thang hieu luc <10:\n";
			for(int j=0; j<n; j++)
			{
				if(d[j]->Tim() == 1 )
					d[j]->xuat();
			}
		}
};
int main()
{
	QLDG a;
	a.nhap();
	a.find();
	cout << endl;
	return 0;
}