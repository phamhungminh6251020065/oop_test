// Họ tên : Phạm Hùng Minh
//Mã số sinh viên : 6251020065
// Mã đề : C041
#include "DSNhanVien.h"
#include<fstream>
void DSNhanVien::Nhap() {
	cout << "\t\tNHAP THONG TIN NHAN VIEN " << endl;
	cout << "Nhap so nhan vien:"; cin >> soNhanVien;
	dsNhanVien = new NhanVien *[soNhanVien];
	for (int i = 0; i < soNhanVien; i++) {
		cout << "\t\t*************NHAN_VIEN***********" << endl;
		cout << "\t\t**          1.Chinh thuc       **" << endl;
		cout << "\t\t**          2.Tam thoi         **" << endl;
		cout << "\t\t*********************************" << endl;
		int chon;
		cout << "Nhap loai nhan vien:"; cin >> chon;
		if (chon == 1) {
			dsNhanVien[i] = new NVChinhThuc();
			dsNhanVien[i]->Nhap();
		}
		else if (chon == 2) {
			dsNhanVien[i] = new NVTamThoi();
			dsNhanVien[i]->Nhap();
		}
		else {
			cout << "Khong hop le" << endl;
			i--;
		}

	}
}
void DSNhanVien::Xuat() {
	cout << "\t\tTHONG TIN NHAN VIEN " << endl;
	for (int i = 0; i < soNhanVien; i++) {
		cout << "Thong tin nhan vien thu " << i + 1 << endl;
		dsNhanVien[i]->Xuat();
		cout << endl;
	}
}
void DSNhanVien::Xoa() {
	cout << "So luong nhan vien hien co:" << SoLuong() << endl;
	int ViTri;
	cout << "Nhap vi tri muon xoa:"; cin >> ViTri;
	do {
		if (ViTri < 0 || ViTri > SoLuong()) {
			cout << "Vi tri nhap vao khong hop le. Vui long nhap lai! ";
		}
	} while (ViTri < 0 || ViTri >SoLuong());
	delete dsNhanVien[ViTri];
	// Dich chuyen mang
	for (int i = ViTri; i < soNhanVien - 1; i++) {
		dsNhanVien[i] = dsNhanVien[i + 1];
	}
	// Giam so luong phan tu sau khi xoa.
	--soNhanVien;
}
void DSNhanVien::TangDan() {
	cout << "\t\tSAP XEP NHAN VIEN LUONG TANG DAN" << endl;
	for (int i = 0; i < soNhanVien - 1; i++) {
		for (int j = i + 1; j < soNhanVien; j++) {
			if (dsNhanVien[i]->TinhLuong() > dsNhanVien[j]->TinhLuong()) {
				swap(dsNhanVien[i], dsNhanVien[j]);
			}
		}
	}
	Xuat();
}
void DSNhanVien::Top2LuongMin() {
	if (soNhanVien < 2) {
		cout << "Khong du nhan vien de tim 2 nhan vien co luong thap nhat." << endl;
		return;
	}

	NhanVien *min1 = dsNhanVien[0];
	NhanVien *min2 = dsNhanVien[1];

	if (min1->TinhLuong() > min2->TinhLuong()) {
		swap(min1, min2);
	}

	for (int i = 2; i < soNhanVien; i++) {
		if (dsNhanVien[i]->TinhLuong() < min1->TinhLuong()) {
			min2 = min1;
			min1 = dsNhanVien[i];
		}
		else if (dsNhanVien[i]->TinhLuong() < min2->TinhLuong()) {
			min2 = dsNhanVien[i];
		}
	}

	cout << "\t\tTHONG TIN 2 NHAN VIEN LUONG THAP NHAT" << endl;
	cout << "Nhan vien thu 1:" << endl;
	min1->Xuat();
	cout << endl;
	cout << "Nhan vien thu 2:" << endl;
	min2->Xuat();
}
int DSNhanVien::SoLuong() {
	return soNhanVien;
}
void DSNhanVien::GhiFile() {
	// Mở file để ghi
	ofstream outfile("danhsach.txt");
	// Chuyển đầu ra của console vào file
	streambuf *coutbuf = cout.rdbuf();
	cout.rdbuf(outfile.rdbuf());
	// In ra kết quả trên console để chuyển vào file
	for (int i = 0; i < soNhanVien; i++) {
		cout << "\n-------\n";
		cout << "\nThong tin nhan vien thu : " << i + 1 << endl;
		dsNhanVien[i]->Xuat();
	}
	// Đóng file sau khi ghi
	outfile.close();
	// Chuyển lại đầu ra mặc định của console
	cout.rdbuf(coutbuf);
}