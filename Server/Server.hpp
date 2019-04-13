#ifndef SERVER_HPP
#define SERVER_HPP

#include <iostream>
#include <string>
#include "../Server_Client_Plugins/IPlugin.hpp"

class Server
{
private:
    float fData;

public:
    //default c-tor
    Server(IPlugin *ptr_iface = nullptr, float inData = 0.0);
    //copy c-tor
    Server(Server& inServer);
    //assignment operator
    Server& operator=(Server& inServer);

    //getter
    inline float getFData();
    //setter
    inline void setFData(float inData);
    
    //print method
    friend void printFData(std::string server_name, Server& inServer);
};

inline float Server::getFData()
{
    return fData;
}

inline void Server::setFData(float inData)
{
	fData = inData;
}
#endif //SERVER_HPP
