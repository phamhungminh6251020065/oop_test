// Họ tên : Phạm Hùng Minh
//Mã số sinh viên : 6251020065
// Mã đề : C041
#pragma once
#include"NhanVien.h"
#include<iostream>
#include<string>
using namespace std;
class NVChinhThuc :public NhanVien {
private:
	float SoNamLV, HSLuong;
public:
	NVChinhThuc();
	void Nhap();
	void Xuat();
	float TinhLuong();
};