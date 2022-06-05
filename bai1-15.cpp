#include<iostream>
using namespace std;
class PS{
	private:
		int ts, ms;
	public:
		void nhap(){
			cout<<"\nnhap tu so: ";cin>>ts;
			cout<<"\nnhap mau so: ";cin>>ms;
		}
		void xuat(){
			cout<<ts<<"/"<<ms;
		}
		bool operator>=(PS ps){
			float result1 = this->ts/(float)this->ms;
			float result2 = ps.ts/(float)ps.ms;
			return result1 >= result2;
		}
};
int main(){
	PS arr[5];
	for(int i = 0; i<5;i++){
		cout<<"\nnhap phan so thu "<<i+1<<": ";
		arr[i].nhap();
	}
	
	for(int i = 0; i<5;i++){
		cout<<"\nphan so thu "<<i+1<<": ";
		arr[i].xuat();
	}
	
	PS max= arr[0];
	for(int i = 1;i<5;i++){
		if(arr[i] >= max)
			max = arr[i];
	}
	cout<<"\nphan so lon nhat: ";
	max.xuat();
}
