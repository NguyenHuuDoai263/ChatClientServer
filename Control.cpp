#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	cout<<"\t\t\t CHAO MUNG BAN DEN VOI CLICHAT \n";
	cout<<"Nhap lua chon \n";
	cout<<"\t 1. Create room \n";
	cout<<"\t 2. Join room \n";
	cout<<"\t 3. Exit \n";
	cout<<"Lua chon cua ban la: ";
	int luaChon;
	string ipMd, portMd;
	
	cin>>luaChon;
	switch(luaChon){
		case 1:{
			cout<<"\t Dang lang nghe ket noi tu cong 1080...";
			//goi class Server To Client
			
			break;
		}
		case 2:{
			cout<<"\t Nhap IP may dich ";
			cin>>ipMd;
			cout<<"\t Nhap port may dich ";
			cin>>portMd;
			cout<<"\t Dia chi IP va port vua nhap la: "<<ipMd<<":"<<portMd;
			
			//goi class Client To Server
			
			break;
		}
		case 3:{
			exit(0);
			break;
		}
	}
	
}
