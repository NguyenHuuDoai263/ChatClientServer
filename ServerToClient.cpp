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
    SOCKET serverSock;
    sockaddr_in sockAddr,clientAddr;
    int clientAddrLeng=sizeof(clientAddr);
    char buf[BUF_LENGTH];
    int port=1080;
    if(WSAStartup(wVersionRequested,&wsaData)==0){
        serverSock=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
        memset(&sockAddr,0,sizeof(sockAddr));
        sockAddr.sin_family=AF_INET;
        sockAddr.sin_port=htons(port);
        sockAddr.sin_addr.s_addr=htonl(INADDR_ANY);
        bind(serverSock,(sockaddr*)&sockAddr,sizeof(sockAddr));
        printf("Wait for UDP clients ...\n\n");
        //for(int i=1;i<=NPACK;i++){
        while(true){
            if(recvfrom(serverSock,buf,BUF_LENGTH,0,(sockaddr*)&clientAddr,&clientAddrLeng)!=0){
                printf("Received packet from %s:%d. Data : %s\n\n",inet_ntoa(clientAddr.sin_addr),
                    htons(clientAddr.sin_port),buf);
            }
            else
                printf("Missed \n\n");
        }
        closesocket(serverSock);
        WSACleanup();
        setsockopt;
    }
    else
    {
        cout<<"Can not start winsock"<<endl;
    }
    return 0;
}
