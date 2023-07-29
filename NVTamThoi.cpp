// Họ tên : Phạm Hùng Minh
//Mã số sinh viên : 6251020065
// Mã đề : C041
#include "NVTamThoi.h"
#include <iomanip> 
NVTamThoi::NVTamThoi() :NhanVien() {
	NgayBD = "";
	NgayDKKT = "";
	HSLuong = 0;
}
void NVTamThoi::Nhap() {
	NhanVien::Nhap();
	cin.ignore();
	cout << "Nhap ngay bat dau:"; getline(cin, NgayBD);
	cout << "Nhap ngay du kien ket thuc:"; getline(cin, NgayDKKT);
	cout << "Nhap he so luong:"; cin >> HSLuong;
}
void NVTamThoi::Xuat() {
	cout << "Nhan vien tam thoi !" << endl;
	NhanVien::Xuat();
	cout << "Ngay BD:" << NgayBD << endl;
	cout << "Ngay KT:" << NgayDKKT << endl;
	cout << "He so luong:" << HSLuong << endl;
	cout << "Luong:" << fixed << setprecision(2) << TinhLuong() << endl;

}
float NVTamThoi::TinhLuong() {
	float s = LuongCB * HSLuong + 800000;
	return s;
}