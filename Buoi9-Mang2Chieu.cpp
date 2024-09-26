#include <iostream>
#include <math.h>
#define kenny 50
using namespace std;

/*
void input (int b[kenny][kenny], int m, int n){
	for (int i = 0; i < m; i++)
		for (int j = 0; j < m; j++){
			cout << "b [" << i << "] [" << j << "] = "; cin >> b[i][j];
		}
}

			// ---In ra ma tran---
void output (int b[kenny][kenny], int m, int n){
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)
			
			cout << b[i][j] << " ";
			cout << endl;
	}
}
			// ---Cac Pt tren dong le---
void out_line_odd(int b[kenny][kenny], int m, int n){
	for (int i = 0; i < m; i++)
		if (i % 2 == 1){
			for (int j = 0; j < n; j++)
				cout << b[i][j] << "  ";
				cout << endl;
		}
}

			// ---Ma Tran Chuyen Vi---
void ChuyenVi( int b[kenny][kenny], int m, int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
			cout << b[j][i] << "  ";
			cout << endl;
	}
}			

			//---Tinh tong cac phan tu trong mang---
int sum(int b[kenny][kenny], int m, int n){
	int s = 0;
	for (int i = 0; i < m; i ++)
		for (int j = 0; j < n; j++)
				s += b[i][j];
	return s;			
} 
			
			//---Duong cheo chinh---
void Le_Cheo_Chinh( int b[kenny][kenny], int n){
	cout << "Cac phan tu le tren duong cheo chinh la : ";
	for (int i = 0; i < n; i++)
		if (b[i][i] % 2 != 0)
			cout << b[i][i] << "  ";
}
			// ---Duong cheo phu---
void Tong_Cheo_Phu (int b[kenny][kenny], int n){
	int s = 0;
	for (int i = 0; i < n; i++)
		s += b[i][n - i - 1];
		cout << "Tong cac phan tu tren duong cheo phu la : " << s << endl;
}			

int main(){
	int a[kenny][kenny], m , n;
	cout << "Nhap so hang m = "; cin >> m;
	cout << "Nhap so cot n  = "; cin >> n; input(a, m, n);
	cout << "\nMang da nhap la ! " << endl; output(a, m, n);
	cout << "Cac phan tu tren dong le la ! " << endl; ; out_line_odd(a, m, n);
	cout << "Ma tran chuyen vi la !" << endl; ; ChuyenVi (a, m, n);
	cout << "Tong cac phan tu trong ma tran bang = " << sum (a, m, n) << endl;
	Le_Cheo_Chinh (a, n); cout << endl;
	Tong_Cheo_Phu (a, n);
	cout << endl;
	return 0;
}
*/

		//Bai 5  
/*
void input(int b[kenny][kenny], int m, int n){
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << "b[" << i << "] [" << j << "] = "; cin >> b[i][j];
		}
			cout << endl;	
	}
}
void output (int b[kenny][kenny], int m, int n){
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << b[i][j] << "  ";
		}
		cout << endl;
	}
}
void TBC_le(int b[kenny][kenny], int m, int n){
	int  dem = 0; 
	float s = 0, tb = 0;  
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (b[i][j] % 2 != 0 ){
				dem++;
				s += b[i][j];			
			}
		}
	}
	cout << "Trung binh phan tu le trong mang = " << (float)s/dem << endl;
}
bool kt_snt(int x){
	int dem = 0;
	for (int i = 1; i <= x; i++)
		if(x % i == 0)
			dem ++;
	if(dem == 2) return 1;
	return 0;	
} 
void kt_snt(int b[kenny][kenny], int m, int n){
	int dem = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if(kt_snt(b[i][j]))
			dem++;
		}
	}
	cout << "Cac so nguyen to trong mang la " << dem << endl;		
} 
int main(){
	int a[kenny][kenny], m, n; float tb;
	cout << "Nhap vao so hang m : "; cin >> m;
	cout << "Nhap vao so cot  n : "; cin >> n;
	input(a, m, n);
	cout << "Du lieu cua mang " << endl; output(a, m, n);
	TBC_le(a, m, n);
	kt_snt(a, m, n);
	return 0;
}
*/

		//Bai 6 : kiem tra mang co gam toan so le 
/*
void 	input(int b[max][max], int, int);   //nhap mang
void 	output(int b[max][max], int, int);  //xuat mang
void 	kiemtra(int b[max][max], int, int);
//kiem tra mang co gom toan so le khong

int	 main()
{	int a[kenny][kenny], m, n;	
	cout<<"Nhap so hang m = ";cin>>m;
	cout<<"Nhap so cot n = ";cin>>n;	
	input(a,m,n);
	cout<<"Mang da nhap la:"<<endl;
	output(a,m,n);
	kiemtra(a,m,n);
 	return 0;
} 
void	input(int  b[max][max],int m,int n)
{	cout<<"Nhap cac phan tu mang"<<endl;
	for (int i=0;i<m;i++)
  	{	for (int j=0;j<n;j++)
     	{	cout<<"b["<<i<<"]["<<j<<"]= ";
    		cin>>b[i][j];				     
 		}
 		cout<<endl;
  	}
} 
void	output(int  b[max][max],int m,int n)
{	for (int i=0;i<m;i++)
	{	for (int j=0;j<n;j++)
			cout<<setw(6)<<b[i][j];
		cout<<endl;				
  	}
}
void	 kiemtra(int  b[max][max],int m,int n)
{	bool kt = true;
	for (int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			if( b[i][j] % 2 == 0)						
				kt = false;
	if (kt) cout<<"Mang gom toan cac so le!"<<endl;
	else	cout<<"Mang khong gom toan cac so le!"<<endl;
}
*/

			//Bai 8 :
/* 
void input(int  b[kenny][kenny],int m,int n){
	cout<<"Nhap cac phan tu mang"<<endl;
	for (int i = 0; i < m; i++)
  	{	for (int j = 0; j < n; j++)
     	{	cout << "b[" << i << "][" << j <<"]= ";
    		cin >> b[i][j];				     
 		}
 		cout << endl;
  	}
} 
void output(int  b[kenny][kenny],int m,int n){
	for (int i = 0; i < m; i++)
	{	for (int j = 0;j < n; j++)
			cout << b[i][j] << " \t ";
		cout << endl;				
  	}
}
void Dpt(int b[kenny][kenny], int m, int n){
	int dem = 0;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (b[i][j] <= 100 && b[i][j] >= 10)
			dem++;
		}
	}
	cout << "So luong cac phan tu co gia tri trong doan [10,100] la : " << dem;
}
void Xapsep(int b[kenny][kenny], int m, int n){

		for (int j = 0; j < n; j++){
			for (int t = j + 1; t < n; t++){
				if (b[0][j] > b[0][t]){
				float tg = b[0][j];
				 b[0][j] = b[0][t];
				 b[0][t] = tg;
			}			
		}
						
	} 
}
int main(){
	int a[kenny][kenny], m, n; float tb;
	cout << "Nhap vao so hang m : "; cin >> m;
	cout << "Nhap vao so cot  n : "; cin >> n;
	input(a, m, n);
	cout << "Mang da nhap la : " << endl;
	output(a, m, n);
	Dpt(a, m, n);
	Xapsep(a, m, n);
	cout << "\nMang sau khi sao xep la " << endl;
	output(a, m, n);
	return 0;
}
*/
/*
void so_hoan_hao(int b[kenny][kenny], int m, int n){
	cout << "Cac so hoan hao tren duong cheo phu la : "<< endl;
	for (int i = 0; i < m; i++)
		if(KTSHH (b[i][n - i -1]))
			cout << b[i][n - i - 1] << " \t";
			
}
void so_lon_nhat(int b[kenny][kenny], int n){
	int so_lon = b[0][0];
	for (int i = 1; i < n; i++)
		if(b[i][j] > so_lon)
			so_lon = b[i][i];
			cout << "\nSo lon nhat tren duong cheo chinh la " << so_lon << endl;
}
*/

void input(int  b[kenny][kenny],int m,int n){
	cout<<"Nhap cac phan tu mang"<<endl;
	for (int i = 0; i < m; i++)
  	{	for (int j = 0; j < n; j++)
     	{	cout << "b[" << i << "][" << j <<"]= ";
    		cin >> b[i][j];				     
 		}
 		cout << endl;
  	}
} 
void output(int  b[kenny][kenny],int m,int n){
	for (int i = 0; i < m; i++)
	{	for (int j = 0;j < n; j++)
			cout << b[i][j] << " \t ";
		cout << endl;				
  	}
}
void so_hoan_hao(int b[kenny][kenny], int m, int n){
	cout << "Cac so hoan hao tren duong cheo phu la : "<< endl;
	for (int i = 0; i < m; i++)
		if(KTSHH (b[i][n - i - 1])
			cout << b[i][n - i - 1] << " \t";
			
}
void so_lon_nhat(int b[kenny][kenny], int n){
	int so_lon = b[0][0];
	for (int i = 1; i < n; i++)
		if(b[i][j] > so_lon)
			so_lon = b[i][i];
			cout << "\nSo lon nhat tren duong cheo chinh la " << so_lon << endl;
}
int main(){
	int a[kenny][kenny], m, n;
	cout << "Nhap vao hang m : "; cin >> m;
	cout << "Nhap vao cot  n : "; cin >> n;
	input(a, m, n);
	so_hoan_hao(a, m, n);
	so_lon_nhat(a, m, n);
	return 0;
}




























 
