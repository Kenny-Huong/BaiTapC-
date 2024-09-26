#include <iostream>
#include <iomanip>
#define MAX 1000
using namespace std;

			//Bai 1

int main(){
	int a[100];
	int i, n;
	cout << "Nhap so phan tu cua mang : " ; cin >> n;
	for (int i = 0; i < n; i++){
		cout << "a [" << i << "] = ";
		cin >> a[i];
	}
	cout << "Hien thi gia tri cua mang \n";
	for(i = 0; i < n; i++)
		cout << a[i] << ';' << " ";
		cout << endl;
		return 0;
}
	
			//Bai 2	
/*
void input(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << "b[" << i << "] = "; cin >> b[i];  
	}
}
void output(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << b[i] << ';' << " ";
	}
}			
void sapxep(int b[], int m){
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
			if (b[i] > b[j]){
				int tg = b[i];
			      b[i] = b[j];
			      b[j] = tg;
			}
}

int main(){
	int a[100], n;
	cout << "n = "; cin >> n;
	input(a, n);
	cout << "/n Mang truoc khi sap xep la : " << endl;
	output(a, n);
	sapxep(a, n);
	cout << "\nMnag sau khi sap xep la : " << endl;
	output(a, n);
	cout << endl;
	return 0;
}	
*/	
	
			//Bai 3	
/*
void input(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << "b[" << i << "] = " ; cin >> b[i];
	}	
}	
void tim_min(int b[], int m){
	min = b[0]; k = 0;
	for(int i = 1; i < m; i++)
		if(b[i] < min){
			min = b[i];
			  k = i;			  
		}
	cout << "\nSo be nhat la " << min << " tai vi tri : " << k << endl;
	
}	
int main (){
	int a[100], n;
	cout << "Nhap so phan tu mang n = ";
	cin >> n;
	input(a, n);
	tim_min(a, n);
	return 0;
}
*/

				//BTTG Bai 5: Vt ctrinh nhap n so va in ra theo tt ngc lai
				
/*						
using namespace std;
int day_nguyen[10];
void nhap(int b[],int m)
{
	for(int i=0;i<m;i++)
	{
		cout<<"a["<<i<<"] =";
		cin>>b[i]; cout<<endl;
	}
}
void xuat(int b[],int m)
{
	for(int i=m-1;i>=0;i--)
		cout<<b[i]<<"\t";
}
int main()
{
	int a[10],n;
	cout<<"so phan tu trong day:"; cin>>n;
	nhap(a,n);
	cout<<"day sau khi dao nguoc la:"<<endl;
	xuat(a,n);
	return 0;
}
*/	


		//Bai 7 xoa so thu k trong n so vua nhap. in ra n - 1 so con lai
/*
void input(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << "b[" << i << "] = "; cin >> b[i];
	}
}	
void output(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << b[i] << " \t ";
	}
}
int main(){
	int a[100], n, k;
	cout << "Nhap so phan tu mang n = "; cin >> n ;
	input(a, n);
	cout << "Nhap so k : "; cin >> k;
	for (int i = k; i < n; i++)
		a[i] = a[i + 1];
	cout << "Mang sau khi xoa la : " << endl;
	output (a, n);
	return 0;
}	
*/

		//Bai 8 : In ra man hinh cac gia tri khac nhau cua day
/*
void Nhap(int a[] , int &n){
	for(int i = 0 ; i < n ; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void SapXep(int a[] , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(a[i]>a[j]){
				int tg = a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
}
void ktra(int a[] , int n){   
   
	for(int i = 0; i < n  ; i++ ){
		if(a[i] != a[i+1])	{
				cout<<a[i]<<"\t";
			}
	}
}
main(){
	int a[100];
	int n;
	cout<<"Nhap n : ";
	cin>>n;
	cout<<"\n\tNHAP VAO MANG CO "<< n <<" PHAN TU"<<endl;
	Nhap(a,n);
	SapXep(a,n);
	cout<<"\n\tNHUNG  SO KHAC NHAU TRONG DAY LA "<<endl;
	ktra(a,n);
	cout<<endl;
}
*/

		//Bai 9 : tim so lon nha trong cac so vua nhap la so may 	
	
	
		//Bai 10 : cho day sx tang dan. chen them va day van tang dan
/*
void input(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << "b[" << i << "] = "; cin >> b[i];
		
	}
} 
void output( int b[], int m){
		for (int i = 0; i < m; i++)
			cout << b[i] << "\t";
			
}
void insert(int a[], int n, int x){
	int pos = n;
	while ((pos > 0) && (a[pos-1] > x)){
		a[pos] = a[pos - 1];
		pos --;
	}
	a[pos] = x;
}	
void sapxep(int b[], int m){
	for (int i = 0; i < m -1; i++)
		for (int j = i + 1; j < m; j++)
			if( b[i] > b[j]){
				int tg = b[i];
					b[i] = b[j];
					b[j] = tg;
			}
}
int main(){
	int a[100], n, x;
	cout << "Nhap so phan tu trong mang n = "; cin >> n;
	input (a, n);
	sapxep(a, n);
	cout << "Nhap phan tu can them : "; cin >> x;
	insert (a, n, x);
	output (a, n);
	return 0;
}	
*/
	
			//Bai 11  Tinh tong va Tbc cua day
/*			
void input(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << "b[" << i << "] = "; cin >> b[i];
		
	}
} 
void output( int b[], int m){
		for (int i = 0; i < m; i++)
			cout << b[i] << "\t";
			
}	
void TinhTBC( int b[], int m){
	int s = 0;
	for (int i = 0; i < m; i++)
	s += b[i];
	cout << "Tong day la : " 	<< s 			<< endl;
	cout << "TBC day la : "    	<< (float)s/m 	<< endl;

}
int main(){
	int a[100], n;
	cout << "Nhap so phan tu mang n = ";
	cin >> n;
	input(a, n);
	TinhTBC(a, n);
	return 0;
}	
*/

		//Bai 12 : in ra mang dam dan . in ra trc va sau khi thay doi
/*
void input(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << "b[" << i << "] = "; cin >> b[i];
		
	}
} 
void output( int b[], int m){
		for (int i = 0; i < m; i++)
			cout << b[i] << "  ";		
}	
void sapxep(int b[], int m){
	for (int i = 0; i < m - 1; i++)
		for (int j = i + 1; j < m; j++)
			if (b[i] < b[j]){
				int tg = b[i];
					b[i] = b[j];
					b[j] = tg;
			}
}	
int main(){
	int a[1000], n;
	cout << "Nhap so phan tu mang n = "; cin >> n;	input(a, n);
	cout << "Mang truoc khi sap xep la : ";			output(a, n);
	sapxep(a, n);
	cout << "\nMang sau khi sap xep la   : "		;output(a, n);
	return 0;
}	
*/
	
				//Bai13: xd phan tu x can tim va chi ra vi tri
/*			
void input(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << "b[" << i << "] = "; cin >> b[i];
		
	}
} 
void output( int b[], int m){
		for (int i = 0; i < m; i++)
			cout << b[i] << "  ";		
}
	
void TimKiem(int b[], int m, int x){
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (b[i] == x){
			dem++;
			cout << "b[" << i << "] "<< " , ";
		}
	if(dem == 0)
		cout << " Khong tim thay ! "<< endl;
			
}
int main(){
	int a[100], n, x;
	cout << "Nhap so phan tu mang : "; cin >> n; input(a, n);
	cout << "Nhap gia tri can tim : "; cin >> x;
	TimKiem(a, n, x);
	return 0;
}	
*/	

			 //Bai 14 : Tim va in ra cac so hoan hao 
/*
void input(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << "b[" << i << "] = "; cin >> b[i];		
	}
} 
void output( int b[], int m){
		for (int i = 0; i < m; i++)
			cout << b[i] << "  ";		
}
int KTSHH (int x){
	int tong = 0;
	for (int i = 1; i < x ; i++)
		if(x % i == 0)
		tong = tong + i;
	if (tong == x)	
		return 1;
return 0;	
}
int main(){
	int a[MAX], n;
	cout << "Nhap so  phan tu  trong  mang : "; cin >> n; input(a, n);
	cout << "Cac so hoan hao trong mang la : ";
	for(int i = 0; i < n; i++)
	if(KTSHH(a[i]) == 1)
		cout << a[i] << " , ";
	cout << endl;
return 0;
}	
*/

			//Bai 15 : Tim so nguyen so trong mang
/*			  
void input(int b[], int m){
	for (int i = 0; i < m; i++){
		cout << "b[" << i << "] = "; cin >> b[i];		
	}
} 
void output( int b[], int m){
		for (int i = 0; i < m; i++)
			cout << b[i] << "  ";		
}	
int KTSNT(int x){
	int D = 0;
	for (int i = 1; i <= x; i++)
		if(x % i == 0)
			D++;
	if(D == 2)	
		return 1;
return 0;
}
int main(){
	int a[MAX], n;
	cout << "Nhap vao so phan tu trong mang : "; cin >> n; input(a, n);
	cout << "Cac so nguyen to co trong mang : ";
		for (int i = 0; i < n; i++)
			if(KTSNT(a[i]) == 1)
				cout << a[i] << " , ";
	cout << endl;
return 0;
}
*/	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
