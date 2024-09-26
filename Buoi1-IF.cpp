#include <iostream>
#include <iomanip>
using namespace std;
/*
int main(){
    int a, b;
    cout << "Nhap a = " ; cin >> a;
    cout << "Nhap b = " ; cin >> b;
	cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    {
	if (b != 0 )
        cout << "a / b = " << (float)a / b;
    else
	    cout << "Khong chia duoc ! ";    
}
return 0;
}
*/

/*
int main(){
	float a, b, c, max, min;
	cout << "Nhap a : " ; cin >> a;
	cout << "Nhap b : " ; cin >> b;
	cout << "Nhap c : " ; cin >> c;
	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	cout << "So lon nhat la : " << setprecision << fixed << max << endl;
	min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	cout << "So nho nhat la : " << min << endl;
	
	return 0;
}

                     //Giai Phuong Trinh ax + b = 0 
int main() {
	float a, b;
	cout << " Nhap 2 he so a, b: " ; cin >> a >> b;
	if (a == 0)
	   if (b == 0) 
	      cout << "Phuong Trinh vo so nghiem !" << endl;
	    else 
		    cout << "Phuong trinh vo nghiem ! " << endl;
	else 
	cout << "Phuong Trinh co nghiem x = " << -b/a << endl;
return 0; 
}
*/

         // Kiem Tra Xem 3 Canh co tao thanh 1 tam giac hay khong
/*
int main(){
    unsigned int a, b, c; //unsigned : so duong !!
	cout << "Nhap 3 canh cua tam giac !" << endl;
	cout << "Nhap canh a : " ; cin >> a;
	cout << "Nhap canh b : " ; cin >> b;
	cout << "Nhap canh c : " ; cin >> c;
	
	if  (a + b > c && b + c > a && a + c > b ){
	   cout << "Ba canh a ,b ,c tao thanh 1 tam giac " << endl;
	   if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
	      cout << "Day la 1 tam giac vuong !";
	   else if (a == b && b == c)
	      cout << "Day la 1 tam gia deu !";
	   else if (a == b || b == c || c == a)
	      cout << "Day la 1 tam giac can !";
		else 
		  cout << "Day la 1 tam giac nhon !"; 
	}
	else 
	   cout << "Ba canh a, b, c khong tao thanh 1 tam gia ";
	return 0; 
}
*/

           // In ra xep loai cua hoc sinh
/*
int main(){
    float a, b, c, dtb;
	
	cout << "Nhap diem toan : "; cin >> a;
	cout << "Nhap diem ly   : "; cin >> b;
	cout << "Nhap diem hoa  : "; cin >> c;
	
	if (a && b && c <= 10 || a && b && c < 10 ) {

	dtb = ((a*4) + (b*3) + (c*2)) / 9;
    cout << "Diem Trung Binh cua hoc sinh la : " << setprecision(2) << fixed << dtb << endl;
    
    if(dtb >= 9)
       cout << "Xep loai xuat sac !";
    else if (dtb >= 8 && dtb < 9)
        cout << "Xep loai Gioi !";
        else if (dtb >= 6.5 && dtb < 8)
            cout << "Xep loai Kha !";
          else if (dtb >= 5 && dtb < 6.5)
			cout << "Xep loai Trung Binh !";
			else if (dtb < 5)
			    cout << "Xep loai Yeu !";
    }
    else 
      cout  << "Loi Diem .Yeu cau kiem tra lai gia tri ! ";
return 0;	
}
*/
                      // Giai Bat Phuong Trinh ax + b > c
/*
int main(){
	float a, b, c;
	cout << "Nhap 2 he so a, b, c !" << endl;
	cout << "Nhap a : "; cin >> a;
	cout << "Nhap b : "; cin >> b;
	cout << "Nhap c : "; cin >> c;
	
	cout << "Bat Phuong TRinh co dang : "<< a <<  "x " << " + " << b << " < " << c << endl;
	if (a == 0)
		if ( b > c)
			cout << "Luon Dung !";
		else 
		     cout << "Vo Nghiem !";
	else 
		if(a > 0)
			cout << "Bat Phuong Trinh co nghiem x > " << setprecision(2) << fixed << (c-b)/a << endl;
		else 
		    cout << "Bat Phuong Trinh co nghiem x < " << setprecision(2) << fixed << (c-a)/a << endl;
				
return 0;	 		 	
}                      
*/
               
			    

						//Dich Vu Hoa Hong
int main(){
	unsigned int a;
	cout << "Doanh so ban cua cong ty A la : " ; cin >> a;
	if (a <= 100)
		cout << "Cong ty duoc huong 5% doanh so ! ";
	else if (a <= 300)
			cout << "Cong ty duoc huong 10% doanh so !";
	     else 
				cout << "Cong ty duoc huong 20% doanh so !";
					
	return 0;				
}									
                                  
















