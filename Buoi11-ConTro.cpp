#include <iostream>
#include <math.h>
#include <conio.h> // Ho tro ham thao tac man hinh
#include <string.h> 
#include <iomanip>
using namespace std;

/*
int main(){
	int n, *ptr;
	cout << "Nhap so phan tu : "; cin >> n;
	ptr = new int;    	 //Cap phat bo nho
	if (ptr != NULL)
	{
		for (int i = 0; i < n; i++)
			*(ptr + i) = i;
		for (int i = n; i > 0; i--)
			cout << *(ptr + (1 - 1)) << "\t";
		delete ptr;
		return 0;
	}
	else
	{
		cout << "\nKhong du bo nho de cap phat" << endl;
		return 1;
	}
} 
*/


		// BTH 1
/*
int main(){
	int a = 15; // Khai bao bien nguyen 
	int *p;    // Bien con tro p 
	p = &a;   // Luu tru dia chi cua a vao bien con tro p 
	cout << "Gia tri cua bien a la : " << a << endl;
			// In dia chi duoc luu tru trong bien con tro p
	cout << "Dia chi luu tru trong bien trong tro p la : " << p << endl;
	cout << "Gia tri cua con tro p la  : " << *p << endl;
	return  0;
}
*/

		//BTH 2 
/*
int main(){
	int i, j;			//Khai bao 2 bien nguyen i, j
	int *p, *q;		   //Khai bao 2 con tro p, q
	p = &i;			  //P tro i
	q = &j;			 //q tro j
	cout << "Dia chi bien i la : " << &i << endl;
	cout << "Dia chi bien j la : " << q  << endl;
	i = 2;  //Gan i = 2 
   *q = 5; //Gan j = 5 (thong qua q)
   i++;
   cout << "i = " << i << endl;  //Tang i va in i = 3
   (*q)++;
   cout << "j = " << j << endl; //Tang j va in j = 6
   (*p) = (*q) * 2 + 1; //Gam lai i thong qua p
   cout << "i = " << i << endl; //13
   return 0;
}
*/

		//BTH 3
/*
int main(){
	int a, b, *ptr1, *ptr2;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	ptr1 = &a;  //Con tro ptr1 tro vao bien a
	ptr2 = &b; //Con tro ptr2 tro vao bien b
	int sum;
	sum = *ptr1 + *ptr2;
	cout << "Tong 2 so la : " << sum << endl;
	return 0;
	}
*/


		//BTH 4
/*
void hoanvi(float *x, float *y)
{
	float tg = *x;
		  *x = *y;
		  *y = tg;
}

int main(){
	float a, b;
	cout << "Nhap so thu nhat : "; cin >> a;
	cout << "Nhap so thu hai  : "; cin >> b;
	hoanvi(&a,&b);
	cout << "Gia tri sau khi hoan doi la " << endl;
	cout << "a = " << a << " b = " << b << endl;
}
*/
		//BTTG 5
/*
int main(){
	int a; 
	cout << "Nhap vao bien so nguyen a : "; cin >> a;
	int *p;    
	p = &a;  
	cout << "Gia tri cua bien a la : " << a << endl;
	cout << "Dia chi luu tru trong bien trong tro p la : " << p << endl;
	return  0;
}
*/
	// BTTG Bai 6
/*		
void SoLonNhat(int *x, int *y, int *z, int *max)
{
	*max = *x;
	if(*max < *y)
	{
		*max = *y;
	}
	if (*max < *z)
	{
		*max = *z;
	}
}

int main(){
	int a, b, c, max;
	cout << "Nhap so thu nhat : "; cin >> a;
	cout << "Nhap so thu hai  : "; cin >> b;
	cout << "Nhap so thu ba   : "; cin >> c;
	SoLonNhat(&a,&b,&c,&max);
	cout << "So lon nhat trong ba so " << a << " , " << b << " , " << c << " la : " << max << endl;
	return 0;
}
*/


		//BTTG Bai 7

/*
int main(){
	int a, b, *ptr1, *ptr2;
	cout << "Nhap he so bien x : "; cin >> a;
	cout << "Nhap he so tu do  : "; cin >> b;
	ptr1 = &a;
	ptr2 = &b;
	if ((*ptr1) != 0)
		cout << " x = " << (float) -(*ptr2)/(*ptr1) << endl;
	else if((*ptr2) == 0)
			cout << "Luon dung !";
		else 
			cout << "Pt vo nghiem ! ";
}
*/

			//BTTG 9
/*
int main(){
	int a, *ptr;
	cout << "Nhap vao 1 so nguyen bat ki : "; cin >> a;
	ptr = &a;
	long GT = 1;
	if ((*ptr == 0) || (*ptr == 1))
	{
		return GT;
	}
	else 
	{
		for (int i = 2; i <= (*ptr); i++)
		{
			GT *= i;
		}
		cout << "Giai thua cua " << a << " = " << GT << endl;
		return GT;
	}
	
}
*/
			// BGTG Bai 10
/*
int PTB2(int *x,int *y,int *z, float *delta, float *x1, float *x2)
{
	 *delta =(float) (*y)*(*y) - 4*(*x)*(*z);
	if ((*delta) < 0)
	{
		*x1 = *x2 = 0.0;
		return 0;
	}
	else if((*delta) == 0)
	{
		*x1 = *x2 = -(*y)/(2*(*x));
		return 1;
	}
	else 
	{
		*delta = sqrt((*delta));
		*x1 = (-(*y) + (*delta)) / (2*(*x));
		*x2 = (-(*y) - (*delta)) / (2*(*x));
		return 2;
	}
}
int main(){
	int a, b, c;
	float delta, x1, x2;
	cout << "Nhap he so a (a != 0): "; cin >> a;
	cout << "Nhap he so b : "; cin >> b;
	cout << "Nhap he so c : "; cin >> c;
	int kenny = PTB2(&a,&b,&c,&delta,&x1,&x2);
	if(kenny == 0)
	{
		cout << "Phuong trinh da cho vo nghiem ! ";
	}
	else if(kenny == 1)
	{
		cout << "Phuong trinh da cho co nghiem kep x1, x2 = " << x1;
		
	}
	else 
	{
		cout << "Phuong trinh da cho co hai nghiem phan biet " << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
}
*/

 			//VD Hox Sinh
/*
#define MAXHS 5
#define MAXLEN 30

int main(){
	int i, j, count = 0;
	char ds[MAXHS][MAXLEN];
	char *ptr[MAXHS], *tmp;
	while (count < MAXHS){
		cout << "Nhap hoc sinh thu : " << count + 1 << endl;
		gets(ds[count]);
	
	if (strlen (ds[count]) == 0)	break;
	ptr[count] = ds[count];
	++count;
	}
	for (i = 0; i < count - 1; i++)
		for (j = i + 1; j < count; j++)
			if (strcmp (ptr[i], ptr[j]) > 0){
				tmp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = tmp;
			}
	cout << setw(10) << "STT" << setw(10) << "Gia tri " << endl;
	for (i = 0; i < count; i++)
		cout << setw(10) << i + 1 << setw(10) << ptr[i] << endl;
	return 0;
}
*/		


			// Moi Ptu trong Mt vuong tang 10 don vi
/*
#define hang 3
#define cot  3

int main(){
	int mt[hang][cot] = { {8, 9 , 2003},
						{9, 8 , 2003},
						{26, 5, 2002} };
	int i, j;
	cout << "Ma tran ban dau la : " << endl;
	for (i= 0; i < hang; i++)
	{
		for (j = 0; j < cot; j++)
			cout << mt[i][j] << "\t";
		cout << endl;
		}
	cout << "Ma tran sau khi tang la : " << endl;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < cot; j++)
		{
			*(*(mt + i) + j) += 10;
			cout << *(*(mt + i) + j) << "\t";
		}
		cout << endl;
		}	
	return 0;
}
*/


					// Bai 1 luu va in ra cac phan tu cua mang con tro
/*
#define max 3 

int main(){
	int A[max] = {10, 100, 200};
	int *contro[max];
	for (int i = 0; i < max; i++)
		contro[i] = &A[i];
	for (int i = 0; i < max; i++)
	{
		cout << "Gia tri cua A[" << i << "] = ";
		cout << *contro[i] << endl;
		}	

}
*/

		// Bài 2 : Nhap 5 ptu va in ra mh
/*
#define max 5

int main(){
	// Nhap gia tri vao mang con tro
	int A[5], i;
	int *p = A;
	cout << "Nhap 5 so nguyen : " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Nhap phan tu thu " << i + 1 << " = ";
		cin >> *(p + i);
	 } 
	cout << "Cac so vua nhap la : " << endl;
	for (i = 0; i < 5; i++)
		cout << A[i] << "\n";
	return 0; 
} 
*/

		// Bai 3 : Nhap mang va tim gtri lon nhat
/*	
int *maxK(int b[], int m)
{
	int *max = b;
	for (int i = 0; i < m; i++)
		if (*max < *(max + i)) 
			*max = *(max + i);
	return max; 
}

int main(){
	int i, n, *p;
	cout << "Nhap so phan tu cua mang n = "; cin >> n;
	int a[n];
	for  (i = 0; i < n; i++)
	{
		cout << "\nNhap gia tri thu " << i + 1 << " la : ";  cin >> a[i];
	}
	p = maxK(a, n);
	cout << "\nGia tri lon nhat trong mang la : " << *p << endl;
	return 0;
}
*/

				// Bai 4 
 /*
int main(){
	char *s1, *s2;
	s1 = new char();
	s2 = new char();
	cout << "Nhap xau thu nhat : "; cin.getline(s1, 50);
	cout << "Nhap xau thu hai  : "; cin.getline(s2, 50);
	cout << "\n";
	
	if (strcmp (s1, s2) == 0)
		cout << "Hai xau giong nhau !" << endl;
	else 
		if(strcmp (s1, s2) > 0)
			cout << "Xau s1 lon hon xau s2 !" << endl;
		else 
			cout << "Xau s1 nho hon xau s2 !" << endl;
	return 0;
} 
*/
 
			// Bai 5 : nhap danh sach ten nguoi va sd con tro de tro toi vi tri thu n thi se ra ten nguoi do

int main(){
	
	int b, n, d;  	//b chua so nguoi, n vi tri nguoi can tim
	int *p; 			//p con tro tro so nguoi
	p = &b;
	string a[50]; 	//chua xau ten
	string *q = a; 	// q tro tro xau ten 
	cout << "Nhap so nguoi trong danh sach : "; cin >> *p;
	for (int i = 0; i < *p; i++)
	{
		cout << "Ten nguoi thu " << i + 1 << " la : "; cin >> *(p + i);
	}
	cout << "Nhap vi tri nguoi can tim : "; cin >> n;
	cout << "Ten nguoi o vi tri " << n << " la : ";
	for (int i = 0; i < *p; i++)
		if (n == i + 1) 
			cout << *(q + i);
	cout << endl;
	return 0;
}


	
		//Bai 6 : sd con tro de dem xem trong day co bn so chan 
/*		
int main ()
{
    int n;
    cout<<"Nhap so luong phan tu: ";cin>>n;
    int a[n];
    //Nhap mang thong qua con tro
    for (int i = 0; i < n; i++)
	{
        cout<<"a["<<i<<"] = ";
		cin>>*(a+i);
    }   
    cout<<"Cac so vua nhap la: "<<endl;
    for (int i = 0; i < n; i++)	
        cout<<*(a+i)<<"\t";			//xuat mang
    cout<<endl;
    //Dem so chan
    int *sochan = a, dem = 0;
    cout<<"Cac so chan trong mang la: "<<endl;
    for (int i = 0; i < n; i++)
        if (*(sochan + i) % 2 == 0)
        {	dem++;
            cout<<*(sochan + i)<<"\t";
        }
    cout<<"\nSo so chan trong mang la "<<dem<<endl;
  
    return 0;
}
*/

	
				//Bai 7: den SNt
/*			
bool ktsnt(int *x)
{
	int dem = 0;
	for (int i = 1; i <= *x; i++)
		if (*x % i == 0)
			dem++;
		if (dem == 2)
			return 1;
		return 0;
}

int main(){
	int n;
	cout << "Nhap so luon phan tu : "; cin >> n;
	int a[n], dem = 0;
	int *ptr[n];
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i <<"] = "; cin >> *(a + i);
	}
	cout << "Manng vua nhap la : " << endl;
	for (int i = 0; i <n; i++)
	{
		cout << *(a + i) << "\t";
	}
	cout << endl;
	
	// mang con tro vao mang a
	for (int i = 0; i < n; i++)
		ptr[i] = &a[i];
	
	cout << "Cac so nguyen to trong mang la : " << endl;
	for (int i = 0; i < n; i++)
		if (ktsnt(ptr[i]))
		{
			dem++;
			cout << *ptr[i] << "\t";
		}
	cout << "\nSo cac so nguyen to trong mang la : " << dem << endl;
	return 0;	
}
*/























