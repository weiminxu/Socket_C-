#include <iostream>
#include <WS2tcpip.h>

#pragma comment(lib, "ws2_32.lib")

using namespace std;

void main() 
{
	//Initialze winsock
	WSADATA wsData;
	WORD ver = MAKEWORD(2,2);

	int WSOK = WSAStartup(ver,&wsData);
	if (WSOK !=0 )
	{
		cerr << "can not initialize winsock! Quitting" << endl;
		return;
	}


	//Create a socket
	SOCKET listening = socket(AF_INET, SOCK_STREAM, 0);
	if (listening == INVALID_SOCKET) 
	{
		cerr << "Can not create a socket! Quitting" << endl;
		return;
	}
	//Bind the ip address and port to an socket
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(5400);
	hint.sin_addr.S_un.S_addr = INADDR_ANY;  //could alse use inet_pton...

	bind(listening, (sockaddr*)&hint, sizeof(hint));

	//Tell Winsock the socket is for listening
	//Wait for a connection
	//Close listening socket
	//While loop:accept and echo message back to client
	//Close the sock
	//Shutdown winsock
}