#include <iostream>
#include <string>

using namespace std;

class GoiCuoc {
public:
    virtual int TinhCuocDienThoai() = 0;
    virtual int TinhCuocInternet() = 0;
    virtual float TinhCuocTong() = 0;
    virtual void NhapThongTin() = 0;
    virtual void XuatThongTin() = 0;
    virtual ~GoiCuoc() {}
};

class GoiCuocDataFix : public GoiCuoc {
private:
    int thoiGianGoi;
    int donGiaGoi;
    int luuLuong;
    int donGiaInternet;

public:
    GoiCuocDataFix() {}
    ~GoiCuocDataFix() {}

    int TinhCuocDienThoai() override 
	{
        return thoiGianGoi * donGiaGoi;
    }

    int TinhCuocInternet() override 
	{
        return luuLuong * donGiaInternet;
    }
    
    float TinhCuocTong() override 
    {
    	return (thoiGianGoi * donGiaGoi) + (luuLuong * donGiaInternet) + 0.1;
	}

    void NhapThongTin() override 
	{
        cout << "Nhap thoi gian goi (phut): "; cin >> thoiGianGoi;
 		cout << "Nhap don gia goi (vnd/phut): "; cin >> donGiaGoi;
        cout << "Nhap luu luong (mb): "; cin >> luuLuong;
        cout << "Nhap don gia internet (vnd/mb): "; cin >> donGiaInternet;
    }

    void XuatThongTin() override 
	{
        cout << "Thoi gian goi: " << thoiGianGoi  << " phut" << endl;
        cout << "Don gia goi: " << donGiaGoi  << " dong/phut" << endl;
        cout << "Luu luong: " << luuLuong << " MB" << endl;
        cout << "Don gia internet: " << donGiaInternet << " vnd/MB" << endl;
    }
};

class GoiCuocDataFree : public GoiCuoc {
private:
    int cuocThueBao;
    int luuLuong;
    int donGiaInternet;

public:
    GoiCuocDataFree() {}
    ~GoiCuocDataFree() {}

    int TinhCuocDienThoai() override 
	{
        return 0;
    }

    int TinhCuocInternet() override 
	{
        return luuLuong * donGiaInternet;
    }

    float TinhCuocTong() override 
    {
    	return 0;
	}


    void NhapThongTin() override 
	{
        cout << "Nhap cuoc thue bao: "; cin >> cuocThueBao;
        cout << "Nhap luu luong: "; cin >> luuLuong;
        cout << "Nhap don gia internet: "; cin >> donGiaInternet;
    }

    void XuatThongTin() override 
	{
        cout << "Cuoc thue bao: " << cuocThueBao << endl;
        cout << "Luu luong: " << luuLuong << endl;
        cout << "Don gia internet: " << donGiaInternet << endl;
    }
};

class KhachHang {
private:
    string hoTen;
    string cmnd;
    string diaChi;
    GoiCuoc* goiCuoc;
public:
    KhachHang() 
	{
        goiCuoc = nullptr;
    }
    ~KhachHang() 
	{
        if (goiCuoc != nullptr) 
		{
            delete goiCuoc;
        }
    }

    void NhapThongTin() 
    {
       cout << "Nhap ho ten: "; getline(cin, hoTen);
	   cout << "Nhap CMND: "; getline(cin, cmnd);
	   cout << "Nhap dia chi: ";getline(cin, diaChi);
	   
		int loaiGoiCuoc;
		cout << "Chon loai goi cuoc (1 - Data Fix, 2 - Data Free): "; cin >> loaiGoiCuoc;
		if (loaiGoiCuoc == 1)
		{
			goiCuoc = new GoiCuocDataFix();
		}	
		
		else
		{
			goiCuoc = new GoiCuocDataFree();
		}
		goiCuoc->NhapThongTin();
	}
	
	void XuatThongTin() 
	{
		cout << "\n--- Thong Tin Khach Hang ---" << endl;
    	cout << "Ho ten: " << hoTen << endl;
    	cout << "CMND: " << cmnd << endl;
    	cout << "Dia chi: " << diaChi << endl;
    	goiCuoc -> XuatThongTin();
    	cout << "Cuoc dien thoai: " << goiCuoc->TinhCuocDienThoai() << endl;
    	cout << "Cuoc internet: " << goiCuoc->TinhCuocInternet() << endl;
    	cout << "Cuoc tong : " << goiCuoc->TinhCuocTong() << endl;
     	
	}
};

int main() {
KhachHang kh;
kh.NhapThongTin();
kh.XuatThongTin();
return 0;
}

