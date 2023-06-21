#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{

  if (argc <= 1)
  {
    printf("Usage mode: ./resolver www.website.com\n");
    return 0;
  }
  else
  {
    struct hostent *target = gethostbyname(argv[1]);

    if (target == NULL)
    {
      printf("An error occour :( \n");
    }
    else
    {
      printf("IP: %s\n", inet_ntoa(*((struct in_addr *)alvo->h_addr)));
    }
  }
}