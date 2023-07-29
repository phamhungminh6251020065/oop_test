// Họ tên : Phạm Hùng Minh
//Mã số sinh viên : 6251020065
// Mã đề : C041
#include "NhanVien.h"
NhanVien::NhanVien() {
	MaNV = "";
	HoTen = "";
	DiaChi = "";
	YearBD = 0;
	LuongCB = 0;
}
void NhanVien::Nhap() {
	cin.ignore();
	cout << "Nhap ma NV:"; getline(cin, MaNV);
	cout << "Nhap ho ten:"; getline(cin, HoTen);
	cout << "Nhap dia chi:"; getline(cin, DiaChi);
	cout << "Nhap nam sinh:"; cin >> YearBD;
	cout << "Nhap luong co ban:"; cin >> LuongCB;

}
void NhanVien::Xuat() {
	cout << "Ma NV:" << MaNV << endl;
	cout << "Ho ten:" << HoTen << endl;
	cout << "Dia chi:" << DiaChi << endl;
	cout << "Nam sinh:" << YearBD << endl;
	cout << "Luong co ban:" << fixed << LuongCB << endl;
}
float NhanVien::TinhLuong() {
	return 0;
}
bool NhanVien::operator > (NhanVien &n) {
	return this->TinhLuong() > n.TinhLuong();
}