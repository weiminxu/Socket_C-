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
	//Bind the socket to an ip address and port
	//Tell Winsock the socket is for listening
	//Wait for a connection
	//Close listening socket
	//While loop:accept and echo message back to client
	//Close the sock
	//Shutdown winsock
}