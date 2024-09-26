#include <iostream>
#include <iomanip>
using namespace std;

void tieu_de(){
	cout<<"|   ma sp  |      ten san pham       |  c.dai   |  c.rong  |dien tich |\n"; 
} 

class san_pham{
	private:
		string ma, name;
		int nam_sx;
	public:
		san_pham(){
			ma = name = " ";
			nam_sx = 0;
		}
		
		void import(){
			cin.ignore();
			cout << "\nNhap ma san pham  : "; getline(cin, ma);
			cout << "\nNhap ten san pham : "; getline(cin, name);
			cout << "\nNhap nam san xuat : "; cin >> nam_sx;
		}
		
		void display(){
			cout << setw(10) << ma << setw(25) << name << setw(10) << nam_sx << endl; 
		}
};
	
class tivi : public san_pham{
	float d, r, s;
	public:
		tivi(){
			r = d = s = 0.0;
		}
		
		friend istream& operator >> (istream& in, tivi tmp){
			cout << "Nhap chieu dai : "; in >> tmp.d;
			cout << "Nhap chieu rong : "; in >> tmp.r;
			tmp.s = tmp.r * tmp.d;
			return in;
		} 
		friend ostream& operator << (ostream& out, tivi tmp){
			tmp.san_pham :: display();
			out << setw(10) << tmp.r << setw(10) << tmp.d << setw(10) << tmp.s << endl; 
		}
		
		void import_list(tivi a[], int &n){
			cout << "Nhap danh sach " << n << " tivi trong danh sach \n";
			for(int i = 0; i < n; i++){
				cout << "\n Nhap thong tin cua tivi thu " << i + 1 << endl;
				a[i].import();
			}
		}
		
		void show_list(tivi a[], int  n){
			cout << "\nXuat danh sach " << n << " tivi trong danh sach \n";
			for (int i = 0; i < n; i++){
				cout << "|" << setw(5) << i;
				a[i].display();
				
			}
		}
		
		void sort (tivi a[], int &n){
			for (int i = 0; i < n; i++)
				for (int j = i + 1; j < n; j++)
					if (a[i].s > a[j].s)
						swap(a[i], a[j]);
			cout << "\n Da sap xep thanh cong ! " << endl;
		}
};

int main(){
	int n;
	cout << "Nhap so luong tivi co trong danh sach : "; cin >> n;
	while(n<1)
	{
		cout<<"\t[+]Nhap lai so luong phan tu: ";cin>>n; 
	} 
	tivi a[n];
	a[n].import_list(a,n);
	a[n].show_list(a,n);
	a[n].sort(a,n);
	a[n].show_list(a,n); 
	return 0;

}















