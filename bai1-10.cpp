#include<iostream>
using namespace std;
class Student{
	private:
		string hoTen;
		int diemKy1;
		int diemKy2;
		float dtb;
	public:
		void nhap(){
			cout<<"nhap ho ten vao: ";getline(cin,hoTen);
			cout<<"nhap diem ky 1: ";cin>>diemKy1;
			cout<<"nhap diem ky 2: ";cin>>diemKy2;
			cin.get();
			dtb = (float)(diemKy1+ 2*diemKy2)/3;
		}
		void xuat(){
			cout<<"\nho ten: "<<hoTen;
			cout<<"\ndiem ky 1: "<<diemKy1;
			cout<<"\ndiem ky 2: "<<diemKy2;
			cout<<"\ndiem trung binh: "<<dtb;
		}
		int soSanh(Student st1){
			if(this->dtb > st1.dtb) return 1;
			else if(this->dtb < st1.dtb) return -1;
			else return 0;
		}
};
int main(){
	Student st[5];
	
	for(int i=0;i<5;i++){
		st[i].nhap();
	}
	
	for(int i=0;i<5;i++){
		st[i].xuat();
	}
	cout<<"\nsau khi sap xep: ";
	
	for(int i=0;i<4;i++){
		for(int j=i+1;j<5;j++){
			if(st[i].soSanh(st[j])==-1){
				Student temp = st[i];
				st[i] = st[j];
				st[j] = temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		st[i].xuat();
	}
}
