#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
struct hocsinh{
	char hoten[50],ngaysinh[50],lop[50];
	int mahs,sobuoian;
	float tongtien;
};
void nhapds(int &n,hocsinh hs[]){
	cout<<"nhap so luong hoc sinh: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"nhap hoc sinh thu: "<<i+1<<endl;
		cout<<"nhap ho ten hoc sinh: ";
		cin.ignore();
		cin.getline(hs[i].hoten,50);
		cout<<"nhap ngay sinh: ";
		cin.getline(hs[i].ngaysinh,50);
		cout<<"nhap lop: ";
		cin.getline(hs[i].lop,50);
		cout<<"nhap ma hoc sinh: ";
		cin>>hs[i].mahs;
		cout<<"nhap so buoi an: ";
		cin>>hs[i].sobuoian;
		hs[i].tongtien=hs[i].sobuoian*25000;
	}
}
void inds(int n,hocsinh hs[]){
	cout<<setw(20)<<"ho ten"<<setw(20)<<"ngay sinh"<<setw(15)<<"lop"<<setw(20)
	<<"ma hoc sinh"<<setw(20)<<"so buoi an"<<setw(20)<<"tong tien"<<endl;
for(int i=0;i<n;i++){
	cout<<setw(20)<<hs[i].hoten<<setw(20)<<hs[i].ngaysinh<<setw(15)<<hs[i].lop<<
	setw(20)<<hs[i].mahs<<setw(20)<<hs[i].sobuoian<<setw(20)<<hs[i].tongtien<<endl;
	} 
}
float tinhtong(int n,hocsinh hs[]){
	float tong=0;
	for(int i=0;i<n;i++){
		tong+=hs[i].tongtien;
	}
	return tong;
}
void timkiem(int n,hocsinh hs[],char hoten[]){
	bool check=false;
	cout<<setw(20)<<"ho ten"<<setw(20)<<"ngay sinh"<<setw(15)<<"lop"<<setw(20)
	<<"ma hoc sinh"<<setw(20)<<"so buoi an"<<setw(20)<<"tong tien"<<endl;
	for(int i=0;i<n;i++){
		if(strcmp(hoten,hs[i].hoten)==0){
			inds(i,hs);
			check=true;
		}
	}
	if(!check){
		cout<<"khong tim thay hoc sinh ";
	}
}
int main(){
	hocsinh hs[100];
	int n;
	nhapds(n,hs);
	inds(n,hs);
	//tinh tong
	cout<<"\n tong tien an ban tru la: "<<tinhtong(n,hs);
	tinhtong(n,hs);
	//tim kiem
	char hoten[50];
	cout<<"\n nhap ho ten hoc sinh tim kiem: ";
	cin.ignore();
	cin.getline(hoten,50);
	cout<<"\n thong tin hoc sinh vua tim: ";
	timkiem(n,hs,hoten);
	return 0;
	
}
