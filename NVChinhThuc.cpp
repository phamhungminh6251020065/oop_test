// Họ tên : Phạm Hùng Minh
//Mã số sinh viên : 6251020065
// Mã đề : C041
#include "NVChinhThuc.h"
#include <iomanip> 
NVChinhThuc::NVChinhThuc() :NhanVien() {
	SoNamLV = 0;
	HSLuong = 0;
}
void NVChinhThuc::Nhap() {
	NhanVien::Nhap();
	cin.ignore();
	cout << "Nhap so nam lam viec:"; cin >> SoNamLV;
	cout << "Nhap he so luong:"; cin >> HSLuong;
}
void NVChinhThuc::Xuat() {
	cout << "Nhan vien chinh thuc !" << endl;
	NhanVien::Xuat();
	cout << "So nam lam viec:" << SoNamLV << endl;
	cout << "He so luong:" << HSLuong << endl;
	cout << "Luong:" << fixed << setprecision(2)<<TinhLuong() << endl;

}
float NVChinhThuc::TinhLuong() {
	float s = LuongCB * HSLuong + 0.7*LuongCB*SoNamLV + 1000000;
	return s;
}