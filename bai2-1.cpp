#include<iostream>
using namespace std;
class MyAttr{
	private:
		int soHieu;
	public:
		MyAttr(){
			
		}
		void nhap(){
			cout<<"\nnhap so hieu: ";cin>>soHieu;
		}
		void hienThi(){
			cout<<"\nso hieu thuoc tinh tep: "<<this->soHieu;
		}
};

class Mydate{
	private:
		int ngay,thang,nam;
	public:
		Mydate(){
		}
		void nhap(){
			cout<<"\nnhap ngay: ";cin>>ngay;
			cout<<"\nnhap thang: ";cin>>thang;
			cout<<"\nnhap nam: ";cin>>nam;
		}
		bool operator>(Mydate obj){
			if(this->nam > obj.nam)
				return true;
			else if(this->nam < obj.nam)
				return false;
			else{
				if(this->thang > obj.thang)
					return true;
				else if(this->thang < obj.thang)
					return false;
				else{
					if(this->ngay > obj.ngay)
						return true;
					else if(this->ngay < obj.ngay)
						return false;
					else
						return true;
				}
			}
		}
		int soSanh(Mydate obj){
			if(this->nam > obj.nam){
				return 1;
			}
			else if(this->nam < obj.nam){
				return -1;
			}
			else{
				if(this->thang > obj.thang){
					return 1;
				}
				else if(this->thang < obj.thang){
					return -1;
				}
				else{
					if(this->ngay > obj.ngay){
						return 1;
					}
					else if(this->ngay < obj.ngay){
						return -1;
					}
					else{
						return 0;
					}
				}
			}
		}
		void hienThi(){
			cout<<endl<<ngay<<"-"<<thang<<"-"<<nam;
		}
		Mydate getDate(){
			return *this;
		}
};

class Myfile: public MyAttr, Mydate{
	private:
		char filename[255];
		int filesize;
	public:
		Myfile(){
			
		}
		void nhap(){
			MyAttr::nhap();
			Mydate::nhap();
			cin.get();
			cout<<"\nnhap filename: ";cin.get(filename,255);	
			cout<<"\nnhap filesize: ";cin>>filesize;
			
		}
		void hienThi(){
			cout<<"\nfilename: "<<filename;
			cout<<"\nfilesize: "<<filesize;
			Mydate::hienThi();
			MyAttr::hienThi();
		}
		Mydate getDate(){
			return Mydate::getDate();
		}
};
int main(){
	Myfile myFile[4];
	cout<<"\n==========================NHAP==========================";
	for(int i=0;i<4;i++){
		cout<<"\nnhap thong tin file  thu "<<i+1<<": ";
		myFile[i].nhap();
	}
	cout<<"\n==========================XUAT==========================";
	for(int i=0;i<4;i++){
		cout<<"\nthong tin file  thu "<<i+1<<": ";
		myFile[i].hienThi();
	}
// sap xep
// khong dung toan tu operator
/*	for(int i=0;i<3;i++){
		for(int j=i+1;j<4;j++){
			Mydate myDateI = myFile[i].getDate();
			Mydate myDateJ = myFile[j].getDate();
			if(myDateI.soSanh(myDateJ)==1){
				Myfile temp = myFile[i];
				myFile[i]= myFile[j];
				myFile[j] = temp;
			}
		}
	}*/
	// dung toan tu operator
	for(int i=0;i<3;i++){
			for(int j=i+1;j<4;j++){
				Mydate myDateI = myFile[i].getDate();
				Mydate myDateJ = myFile[j].getDate();
				if(myDateI > myDateJ){
					Myfile temp = myFile[i];
					myFile[i]= myFile[j];
					myFile[j] = temp;
				}
			}
	}
	
	// sau khi sap xep
	cout<<"\n==========================SAP XEP==========================";
	for(int i=0;i<4;i++){
		cout<<"\nthong tin file  thu "<<i+1<<": ";
		myFile[i].hienThi();
	}
}


