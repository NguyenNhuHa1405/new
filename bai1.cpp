#include<iostream.h>
#include<iomanip.h>
using namespace std;
class Nguoi{
	private:
	char ht[30];
	int ns;
	public:
	void nhap();
	void hienthi();
};
void Nguoi::nhap(){
	cout << "Nhap ten : ";
	cin.getline(ht, 30);
	cout << "Nhap nam sinh : "; 
	cin >> ns;
	fflush(stdin);
}
void Nguoi::hienthi(){
	cout << ht << setw(15) << ns << " "<< endl;
}
class thi_sinh : public Nguoi{
	private:
	char sbd[15];
	int toan;
	int li;
	int hoa;
	public:
	void nhap();
	void xuat();
	float tong_diem();

};
void thi_sinh::nhap(){
	cout << "Nhap sbd : ";
	fflush(stdin);
	cin.getline(sbd, 15);
	Nguoi::nhap();
	cout << "Diem toan : ";
	cin >> toan;
	cout << "Diem li : ";
	cin >> li;
	cout << "Diem hoa : ";
    cin >> hoa;
}
float thi_sinh::tong_diem(){
	return (toan + li + hoa) / 3;
}
void thi_sinh::xuat(){
	cout << sbd << setw(15);
	Nguoi::hienthi();
	cout << toan << " " << li << " " << hoa << tong_diem() << endl;
}

bool cmp(thi_sinh a, thi_sinh b){
	return a.tong_diem() < b.tong_diem();
}
int main(){
	int n;
	cin >> n;
	int d = 0;
	fflush(stdin);
	thi_sinh x[n];
	for (int i = 0; i < n;i++){
		x[i].nhap();
	}
	sort(x, x + n, cmp);
	for (int i = 0; i < n;i++){
		x[i].xuat();
	}
	return 0;
}