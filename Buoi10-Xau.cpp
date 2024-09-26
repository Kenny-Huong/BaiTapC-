#include <iostream>
#include <string.h>
using namespace std;

			// Dao nguoc Xau khong dung strrev
/*
int main(){
	char s[50];
	int n;
	cout << "Nhap xau : "; cin.getline(s, 50);
	n = strlen(s);
	cout << "\tXau da  nhap  la : " << s << endl;
	cout << "\tXau dao nguoc la : ";
	for (int i = n - 1; i >= 0; i--) cout << s[i];
	cout << endl;
	return 0;
}
*/
			// Dao nguoc Xau dung strdev
/*
int main(){
	char s[50];
	int n, o;
	cout << "Nhap xau : "; cin.getline(s, 50);
	n = strlen(s);
	cout << "Xau da  nhap  la : " << s << endl;
	char* strrev(char*s);
	cout << "Xau dao nguoc la : " << 
	
	return 0;
}
*/

		//Dem so tu tren xau
/*
int main(){
	char s[50];
	int n, d = 1;
	cout << "Nhap xau : "; cin.getline(s, 50);
	n = strlen(s);
	cout << "\nXau da nhap la : " << s << endl;
	for (int i = 0; i < n; i++)
		if (s[i] == ' ') d++; 
	cout << "So tu trong xau la : " << d << endl;
	return 0;
}
*/

		// Dem slg ki tu a, b tren Xau
/*
int main(){
	int n, i, d = 0;
	char s[50];
	cout << "Nhap xau : "; cin.getline(s, 50);
	n = strlen(s);
	for (int i =0; i < n; i++)
		if (toupper (s[i]) == 'A' || toupper (s[i]) == 'B')
		d++;
	cout << "So luong ki tu a, b trong xau la : " << d << endl;
	return 0; 
}
*/

	// Ktra xem xau co doi xung khong
/*
int main(){
	char s[50];
	int n, kt = 1;
	cout << "Nhap vao mot Xau ky tu : "; cin.getline(s, 50);
	n = strlen(s);
	for (int i = 0; i < n; i++)
		if (s[i] != s[n - i - 1])
			kt = 0;
	if (kt == 1)
		cout << "\nXau da nhap doi xung ! " << endl;
	else 
		cout << "\nXau da nhap khong doi xung !" << endl;		
	return 0;
}
*/

	// BAI 5 : In ra Xau in hoa
/*
int main(){
	char s[50];
	int n;
	cout << "Nhap vao Xau chu thuong : "; cin.getline(s, 50);
	n = strlen(s);
	cout << "Xau vua nhap la : " << s << endl;
	cout << "Xau chu hoa  la : " << strupr(s) << endl;
	return 0;
}	
*/

		// BAI 6 : so sanh 2 Xau
/*
int main(){
	char s1[50], s2[50];
	int n;
	cout << "Nhap vao Xau thu nhat : "; cin.getline(s1, 50);
	cout << "Nhap vao Xau thu hai  : "; cin.getline(s2, 50);
	n = strlen(s1); n = strlen(s2);
	cout << "Xau thu nhat la : " << s1 << endl;
	cout << "Xau thu  hai la : " << s2 << endl;
	if (strcmp(s1, s2) == 0)
		cout << "\tHai Xau giong nhau !" << endl;
	else 
		if (strcmp (s1, s2) > 0)
			cout << "\tXau 1 lon hon Xau 2 ! " << endl;
		else 
			cout << "\tXau 1 nho hon Xau 2 1 " << endl;
	return 0;  
}
*/

		// BAI 7 : Tim ky tu tren Xau
/*		
int main(){
	char s[50], ch;
	int n, k = 0;
	cout << "Nhap vao Xau : "; cin.getline(s, 50);
	n = strlen(s);
	cout << "\n\tXau vua nhap la : " << s << endl;
	cout << "\nNhap ky tu can tim "; cin >> ch;
	
	for(int i = 0; i < n; i++)
		if (s[i] == ch)
			k = 1;
	if (k)
		cout << "Ky tu " << ch << " co trong Xau ! " << endl;
	else 
		cout << "Ky tu " << ch << " khong co trong Xau !" << endl;
	return 0;
} 
*/
		
		//BAI 8 : Nhap Xau ho ten chuan, tach ho
/*
int main(){
	string n;
	cout << "Nhap vao Xau ho ten cua ban : "; cin >> n;
	cout << "Ho cua ban la : " << n; 
	return 0;
}
*/
	
		//BAI 9 : Nhap Xau ho ten chuan, tach ten 

int main(){
	char s[50], s1[20];
	int n, i, j = 0;
	cout << "Nhap vao Xau ho ten : "; cin.getline(s, 50);
	n = strlen(s);
	 i = n - 1;
	
	cout << "Xau ban vua nhap la : " << s << endl;
	while (s[i] != ' '){
			s1[j] = s[i];
			j--;
			j++;
	}
	for (int k = j - 1; k >= 0; k--) 
		cout << "Tach Ten ta duoc " << s1[k];
	return 0;
}








 
