#include<iostream>
using namespace std;
class Mydate{
	private:
		int ngay,thang,nam;
	public:
		int getNgay(){
			return ngay;
		}
		int getThang(){
			return thang;
		}
		int getNam(){
			return nam;
		}
		void nhap(){
			cout<<"\nnhap ngay: ";cin>>ngay;
			cout<<"\nnhap thang: ";cin>>thang;
			cout<<"\nnhap nam: ";cin>>nam;
		}
		void xuat(){
			cout<<endl<<ngay<<"-"<<thang<<"-"<<nam;
		}
};
int soSanh(Mydate m1,Mydate m2){
	if(m1.getNam()>m2.getNam()){
		return 1;
	}
	else if(m1.getNam()<m2.getNam()){
		return -1;
	}	
	else{
		if(m1.getThang()>m2.getThang()){
			return 1;
		}
		else if(m1.getThang()<m2.getThang()){
			return -1;
		}
		else{
			if(m1.getNgay()>m2.getNgay()){
				return 1;
			}
			else if(m1.getNgay()<m2.getNgay()){
				return -1;
			}
			else{
				return 0;
			}
		}
	}
}
int main(){
	Mydate arr[5];
	for(int i=0;i<5;i++){
		arr[i].nhap();
	}
	for(int i=0;i<5;i++){
		arr[i].xuat();
	}
	Mydate max = arr[0];
	
	for(int i=1;i<5;i++){
		int ketqua = soSanh(max,arr[i]);
		if(ketqua == -1){
			max = arr[i];
		}
	}
	cout<<"\nthoi gian lon nhat: ";
	max.xuat();
	
	
}
