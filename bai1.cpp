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
		void cong (Complex c1,Complex c2){
			int a = c1.getA()+c2.getA();
			int b = c1.getB()+c2.getB();
			
			cout<<"\ncong: "<<a<<"+"<<b<<"i";
		}
		void tru (Complex c1,Complex c2){
			string cal = "";
			int a = c1.getA()-c2.getA();
			int b = c1.getB()-c2.getB();
			if(b>0){
				cal = "+";
			}
			cout<<"\ntru: "<<a<<cal<<b<<"i";
		}
};
int main(){
	Complex x;
	Complex y;
	cout<<"\nnhap so phuc 1: \n";
	x.nhap();
	cout<<"\nnhap so phuc 2: \n";
	y.nhap();
	
	cout<<"\nso phuc 1 la: ";
	x.xuat();
	
	cout<<"\nso phuc 2 la: ";
	y.xuat();
	
	
//	Complex z;
//	z.cong(x,y);
//	z.tru(x,y);
	
	// cong
	int a = x.getA()+y.getA();
	int b = x.getB()+y.getB();
	cout<<"\ncong: "<<a<<"+"<<b<<"i";
	
	//tru
	
	string cal = "";
	int a2 = x.getA()-y.getA();
	int b2 = x.getB()-y.getB();
	if(b2>0){
		cal = "+";
	}
	cout<<"\ntru: "<<a2<<cal<<b2<<"i";
	
}
