#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
struct xe{
	char tenxe[50],mauxe[50];
	int sochongoi,namsx;
	float giathue;
};
void nhapds(int &n,xe ds[]){
	cout<<"\n nhap so xe: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"nhap xe thu: "<<i+1<<endl;
		cout<<"nhap ten xe: ";
		cin.ignore();
		cin.getline(ds[i].tenxe,50);
		cout<<"nhap mau xe: ";
		cin.getline(ds[i].mauxe,50);
		cout<<"nhap so cho ngoi: ";
		cin>>ds[i].sochongoi;
		cout<<"nhap nam san xuat: ";
		cin>>ds[i].namsx;
		cout<<"nhap gia thue: ";
		cin>>ds[i].giathue;
		cout<<endl;+ 
	}
}
void inds(int n,xe ds[]){
	cout<<setw(10)<<"ten xe"<<setw(10)<<"mau xe"<<setw(4)
	<<"so cho ngoi"<<setw(7)<<"nam san xuat"<<setw(10)<<"gia cho thue"<<endl;
for(int i=0;i<n;i++){
	cout<<setw(10)<<ds[i].tenxe<<setw(10)<<ds[i].mauxe<<setw(4)<<ds[i].sochongoi
	<<setw(7)<<ds[i].namsx<<setw(10)<<ds[i].giathue<<endl;
	} 
}
void xoaxecachNnam(int n,xe ds[]){
	int N;
	cout<<"\n nhap N: ";
	cin>>N;
	for(int i=0;i<n;i++)
	if(2021-ds[i].namsx==N)
	{
		for(int j=i;j<n;j++)
		ds[i]=ds[j+1];
		n--;
	}
	inds(n,ds);
}
void tanggiaxe(int n,xe ds[])
{
	int Y;
	cout<<"nhap Y: ";cin>>Y;
	for(int i=0;i<n;i++)
	if(ds[i].sochongoi==5&&ds[i].namsx==Y)
	ds[i].giathue=((ds[i].giathue*10)/100.0)+ds[i].giathue;
	inds(n,ds);
}
void menuxe(int n,xe ds[]){
	int chon;
	while(true){
		cout<<"CHUONG TRINH QUAN LY XE "<<endl;
		cout<<"1)nhap danh sach "<<endl;
		cout<<"2)in danh sach "<<endl;
		cout<<"3)xoa xe cach N nam "<<endl;
		cout<<"4)tang gia them 10% cho xe san xuat vao nam Y "<<endl;
		cout<<"nhap lua chon cua ban: "<<endl;
		cin>>chon;
		switch(chon){
			case 1: nhapds(n,ds);break;
			case 2: inds(n,ds);break;
			case 3: xoaxecachNnam(n,ds);
					inds(n,ds);
					break;
			case 4: tanggiaxe(n,ds);
					inds(n,ds);
					break;
			default:cout<<"\n vui long nhap lai: ";
		}
	}
}
int main(){
	xe ds[100];
	int n;
	menuxe(n,ds);
	return 0;
}	
