#include<iostream>
using namespace std;
class Printer{
	private:
		string name;
		int quantity;
		
	public:
		void nhapkho(Printer p[], int q){
			for(int i=0;i<q;i++){
				cout<<"nhap thong tin printer thu "<<i+1<<": ";
				cin.get();
				cout<<"\nnhap vao ten: ";getline(cin,p[i].name);
				cout<<"nhap vao so luong: ";cin>>p[i].quantity;
			}
		}
		void xuatkho(Printer p[],int q){
			for(int i=0;i<q;i++){
				cout<<"\nvao ten: "<<p[i].name;
				cout<<"\nvao so luong: "<<p[i].quantity;
			}
		}
};

int main(){
	Printer p[100];
	Printer a;
	int q;
	cout<<"nhap so luong trong kho: ";cin>>q;
	a.nhapkho(p,q);
	a.xuatkho(p,q);
}
