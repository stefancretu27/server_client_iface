#include "Client.hpp"

Client::Client(float inData):fData {inData}
{
	//
};

Client::Client(Client& inClient):fData {inClient.fData}
{
	//
};

Client& Client::operator=(Client& inClient)
{
	fData = inClient.fData;
	return *this;
}

void Client::getFloat(float input)
{
	fData = input;
};
