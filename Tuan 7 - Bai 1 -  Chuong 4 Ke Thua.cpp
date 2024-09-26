#include <iostream>
#include <iomanip>
using namespace std;

void tieu_de(){
	cout << "| STT  |     Ho Va Ten      |     Nam Sinh   |    So Bao Danh    |  Toan  |  Hoa   |  Ly  | Gpa  |\n ";
}

class Nguoi{
	private:
		string name;
		int nam;
	public:
		nguoi(){
			name = " ";
			nam  = 0;
		}
		void import(){
			cin.ignore();
			cout << "Nhap ho va ten : "; getline(cin, name);
			cout << "Nhap nam sinh  : "; cin >> nam;
		}
		void display(){
			cout << setw(25) << name << setw(10) << nam;
		}	
};

class SV : public Nguoi{
	private:
		string sbd;
		float toan, ly, hoa, gpa;
	public:
		SV() : Nguoi(){
			sbd = " ";
			toan = ly = hoa = 0.0;
		}
		
		void import(){
			SV::import();
			cin.ignore();
			cout << "Nhap so bao danh : "; getline(cin, sbd);
			cout << "Nhap diem   toan : "; cin >> toan;
			cout << "Nhap diem  hoa : "; cin >> hoa;
			cout << "Nhap diem ly : "; cin >> ly;
			
			gpa = (toan + hoa + ly ) / 3;
		}
		
		void display(){
			Nguoi :: display();
			cout << setw(15) << sbd << setw(5) << toan << setw(5) << ly << setw(5) << hoa << setw(5) << gpa << endl;
		}
		
		void sort(SV a[], int &n){
			for(int i = 0; i < n; i++)
				for(int j = i + 1; j < n; j++)
					if(a[i].gpa > a[j].gpa)
						swap(a[i], a[j]);
		}
		
		void found_sbd(SV a[], int n){
			cout << "\nNhap sbd cua sinh vien ban can tim : "; 
			string tmp;
			getline(cin, tmp);
			for (int i = 0; i < n; i++){
				if(a[i].sbd == tmp){
					cout << "[+]Co sinh vien ban can tim ! \n";
					tieu_de();
					a[i].display();
					return;
				}
			}
			cout << "\n [+]Khong co sinh vien co sbd ban can tim \n";
		}
		
		void cnt(SV a[], int n){
			float s = 0;
			for (int i = i; i < n; i++)
				if(a[i].gpa >= 5.0)
					++s;
			cout << "\n Co " << (s/n)*100 << "% sinh vien dat yeu cau " << endl;
		}
		
		void menu(SV a[], int &n){
			cout << "______Menu______"
				 << "1. Nhap thong tin cho danh sach n sinh vien " << endl
				 << "2. Xuat danh sach thong tin sinh vien " << endl
				 << "3. Tim kiem sinh vien co trong danh sach theo so bao danh " << endl
				 << "4. Tinh so phan tram sinh vien dat trong danh sach " << endl
				 << "0. Thoat " << endl
				 << " Vui long Nhap Lua Chon Cua Ban : ";
				 int lc; cin >> lc;
			switch(lc){
				case 1:
					//import_list(a, n); 
					break;
				case 2:
					a[n].show_list(a, n);
					break;
				case 3:
					a[n].found_sbd(a, n);
					break;
				case 4:
					a[n].cnt(a, n);
				case 0:
					return;
					break;
				
				default:
					cout << "Khong co lua chon nay trong Menu ! Vui long nhap lai : ";
			}
			a[n].menu(a, n);
		}
		
};

void import_list(SV a[], int &n){
	cout << "\nNhap danh sach " << n << "sinh vien \n";
	for (int i = 0; i < n; i++){
		cout<<"[+]Nhap thong tin cua sinh vien thu "<<i+1<<endl;
				a[i].import();
				for(int x=0;x<i;x++)
				{
					while(a[i].sbd == a[x].sbd)
					{
						cout<<"[+]Da co sinh vien su dung so bao danh nay! ,nhap lai sbd: ";
						getline(cin,a[i].sbd);
					}
				}
			}
	}
}

void show_list(SV a[], int n){
	a[n].sort(a, n);
	cout << "\n\t Xuat danh sach " << n << " sinh vien \n";
	tieu_de();
	for( int i = 0; i < n; i++){
		a[i].display();
	}
}

int main(){
	int n;
	cout<<"Nhap so luong sinh vien co trong danh sach: ";
	cin>>n;
	while(n<1)
	{
		cout<<"Nhap lai so sinh vien co trong danh sach: ";
		cin>>n; 
	} 
	SV a[n];
	a[n].menu(a,n); 
}















