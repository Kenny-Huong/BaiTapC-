#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int n, b, cn, s = 0, r;
   int dem = 0;
   cout << "Nhap vao 1 so : "; cin >> n;
   b  = n;
   cn = n;
   do
	{
	   	b = b/10;	
  	 	dem++;
  	}
   while (b > 0); 
   while (cn > 0)
    {
		r  = cn % 10;
  	    s  = s + pow(r, dem);
        cn = cn / 10;
 	}
  	 if(n == s)
 	     cout << n << " la so Armstrong !";
 	  else
 	     cout << n << " ko phai la so Armstrong !";
   	return 0;
}





