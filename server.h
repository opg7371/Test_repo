/* Building a Libevent Server for testing its capacity */
#include <event.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fnctl.h>
#include <unistd.h>

#define SERVER_PORT 8080

int debug = 0;

/* This structure will contain the data with respect ot the client 
   which will connect with us. */
struct client {


};
