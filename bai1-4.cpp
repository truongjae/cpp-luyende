#include<iostream>
using namespace std;
class PS{
	private:
		int tuSo, mauSo;
	public:
		PS(){
			tuSo=0;
			mauSo=1;
		}
		int getTuSo(){
			return tuSo;
		}
		int getMauSo(){
			return mauSo;
		}
		void setTuSo(int tuSo){
			this->tuSo = tuSo;
		}
		void setMauSo(int mauSo){
			this->mauSo = mauSo;
		}
		void nhap(){
			cout<<"dy truong nhap tu vao: ";cin>>tuSo;
			cout<<"dy truong nhap mau vao: ";cin>>mauSo;
		}
		void xuat(){
			cout<<tuSo<<"/"<<mauSo;
		}
		int UCLN(PS ps){
			int min;
			if(ps.tuSo<ps.mauSo){
				min = ps.tuSo;
			}
			else{
				min = ps.mauSo;
			}
			for(int i=min;i>=1;i--){
				if(ps.tuSo%i==0 && ps.mauSo%i==0){
					return i;
				}
			}
			return 1;
		}
		void rutGon(PS ps){
			int uc = UCLN(ps);
			if(ps.tuSo==ps.mauSo){
				cout<<1;
			}
			else{
				cout<<ps.tuSo/uc<<"/"<<ps.mauSo/uc;
			}
		}
		void cong(PS p1, PS p2){
			int tu = p1.tuSo*p2.mauSo + p2.tuSo*p1.mauSo;
			int mau = p1.mauSo*p2.mauSo;
			PS p3;
			p3.tuSo = tu;
			p3.mauSo = mau;
			rutGon(p3);
		}
		
		friend int soSanh(PS ps1, PS ps2);
		
		int soSanh(PS ps1, PS ps2){
			float kq1 = ps1.tuSo/(float)ps1.mauSo;
			float kq2 = ps2.tuSo/(float)ps2.mauSo;
			if(kq1>kq2) return 1;
			else if(kq1<kq2) return -1;
			else return 0;
		}
		
		
		PS sum(PS p1, PS p2){
			PS p3;
			int tu = p1.tuSo*p2.mauSo + p2.tuSo*p1.mauSo;
			int mau = p1.mauSo*p2.mauSo;
			p3.setTuSo(tu);
			p3.setMauSo(mau);
			return p3;
		}
		
		
		
};

int main(){
	int n;
	cout<<"nhap n: ";cin>>n;
	PS ps[n];
	for(int i=0;i<n;i++){
		ps[i].nhap();
	}
	for(int i=0;i<n;i++){
		cout<<endl;
		ps[i].xuat();
	}
	
	cout<<"\ndanh sach duoi danh rut gon: ";
	for(int i=0;i<n;i++){
		cout<<endl;
		ps[i].rutGon(ps[i]);
	}
	
	/*
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ps[i].soSanh(ps[i],ps[j])==1){
				PS temp = ps[i];
				ps[i] = ps[j];
				ps[j] = temp;
			}
		}
	}
	
	cout<<"\nsau khi sap xep: ";
	for(int i=0;i<n;i++){
		cout<<endl;
		ps[i].xuat();
	}*/
	
	

	
	// cau tinh tong cac phan so trong mang
	/*PS tong = ps[0];
	for(int i=1;i<n;i++){
		tong = tong.sum(tong,ps[i]);
	}
	cout<<endl;
	tong.rutGon(tong);*/
	
	
	// tim max min phan so
	// cach 1
	/*	cout<<"\nphan so lon nhat la: ";ps[n-1].xuat();
	cout<<"\nphan so nho nhat la: ";ps[0].xuat();*/
	
	// cach 2
	

	/*PS max = ps[0];
	PS min = ps[0];
	for(int i=1;i<n;i++){
		if(max.soSanh(ps[i],max)==1){
			max = ps[i];
		}
		if(min.soSanh(ps[i],min)==-1){
			min = ps[i];
		}
	}
	cout<<"\nphan so lon nhat la: ";
	max.xuat();
	cout<<"\nphan so nho nhat la: ";
	min.xuat();*/
	
	
	
}
