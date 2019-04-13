#include "Client/Client.hpp"
#include "Server/Server.hpp"

/*
 * The server side should also be accessible through Server.hpp in order to create a server instance, not only via the plugin.
 * This server instance takes as creation argument the address of the client instance. This is a constructor parameter whose type is the plugin itself.
 * The plugin just allows the clients which derive from it, to get data from server.
 * This architecture works only fo the server and the client share the same virtual memory => running context
 */

using namespace std;

int main()
{
	Client myClient;
    Server myServer(&myClient, 3.14);
    printFData("myServer ", myServer);
    
    cout<<myClient.getFData()<<endl;
    
    Server cloneServer(myServer);
    cloneServer.setFData(2.71);
    printFData("cloneServer ", cloneServer);
    return 0;
}
