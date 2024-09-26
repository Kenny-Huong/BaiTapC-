#include <iostream>
using namespace std;
class PTGT
{
 string hang;
 int nam;
 long gia_chua_thue;
 public:
  PTGT(char* hang=" ",int nam=0,long gia_chua_thue=0)
  {
   this->hang=hang;
   this->nam=nam;
   this->gia_chua_thue=gia_chua_thue;
  } 
  ~PTGT(){}
  void nhap()
  {
   fflush(stdin);
   cout<<"Nhap hang san xuat: ";
   getline(cin,hang);
   
   cout<<"Nhap nam san xuat: ";
   cin>>nam;
   
   cout<<"Nhap gia chua thue: ";
   cin>>gia_chua_thue;
  }
  void xuat()
  {
   cout<<"Hang san xuat: "<<hang<<endl
       <<"Nam san xuat: "<<nam<<endl
       <<"Gia chua thue: "<<gia_chua_thue<<endl;
  }
  long get_GCT()
  {
   return gia_chua_thue;
  }
  int get_nam()
  {
   return nam;
  } 
};
class XEKHACH : public PTGT
{
 int so_tuyen,so_ghe;
 double gia_sau_thue;
 public:
  XEKHACH(char* hang=" ",int nam=0,long gia_chua_thue=0,int so_tuyen=0,int so_ghe=0,double gia_sau_thue=0):PTGT(hang,nam,gia_chua_thue)
  {
   this->so_tuyen=so_tuyen;
   this->so_ghe=so_ghe;
   this->gia_sau_thue=gia_sau_thue;
  }
  ~XEKHACH(){}
   friend istream& operator >> (istream& in,XEKHACH &a)
   {
    a.XEKHACH::nhap();
    cout<<"Nhap so tuyen: ";in>>a.so_tuyen;
    cout<<"Nhap so ghe: ";in>>a.so_ghe;
    return in;
  }
  void Ttien(XEKHACH a[],int &n)
  {
   for(int i=0;i<n;i++)
    a[i].gia_sau_thue = a[i].get_GCT() + a[i].get_GCT()*0.08;
   cout<<"\n\t\t\tDa tinh gia sau thue thanh cong!\n"; 
  } 
  bool operator < (int a)
  {
   return this->get_nam() < a;
  }
  friend ostream& operator << (ostream& out,XEKHACH a)
   {
    a.XEKHACH::xuat();
    out<<"Xuat so tuyen: "<<a.so_tuyen<<endl;;
    out<<"Xuat so ghe: "<<a.so_ghe<<endl;
    return out;
  } 
  void lon_hon_29(XEKHACH a[],int n)
  {
   cout<<"\n\t\t\tXUAT DANH SACH CAC XE KHACH CO SO GHE LON HON 29\n";
   for(int i=0;i<n;i++)
    if(a[i].so_ghe > 29)
     cout<<a[i];
  }   
};
void nhap_ds(XEKHACH a[],int &n)
{
 cout<<"Nhap danh sach "<<n<<" xe khach\n";
 for(int i=0;i<n;i++)
 {
  cout<<"Nhap thong tin cua xe khach thu "<<i+1<<endl;
  cin>>a[i];
 }
}
void xuat_ds(XEKHACH a[],int n)
{
 cout<<"Xuat danh sach "<<n<<" xe khach\n";
 for(int i=0;i<n;i++)
 {
  cout<<"\n\n\tNhap thong tin cua xe khach thu "<<i+1<<endl;
  cout<<a[i];
 }
}

int main()
{
 int n;
 cout<<"Nhap so xe khach: ";cin>>n;
 while(n<1)
 {
  cout<<"Nhap sai,hay nhap lai: ";
  cin>>n;
 }
 XEKHACH a[n];
 nhap_ds(a,n);
 xuat_ds(a,n);
 a[n].lon_hon_29(a,n);
 return 0;
}

