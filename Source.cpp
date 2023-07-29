// Họ tên : Phạm Hùng Minh
//Mã số sinh viên : 6251020065
// Mã đề : C041
#include"DSNhanVien.h"
void Menu() {
	cout << "\t\t*************MENU************" << endl;
	cout << "\t\t** 1.Nhap thong tin        **" << endl;
	cout << "\t\t** 2.Xuat thong tin        **" << endl;
	cout << "\t\t** 3.Xoa nhan vien         **" << endl;
	cout << "\t\t** 4.Sap xep tang dan      **" << endl;
	cout << "\t\t** 5.Top 2 NV luong min    **" << endl;
	cout << "\t\t** 6.Ghi file              **" << endl;
	cout << "\t\t** 7.Thoat chuong trinh    **" << endl;
	cout << "\t\t*****************************" << endl;
}
int main() {
	DSNhanVien ds;
	int LuaChon;
	do {
		Menu();
		cout << "Nhap lua chon:"; cin >> LuaChon;
		switch (LuaChon)
		{
		case 1:
			ds.Nhap();
			break;
		case 2:
			ds.Xuat();
			break;
		case 3:
			ds.Xoa();
			break;
		case 4:
			ds.TangDan();
			break;
		case 5:
			ds.Top2LuongMin();
			break;
		case 6:
			ds.GhiFile();
			cout << "Ghi thanh cong !" << endl;
			break;
		case 7:
			cout << "Goodbye !" << endl;
			break;
		default:
			break;
		}
	} while (LuaChon != 7);



	system("pause");
	return 0;
}