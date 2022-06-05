#include<iostream>
using namespace std;
class Printer{
	private:
		string name;
		int quantity;
		
	public:
		void nhapkho(){
				cout<<"\nnhap vao ten: ";getline(cin,name);
				cout<<"\nnhap vao so luong: ";cin>>quantity;
				cin.get();
		}
		void xuatkho(){
				cout<<"\nten: "<<name;
				cout<<"\nso luong: "<<quantity;
		}
		Printer getPrinter(){
			return *this;
		}
};

class Laser: public Printer{
	protected:
		int dpi;
};
class ColorPrinter: public Printer{
	protected:
		string color;
	public:
		void nhap(){
			Printer::nhapkho();
		}
		void xuat(){
			Printer::xuatkho();
		}
};
class ColorLaser: public Laser, ColorPrinter{
	public:
		void nhap(){
			cout<<"\nnhap dpi: ";cin>>dpi;
			cin.get();
			cout<<"\nnhap color: ";getline(cin,color);
			ColorPrinter::nhap();
		}
		void xuat(){
			cout<<"\ndpi: "<<dpi;
			cout<<"\ncolor: "<<color;
			ColorPrinter::xuat();
		}
	
};

int main(){
	ColorLaser colorLaser[3];
	for(int i=0;i<3;i++){
		cout<<"\nnhap color laser thu "<<i+1<<": ";
		colorLaser[i].nhap();
	}
	for(int i=0;i<3;i++){
		colorLaser[i].xuat();
	}
}
