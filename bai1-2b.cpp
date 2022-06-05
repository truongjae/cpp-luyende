#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		void nhap(){
			cout<<"\nnhap a:";cin>>a;
			cout<<"\nnhap b:";cin>>b;
		}
		void xuat(){
			cout<<endl<<a<<"+"<<b<<"i";
		}
		Complex operator+(Complex &obj)  {
			Complex cong;
			cong.a =a + obj.a ;
			cong.b =b + obj.b;	
			return cong;
		}
		Complex sum(Complex obj){
			return *this + obj;
		}
};

int main(){
	Complex arr[100];
	int n;
	cout<<"nhap so luong: ";cin>>n;
	for(int i=0;i<n;i++){
		arr[i].nhap();
	}
	cout<<"\n===================XUAT===================";
	for(int i=0;i<n;i++){
		arr[i].xuat();
	}
	
	cout<<"\n===================CONG===================";
	
	Complex tong = arr[0];
	for(int i=1;i<n;i++){
		tong = tong.sum(arr[i]);
	}
	tong.xuat();
	
}
