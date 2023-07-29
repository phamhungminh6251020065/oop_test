// Họ tên : Phạm Hùng Minh
//Mã số sinh viên : 6251020065
// Mã đề : C041
#pragma once
#include<iostream>
#include<string>
using namespace std;
class NhanVien {
protected:
	string MaNV, HoTen, DiaChi;
	int YearBD;
	float LuongCB;
public:
	NhanVien();
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhLuong();
	bool operator > (NhanVien &n);
};