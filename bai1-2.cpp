#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		void nhap(){
			cout<<"nhap a: ";cin>>a;
			cout<<"nhap b: ";cin>>b;
		}
		void xuat(){
			cout<<a<<"+"<<b<<"i";
		}
		int getA(){
			return a;
		}
		int getB(){
			return b;
		}
};
int main(){
	int n;
	cout<<"nhap so luong: ";cin>>n;
	Complex arr[n];
	for(int i=0;i<n;i++){
		cout<<"\nnhap so phuc thu "<<i+1<<": \n";
		arr[i].nhap();
	}
	for(int i=0;i<n;i++){
		cout<<"\nso phuc thu "<<i+1<<": \n";
		arr[i].xuat();
	}
	
	cout<<"\ntong cac so phuc: ";
	
	int tongA=0;
	int tongB=0;
	for(int i=0;i<n;i++){
		tongA = tongA+arr[i].getA();
		tongB = tongB+arr[i].getB();
	}
	cout<<endl<<tongA<<"+"<<tongB<<"i";
	
	
}
