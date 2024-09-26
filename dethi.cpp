//một cửa hàng kinh doanh đồ gỗ gồm 3 loại tủ, giường, bàn ghế
//-Tủ : Tiền lợi nhuận = số xe * giá xe * 18%
//-Giường : Tiền lợi nhuận = số xe * giá xe * 20%
//-Bàn ghế : Tiền lợi nhuận = số xe * giá xe * 15%
//Thông tin về hóa đơn mua xe của khách hàng gồm : Mã hóa đơn, mã khách hàng, tên khách hàng và loại
//hàng hóa, giá hàng hóa mà khách hàng mua, tổng tiền khách hàng phải trả.

//Viết chương trình với các lớp cần thiết để tạo menu chương trình thực hiện các yêu cầu: Nhâp hóa đơn,
//in hóa đơn, tính tiền của từng loại hàng hóa mà khách hàng mua, tính tổng tiền doanh thu cửa hàng thu
//được, tổng lợi nhuận cửa hàng thu được, loc ra những loại có doanh thu >= 500tr


#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

class HangHoa {
protected:
    int so_xe;
    int gia_xe;

public:
    virtual void Nhap() = 0; // phuong thuc nhap thiet lap la phuong thuc pure virtual
    virtual void Xuat() = 0; // phuong thuc xuat thiet lap la phuong thuc pure virtual
    virtual double TinhLai() = 0;
};

class Tu : public HangHoa {
public:
    Tu() : HangHoa() {}
    void Nhap() override {
        cout << "Nhap so xe: ";
        cin >> this->so_xe;
        cout << "Nhap gia xe: ";
        cin >> this->gia_xe;
    }
    void Xuat() override {
        cout << "Loai hang hoa: Tu" << endl;
        cout << "So xe: " << so_xe << endl;
        cout << "Gia xe: " << gia_xe << endl;
        cout << "Tien lai (18%): " << this->TinhLai() << endl;
    }
    double TinhLai() override {
        return so_xe * gia_xe * 0.18;
    }
};

class Giuong : public HangHoa {
public:
    Giuong() : HangHoa() {}
    void Nhap() override {
        cout << "Nhap so xe: ";
        cin >> this->so_xe;
        cout << "Nhap gia xe: ";
        cin >> this->gia_xe;
    }
    void Xuat() override {
        cout << "Loai hang hoa: Giuong" << endl;
        cout << "So xe: " << so_xe << endl;
        cout << "Gia xe: " << gia_xe << endl;
        cout << "Tien lai (20%): " << this->TinhLai() << endl;
    }
    double TinhLai() override {
        return so_xe * gia_xe * 0.2;
    }
};

class BanGhe : public HangHoa {
public:
    BanGhe() : HangHoa() {}
    void Nhap() override {
        cout << "Nhap so xe: ";
        cin >> this->so_xe;
        cout << "Nhap gia xe: ";
        cin >> this->gia_xe;
    }
    void Xuat() override {
        cout << "Loai hang hoa: Ban ghe" << endl;
        cout << "So xe: " << so_xe << endl;
        cout << "Gia xe: " << gia_xe << endl;
        cout << "Tien lai (15%): " << this->TinhLai() << endl;
    }
    double TinhLai() override {
        return so_xe * gia_xe * 0.15;
    }
};

class HoaDon {
private:
    string maHD;
    string maKH;
    string tenKH;
    HangHoa* hanghoa;
    double tongTien;

public:
    HoaDon() {}
    void Nhap() {
        cout << "Nhap ma hoa don: ";
        getline(cin, maHD);
        cout << "Nhap ma khach hang: ";
        getline(cin, maKH);
        cout << "Nhap ten khach hang: ";
        getline(cin, tenKH);

        int loaiHH;
        cout << "Nhap loai hang hoa (1 - Tu, 2 - Giuong, 3 - Ban ghe): ";
        cin >> loaiHH;

        switch (loaiHH) {
        case 1:
            hanghoa = new Tu();
            break;
        case 2:
            hanghoa = new Giuong();
            break;
        case 3:
            hanghoa = new BanGhe();
            break;
        default:
            cout << "Loai hang hoa khong hop le" << endl;
            break;
        }

        hanghoa->Nhap();
        tongTien = hanghoa->TinhLai();
    }
    void Xuat() {
        cout << "Ma hoa don: " << maHD << endl;
        cout << "Ma khach hang: " << maKH << endl;
        cout << "Ten khach hang: " << tenKH << endl;
        hanghoa->Xuat();
        cout << "Tong tien: " << tongTien << endl;
    }
    double layTongTien() {
        return tongTien;
    }
};

class CuaHang {
private:
    int danhSachHoaDon;

public:
    void NhapHoaDon() {
        HoaDon hd;
        hd.Nhap();
        danhSachHoaDon.push_back(hd);
    }
    void InDanhSach() {
        for (int i = 0; i < danhSachHoaDon.size(); i++) {
            danhSachHoaDon[i].Xuat();
        }
    }
    double TinhDoanhThu() {
        double doanhThu = 0;
        for (int i = 0; i < danhSachHoaDon.size(); i++) {
            doanhThu += danhSachHoaDon[i].layTongTien();
        }
        return doanhThu;
    }
    double TinhLoiNhuan() {
        double loiNhuan = 0;
        for (int i = 0; i < danhSachHoaDon.size(); i++) {
            loiNhuan += danhSachHoaDon[i].layTongTien() * 0.1; // loi nhuan 10%
        }
        return loiNhuan;
    }
    void LietKeDoanhThu() {
        for (int i = 0; i < danhSachHoaDon.size(); i++) {
            if (danhSachHoaDon[i].layTongTien() >= 500000000) {
                danhSachHoaDon[i].Xuat();
            }
        }
    }
};

int main() {
    CuaHang c;
    int luaChon;
    do {
        cout << "====== MENU ======" << endl;
        cout << "1. Them hoa don" << endl;
        cout << "2. Xem danh sach" << endl;
        cout << "3. Tinh doanh thu" << endl;
        cout << "4. Tinh loi nhuan" << endl;
        cout << "5. Liet ke hoa don co doanh thu >= 500 trieu" << endl;
        cout << "0. Thoat chuong trinh" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> luaChon;

        switch (luaChon) {
        case 1:
            c.NhapHoaDon();
            break;
        case 2:
            c.InDanhSach();
            break;
        case 3:
            cout << "Doanh thu: " << c.TinhDoanhThu() << endl;
            break;
        case 4:
            cout << "Loi nhuan: " << c.TinhLoiNhuan() << endl;
            break;
        case 5:
            c.LietKeDoanhThu();
            break;
        case 0:
            cout << "Cam on ban da su dung chuong trinh" << endl;
            break;
        default:
            cout << "Lua chon khong hop le" << endl;
            break;
        }

    } while (luaChon != 0);
    return 0;
}