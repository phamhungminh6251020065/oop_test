// Họ tên : Phạm Hùng Minh
//Mã số sinh viên : 6251020065
// Mã đề : C041
#pragma once
#include"NhanVien.h"
#include<iostream>
#include<string>
using namespace std;
class NVTamThoi :public NhanVien {
private:
	string NgayBD, NgayDKKT;
	float HSLuong;
public:
	NVTamThoi();
	void Nhap();
	void Xuat();
	float TinhLuong();
};