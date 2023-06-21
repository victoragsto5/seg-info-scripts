#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, *argv[])
{

  int mysocket;
  int plug;

  int port;
  int start = 0;
  int final = 65535;
  char *destiny;
  destiny = argv[1];

  struct sockaddr_in target;

  for (port = start; port < final; port++)
  {

    mysocket = socket(AF_INET, SOCK_STREAM, 0);
    target.sin_family = AF_INET;
    target.sin_port = htons(port);
    target.sin_addr.s_addr = inet_addr(destiny);

    plug = connect(mysocket, (struct sockaddr *)&target, sizeof target);

    if (plug == 0)
    {
      printf("Port %d - status [Open] \n", port);
      close(mysocket);
      close(plug);
    }
    else
    {
      close(mysocket);
      close(plug);
    }
  }
}