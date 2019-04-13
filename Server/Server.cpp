#include "Server.hpp"

Server::Server(IPlugin *ptr_iface, float inData):fData {inData} 
{
	if(ptr_iface)
	{
		ptr_iface->getFloat(fData);
	}
};

Server::Server(Server& inServer):fData {inServer.getFData()}
{
	//no further implementation
};

Server& Server::operator=(Server& inServer)
{
	fData = inServer.fData;
	return *this;
};

void printFData(std::string server_name, Server& inServer)
{
	std::cout << server_name << inServer.fData << std::endl;
};
