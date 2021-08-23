#include<iostream>
using namespace std;
void nhap(int a[][100],int hang ,int cot){
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			cout<<"moi nhap a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
}
void xuat(int a[][100],int hang ,int cot){
	cout<<"Mang vua nhap la: "<<endl;
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int tongchan(int a[][100],int &hang, int cot){
	int s=0;
	for(int i=0;i<hang;i++){
		for(int j=0;j<cot;j++){
			if(a[i][j]%2==0){
				s+=a[i][j];
			}
		}
	}
	cout<<"tong chan la: "<<s<<endl;;
}
void xoahang(int a[][100],int &hang, int cot){
    int k;
    cout<<"Moi nhap hang can xoa: ";
    cin>>k;
    for(int i=k;i<hang-1;i++){
        for(int j=0;j<cot;j++){
            a[i][j]=a[i+1][j];
        }
    }
    hang--;
    xuat(a,hang,cot);
}
int main(){
	int a[100][100],hang,cot;
	cout<<"nhap hang: ";
	cin>>hang;
	cout<<"nhap cot: ";
	cin>>cot;
	nhap(a,hang,cot);
	xuat(a,hang,cot);
	tongchan(a,hang,cot);
	xoahang(a,hang,cot);
	return 0;
}
