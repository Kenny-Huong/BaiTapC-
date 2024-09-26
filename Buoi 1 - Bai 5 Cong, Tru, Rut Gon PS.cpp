#include <iostream>
#include <algorithm>
 
using namespace std;
 
class PhanSo{
    private:
        int tu;
        int mau;
    public:
     
        PhanSo(){}
        PhanSo(int tu, int mau){
            this->tu = tu;
            this->mau = mau;
        }
         
        void nhap(){
            cout<<"Nhap tu so: ";
            cin>>this->tu;
             
            cout<<"Nhap mau so: ";
            cin>>this->mau;    
        }
        void xuat(){
            cout<<this->tu<<"/"<<this->mau;
        }
        bool check(){
            if(this->tu == 0 || this->mau == 0)
               return false;
            return true;
        }
        void rutGon(){
            int usc = abs(__gcd(abs(this->tu), abs(this->mau)));
            this->tu = this->tu/usc;
            this->mau = this->mau/usc;
        }
        void quyDong(PhanSo &b){
            this -> rutGon();
            b.rutGon();
             
            this->tu =  this->tu * b.mau;
            b.tu = b.tu * this->mau;
             
            this->mau = b.mau  = this->mau * b.mau;
        }
         
        PhanSo congPhanSo(PhanSo b){
            this->quyDong(b);
            PhanSo c;
            c.tu = this->tu + b.tu;
            c.mau = this->mau;
            c.rutGon();
            return c;
        }
         
        PhanSo truPhanSo(PhanSo b){
            this->quyDong(b);
            PhanSo c;
            c.tu = this->tu - b.tu;
            c.mau = this->mau;
            c.rutGon();
            return c;
        }
        void setTu(int tu){
            this->tu = tu;
        }
            void setMau(int mau){
            this->tu = mau;
        }
        int getTu(){
            return this->tu;
        }
        int getMau(){
            return this->mau;
        }
         
};
 
int main()
{
    PhanSo A;
    PhanSo B(90, 100);
 
    cout<<"Nhap phan so A\n";
    A.nhap();
    /*
     
    */
     
    cout<<"-------------XUAT-------\n";
    cout<<"Phan so A: ";
    A.xuat();
    cout<<"\nPhan so B: ";
    B.xuat();
     
    if(A.check() == false){
        cout<<"\n=>Phan so A kh hop le";
        return 0;
    }
    if(B.check() == false){
        cout<<"\n=>Phan so A kh hop le";
        return 0;
    }
     
    cout<<"\n\n-------------RUT GON PHAN SO-------\n";
    printf("Phan so A: ");
    A.rutGon();
    A.xuat();
    printf("\nPhan so B: ");
    B.rutGon();
    B.xuat();
     
    cout<<"\n\n-------------CONG HAI PHAN SO-------\n";
    printf("Tong phan so: ");
    PhanSo tong = A.congPhanSo(B);
    tong.xuat();
     
     
    cout<<"\n\n-------------TRU HAI PHAN SO-------\n";
    printf("hieu phan so: ");
    PhanSo hieu = A.truPhanSo(B);
    hieu.xuat();
     
    return 0;
}