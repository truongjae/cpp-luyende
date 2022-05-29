#include<iostream>
using namespace std;
class MyAttr{
	protected:
		int sohieu;
	public:
	MyAttr(){
	}
	void hienthi(){
		cout<<"\nSo hieu thuoc tinh tep la: "<<sohieu;
	}
};
class Mydate{
	protected:
		int ngay,thang,nam;
	public:
		Mydate(){
		}
		int getNgay(){
			return ngay;
		}
		int getThang(){
			return thang;
		}
		int getNam(){
			return nam;
		}
        void hienthi2(){
		cout<<endl<<ngay<<"-"<<thang<<"-"<<nam; 
	    } 	
};
class Myfile: public MyAttr,public Mydate{
	private:
		string filename;
		int filesize;
    public:
    	Myfile(){}
        void nhap(){
    	cout<<"\nNhap so hieu thong tin tep: ";cin>>sohieu;
    	cout<<"\nNhap ngay: ";cin>>ngay;
		cout<<"\nNhap thang: ";cin>>thang;
		cout<<"\nNhap nam: ";cin>>nam;
		cout<<"\nNhap thong tin file: ";getline(cin,filename);
		cin.get();
    	cout<<"\nNhap kich thuoc file: ";cin>>filesize;
	}

	void hienthi(){
	void hienthi();
	void hienthi2();
		cout<<"\nThong tin file la: "<<filename;
		cout<<"\nKich thuoc file la: "<<filesize;
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
	Myfile arr[4];
	for(int i=0;i<4;i++){
		arr[i].nhap();
	}
	for(int i=0;i<4;i++){
		arr[i].hienthi();
	}
	Myfile max = arr[0];
	
	for(int i=1;i<4;i++){
		int ketqua = soSanh(max,arr[i]);
		if(ketqua == -1){
			max = arr[i];
		}
	}
	cout<<"\nthoi gian lon nhat: ";
	max.hienthi();
	
	

}
