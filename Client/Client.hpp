#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include "../Server_Client_Plugins/IPlugin.hpp"

class Client:public IPlugin
{
private:
    float fData;

public:
    //default c-tor
    Client(float inData = 0.0);
    //copy c-tor
    Client(Client& inClient);
    //assignment operator
    Client &operator=(Client& inClient);

	virtual void getFloat(float input);
	inline float getFData();
};

inline float Client::getFData()
{
	return fData;
}

#endif //CLIENT_HPP
