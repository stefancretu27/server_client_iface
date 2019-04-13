#ifndef IPLUGIN_HPP
#define IPLUGIN_HPP

/*
 * The interface exposes the virtual methods to be implemented by the client.
 * These methods take as inputs the data to be transfered from the server side.
 * The server calls these methods on pointers to the interface.  
 */ 

class IPlugin
{
public:
    virtual void getFloat(float input) = 0;
};


#endif //IPLUGIN_HPP
