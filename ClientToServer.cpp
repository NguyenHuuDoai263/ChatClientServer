#include<iostream>
#include<Winsock2.h>
#include<stdio.h>
#pragma comment(lib,"Ws2_32")
using namespace std;
const unsigned NPACK=10;
const unsigned BUF_LENGTH=512;
int main(){
    WORD wVersionRequested=MAKEWORD(1,1);
    WSADATA wsaData;
    SOCKET clientSock;
    sockaddr_in sockAddr,serverAddr;
    struct hostent* serverHostent;
    char buf[BUF_LENGTH];
    char hostName[256];
    int port=2512;
    if(WSAStartup(wVersionRequested,&wsaData)==0){
        clientSock=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
        cout<<"Enter host name : ";
        cin.getline(hostName,256);
        serverHostent=gethostbyname(hostName);
        if(serverHostent==NULL){
            printf("Can not solve host \n");
        }
        memset(&sockAddr,0,sizeof(sockAddr));
        memcpy(&sockAddr.sin_addr,serverHostent->h_addr,serverHostent->h_length);
        sockAddr.sin_family=serverHostent->h_addrtype;
        sockAddr.sin_port=htons(port);     
 
        for(int i=1;i<=NPACK;i++){
            printf("Send packet %d \n",i);
            sprintf(buf,"This is packets %d",i);
            if(sendto(clientSock,buf,sizeof(buf),0,(sockaddr*)&sockAddr,sizeof(sockAddr))==SOCKET_ERROR){
                printf("Error send\n");
            }
        }
        closesocket(clientSock);
        WSACleanup();
    }
    else
    {
        cout<<"Can not start winsock"<<endl;
    }
    return 0;
}
