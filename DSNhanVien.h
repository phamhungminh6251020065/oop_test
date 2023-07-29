// Họ tên : Phạm Hùng Minh
//Mã số sinh viên : 6251020065
// Mã đề : C041
#pragma once
#include"NhanVien.h"
#include"NVChinhThuc.h"
#include"NVTamThoi.h"
#include<iostream>
using namespace std;
class DSNhanVien {
private:
	NhanVien **dsNhanVien;
	int soNhanVien;
public:
	void Nhap();
	void Xuat();
	void Xoa();
	void TangDan();
	void Top2LuongMin();
	void GhiFile();
	int SoLuong();
};