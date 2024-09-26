//Bài 4: Sử dụng khuôn hình lớp và định nghĩa các hàm  cộng, trừ, nhân, chia, so sánh lớn hơn với đầu vào là hai giá trị có kiểu dữ liệu cơ bản.

#include <iostream>
using namespace std;

template<class T>

class kenny
{
	T a, b;
	public:
		kenny(T a = 0, T b = 0)
		{
			this -> a = a;
			this -> b = b;
		}
		
		T cong()
		{
			return a + b;
		}
		
		T tru()
		{
			return a - b;
		}
		
		T nhan()
		{
			return a*b;
		}
		
		T chia()
		{
			return a/b;
		}
		
		T max()
		{
			T max = a;
			if(b > max)
				max = b;
			return max;
		}
};

int main()
{
	float a, b;
	cout << "Nhap a : "; cin >> a;
	cout << "Nhap b : "; cin >> b;
	
	kenny <float> kenny(a, b);
	cout << "\nTong : " << kenny.cong()
		 << "\nHieu : " << kenny.tru()
		 << "\nNhan : " << kenny.nhan()
		 << "\nChia : " << kenny.chia()
		 << endl;
		 
}