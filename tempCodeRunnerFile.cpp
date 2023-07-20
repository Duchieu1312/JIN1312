#include <iostream>
#include <string>
#include <math.h>
using namespace std;
void xuattt(float toan, float ly, float hoa, float diemtb=0){
    char tensv[30];
    int masv;
    cout << " ten sinh vien la: "<< tensv[30] << endl;
    cout << "Nhap diem toan: " << endl;
    cin >> toan;
    cout << "Nhap diem hoa: " << endl;
    cin >> hoa;
    cout << "Nhap diem ly: " << endl;
    cin >> ly;
    diemtb = (toan+ly+hoa)/3;
    cout << "Diem trung binh cua sinh vien la: "<< diemtb << endl;
    if (diemtb>=8 && diemtb <=10){
        cout << " hoc sinh " << tensv << " dat danh hieu hoc sinh gioi";
    }
    else if (6.5<=diemtb && diemtb<8){
        cout << " hoc sinh " << tensv << " dat danh hieu hoc sinh kha";
    }
    else if (5<=diemtb && diemtb<6.5){
        cout << " hoc sinh " << tensv << " dat danh hieu hoc sinh trung binh";
    }
    else if (0<=diemtb && diemtb<5){
        cout << " hoc sinh " << tensv << " dat danh hieu hoc sinh yeu";
    }
}
int main(){
    char tensv[30];
    int masv;
    float toan, ly, hoa, diemtb;
    cout << "Ten cua sinh vien la: " ;
    cin.ignore();
    cin.getline(tensv,30);
    cout << "Ma so sinh vien la: ";
    cin >> masv;
    xuattt(toan, ly, hoa, diemtb);
    return 0;
}

