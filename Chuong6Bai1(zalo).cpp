#include <iostream>
using namespace std;

int main()
{

  int n;
   int dem_am = 0;
   float S = 0;
 cout << "nhap so luong phan tu mang:";
 cin >> n;
 int a[n];
 cout << "nhap mang:" << endl;
 for (int i = 0; i < n; i++)
  {
      cout << "a[" << i << "]=";
      cin >> a[i];
     if (a[i] < 0)
       {

            dem_am++;        
             S = S + a[i];                                              
       }
    }
    cout << "a)TRUNG BINH CONG CAC PHAN TU AM LA:" << S / dem_am << endl;

    cout << "b)CAC SO CHIA HET CHO 5 LA:";
    for (int i = 0; i < n; i++)
      {
          if (a[i] % 5 == 0)
            {
                   cout << a[i] << " ";
            }
                    }

 int tg;
 cout<<"\nc)SAP XEM THEO THU TU GIAM DAN LA:";
 for (int i = 0; i < n; i++)
   {
     for (int j = i + 1; j < n; j++)
      {
          if (a[i] < a[j])
           {
                    tg = a[i];
                     a[i] = a[j];
                     a[j] = tg;
           }
      }
      cout<<a[i]<<" ";
    }

     return 0;
}

