#include "stdafx.h"

DF_USESTD
void main()
{
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != WSASUCCESS)
		return ;
	cout << "Window Intialize Success!!" << endl;

	SOCKET tcpSock = socket(AF_INET, SOCK_STREAM, 0);
	if (tcpSock != INVALID_SOCKET)
		cout << "Sock Create Succesed" << endl;
	else
		cout << "Sock Create Fail" << endl;

	cout << "Test Branch End" << endl;

	closesocket(tcpSock);
	WSACleanup();
	//socket(AF_INET,SOCK_STREAM,)






}