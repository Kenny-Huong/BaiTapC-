#include <iostream>
#include <math.h>
using namespace std;
         
/*
 //Bai taon nhap vao 1 thang, 1 nam cho biet thang co bn ngay, nhuan hay khong nhuan
int main (){
	int thang, nam;
		cout << "Nhap vao mot thang " ; cin >> thang;
		cout << "Nhap vao mot nam " ;   cin >> nam;
	switch (thang){
		case 1:
	    case 3:
	    case 5:
	    case 7:
	    case 8:
	    case 10:
	    case 12:
	    	cout << "Thang " << thang << " co 31 ngay " << endl;
	    	break;
	    case 6:
		case 4:
		case 9:
		case 11:
			cout << "Thang " << thang << " co 30 ngay " << endl;
			break;	
	    case 2:
	    	if (nam%4 == 0 && nam%100 != 0 || nam%400 == 0)
	    		cout << "thang " << thang << " co 29 ngay" << endl;
	    	else 
				cout << "thang " << thang << " co 28 ngay" << endl;
				break;
					
	}
  return 0;	
}
*/
/*
//Vt ctrinh nhap vao 1 ki tu va in ra theo yeu cau

int main(){
	char kytu = ' ';
	cout << "Nhap vao 1 ky tu " ; cin >> kytu;
	switch (kytu){
		case 'A' :
		case 'a' :
			cout << "Xin caho !" << endl;
			break;
		case 'B' :
		case 'b':
			cout << "Hoan nghenh !" << endl;
			break;
		default:
			cout << "Xin loi !" << endl;	
			break;		
	}
	return 0;
}
*/
/*
              //Bai 4
int main(){
    int x,y;
    char c;
    cout << "Nhap vao 2 so x , y" << endl;
    cout << "Nhap x :" ; cin >> x;
    cout << "Nhap y :" ; cin >> y;
    cout << "Phuong Phap Tinh : " ; cin >> c;
  
    switch (c){
    	case '+' :
    		cout << "x + y = " << x + y;
    		break;
    	case '-' :
    		cout << "x - y = " << x - y;
    		break;
    	case '*':
    		cout << "x * y = " << x * y;
    		break;
    	case '/':
    		if (y != 0)
    			cout << "x / y = " << (float)x / y;
    		else 
    			cout << "Khong chia duoc" << endl;
    	break;
	}
	return 0;
}
*/
/*
//BAI 5
int main(){
	int a,b,c,max,min;
	char choice = ' ';
	cout << "Nhap cao 3 so a, b, c" << endl;
	cout << "Nhap a :" ; cin >> a;
	cout << "Nhap b :" ; cin >> b;
	cout << "Nhap c :" ; cin >> c;

	cout << "\t----------Menu-----------"
	   << "\n\t|1. Tinh tong a + b + c |"
       << "\n\t|2. Tinh tich a * b* c  |"
	   << "\n\t|3.Tim max              |"
	   << "\n\t|4.Tinh min             |" 
	   << "\n\t|5.Giai Pt Ax + B = C   |"
	   << "\n\t-------------------------"
	   <<endl;
	while (choice != '0') { 
	cout << "Nhap lua chon cua ban "; cin >> choice ;
	switch (choice){
		case '1':
			cout << "Tong cua " <<a<<"+"<<b<<"+"<<c << "=" << a+b+c <<endl;
			break;
		case '2':
			cout << "Tich cua " <<a<<"*"<<b<<"*"<<c<<"=" << a*b*c << endl;
			break;
		case '3':
			max = a;
			if (max < b){
				max =b;
			}
			if (max < c){
				max = c;
			}
			cout << "so lon nhat la" << max << endl;
			break;
		case '4':
			min = a;
			if (min > b){
				min = b;
			}		
			if (min > c){
				min = c;
			}		
			cout << "So nho nhta la" << min << endl; 
			break;
		case '5':
			cout << "Thay a, b, c ta duoc phuong trinh " << a << "x" << " + "<<b << " = " <<c << endl;
	   		if (a == 0)
	   			if (b == 0) 
	     			 cout << "Phuong Trinh vo so nghiem !" << endl;
	   			else 
		    		cout << "Phuong trinh vo nghiem ! " << endl;
			else 
				cout << "Phuong Trinh co nghiem x = " <<(float)-b/a << endl;					
	}
}
return 0; 
}
*/
// Bai 6

int main(){
	int a, b, c, d, h;
	char choice = ' ';

	cout << "\n\t --------------Menu-------------- "
		 << "\n\t|1.Tinh dien tich hinh vuong     | "	
	     << "\n\t|2.Tinh dien tich hinh chu nhat  | "
	     << "\n\t|3.Tinh dien tich hinh thang     | "
	     << "\n\t|4.Tinh dien tich hinh binh hanh | "
	     << "\n\t---------------------------------- " ;
    while (choice != 0){
    	cout << "\nNhap lua chon cua ban ! " ; cin >> choice;
    switch (choice){
    	case '1':
    		cout << "\nNhap mot canh cua hinh vuong : " ; cin >> a;
    		cout << "Dien tich cua hinh vuong la : " << a << " * " << a << " = " << a*a << endl;
    		break;
    	case '2':
		 	cout << "\nNhap 2 canh dai va rong cua hinh chu nhat " << endl;
			cout << "Nhap canh a : "; cin >> a;	
			cout << "Nhap canh b : "; cin >> b;
			if (a == b)
				cout << "Day la hinh vuong ! Yeu cau nhap lai ";
			else 
				cout << "\nDien tich cua hcn la :" << a <<" * " << b << " = " << a*b <<endl;
				break;
		case '3':
			cout << "Nhap do dai 2 canh day";
			cout << "\nNhap canh a : "; cin >> a;
			cout << "Nhap canh b : "; cin >> b;
			cout << "Nhap chieu cao h (khoang canh giua 2 day): "; cin >> h;
			cout << "Dien tich cua hinh thang la : " << ((a+b)*h)/2 << endl;
			break;
		case '4':
			cout << "Nhap do dai canh day va chieu cao cua hinh binh hanh " ;
			cout << "\nNhap do dai canh day : " ; cin >> a;
			cout << "Nhap do dai chieu cao : "; cin >> h;
			cout << "Dien tich cua hinh binh hanh la : " << a*h << endl;
			break;				
	}	
	}
	return 0;
}

/*
// Bai 7
 int main(){
 	char color = ' ';
 	cout << "Nhap bien ky tu "; cin >> color;
 	switch (color){
 		case 'R':
 			case 'r':
 				cout << "-RED";
 		break;
 		case 'G':
 			case 'g':
 				cout << "-GREEN";
 		break;
 		case 'B':
 			case 'b':
 				cout << "-Blue";
 		break;
 	default:
		cout << "-BLACK";	
	}
 	return 0;
 }
*/

    // Bai 8
/*
int main(){
	unsigned int n;
	cout << "Nhap vao so duong co 2 chu so : " ; cin >> n;
	int a = n / 10;
    int b = n % 10;
    
	if ( n < 10 || n > 99){
		cout << "Ban da nhap sai , vui long nhap lai !" ; }
	else{
		switch (a){
			case 1: cout << "Muoi " 	; break;
			case 2: cout << "Hai Muoi "	; break;
			case 3: cout << "Ba Muoi " 	; break;
			case 4: cout << "Bon Muoi " ; break;
			case 5: cout << "Nam Muoi " ; break;
			case 6: cout << "Sau Muoi " ; break;
			case 7: cout << "Bay Muoi " ; break;
			case 8: cout << "Tam Muoi " ; break;
			case 9: cout << "Chin Muoi "; break;
	    }
		switch (b){
			case 1: cout << "Mot" 		; break;
			case 2: cout << "Hai" 		; break;
			case 3: cout << "Ba" 		; break;
			case 4: cout << "Bon" 		; break;
			case 5: cout << "Lam" 		; break;
			case 6: cout << "Sau" 		; break;
			case 7: cout << "Bay" 		; break;
			case 8: cout << "Tam" 		; break;
			case 9: cout << "Chin" 		; break;
		}	
		}  
	return 0;
}
*/

/*
int main(){
	int cho, ga;
	for (ga = 0; ga <= 50; ga++)
		for (cho = 0; cho <= 25; cho++)
			if ((ga + cho == 36) && (2*ga + 4*cho == 100 ))
				cout<<" Ga = "<< ga << "\nCho = " << cho;
	return 1;
}
*/
                   
                   //Bai 9 
/*
int main(){
	int a, b, c, x1, x2, delta;
	cout << "Nhap a : " ; cin >> a;
	cout << "Nhap b : " ; cin >> b;
	cout << "Nhap c : " ; cin >> c;
	char choice = ' ';
	cout << "\n\t---------------------------Menu-------------------------------" 
	     << "\n\t|1. Giai bpt Ax + B > C                                       |"
	     << "\n\t|2. Giai pt A(x*x) + Bx + c = 0                               |"
		 << "\n\t|3. Kiem tra xem co tao thanh tam giac khong , la tam giac gi |"
		 << "\n\t--------------------------------------------------------------";
	cout << "\nChon lua chon cua ban : " ; cin >> choice;
	
	switch (choice) {
		case '1':
			cout << "Bat Phuong TRinh co dang : "<< a <<  "x" << " + " << b << " < " << c << endl;
				if (a == 0)
					if ( b > c)
						cout << "Luon Dung !";
					else 
		     			cout << "Vo Nghiem !";
				else 
					if(a > 0)
						cout << "Bat Phuong Trinh co nghiem x > " << (float) (c-b)/a << endl;
					else 
		    			cout << "Bat Phuong Trinh co nghiem x < " << (float) (c-a)/a << endl;
		case '2':	
			if (a != 0){	
		        delta = b*b - 4*a*c;
		        cout << "delta = " << delta; 
		        if (delta < 0 )
		        	cout << "\nPhuong trinh vo nghiem !";
		        else if (delta = 0){
						cout << "\nPhuong trinh co nghiem kep !";
						cout << "\nx1 = x2 = " << (float)-b/(2*a);}
				else{
					cout << "\nPhuong trinh co 2 nghiem ! ";
					x1 = (float)(-b + sqrt(delta))/(2*a);
					x2 = (float)(-b - sqrt(delta))/(2*a);
					cout << "\nx1 = " << x1;
					cout << "\nx2 = " << delta;
							}
			}
			else 
				cout << "Hieu anh ngu vcl";	
		
		 
}
return 0;		 	
}
*/






























































