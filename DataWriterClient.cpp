
#include "DataWriterClient.h"
#include "DataReaderServer.h"
std::string DataWriterClient::message = "";

int DataWriterClient::socketFd = 0;
/**
 * @param message1 the message from the simulator
 */
void DataWriterClient::setMessage(const string &message1){
    globalMutex.lock();
    /* Send message to the server */
    int n = static_cast<int>(write(getSocketFD(), message1.c_str(), message1.length()));
    globalMutex.unlock();
    if (n < 0) {
        perror("ERROR writing to socket");
        exit(1);
    }
}
/**
 * @param port we create
 * @param address the ip address.
 */
void DataWriterClient::createConnection(int port, string address){
    int sockfd;
    struct sockaddr_in serv_addr;
    struct hostent *server;

    /* Create a socket point */
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    socketFd = sockfd;
    if (sockfd < 0) {
        perror("ERROR opening socket");
        exit(1);
    }

    server = gethostbyname(address.c_str());

    if (server == NULL) {
        fprintf(stderr, "ERROR, no such host\n");
        exit(0);
    }

    bzero((char *) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    bcopy((char *) server->h_addr, (char *) &serv_addr.sin_addr.s_addr, server->h_length);
    serv_addr.sin_port = htons(port);

    /* Now connect to the server */
    while (connect(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0) {
        // keep trying...
    }
    // connected!
}
