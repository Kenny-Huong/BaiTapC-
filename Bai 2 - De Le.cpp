#include <iostream> 
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
    int i = 1, n;
    float x, TuSo, S = 1;
    float N, MauSo = 1;
    cout << "Nhap x : "; cin >> x;
    do
    {
    cout << ("Nhap n (n >= 0) : "); cin >> n;
      if(n < 0)
      {
          cout << ("N phai >= 0. Hay nhap lai !\n");
      }

    }
	while(n < 0);

    while(i <= n)
    {
        TuSo  = pow(x, (2 * i ));
        N     = i * 2;
        MauSo*= N * (N - 1);
        S     = S + TuSo/MauSo;
        i++;
    }
    cout << "Tong la : " << S << endl;
    return 0;
}
