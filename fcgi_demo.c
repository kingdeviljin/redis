#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include "fcgi_stdio.h"
int main(int argc,char *argv[])
{
    int count=0;
    while(FCGI_Accept()>=0){
        printf("content_type:text/html\r\n");
        printf("\r\n");

        printf("<title>Fast CGI Hello!</title>");
        printf("<h1>Fast CGI Hello!</h1>");

        printf("Request number %d running on host<i>%s</i>,remote_addr=%s,remote_port=%s\n",++count,getenv("SERVER_NAME"),getenv("REMOTE_ADDR"),getenv("REMOTE_PORT"));

        printf("query_string :%s\r\n",getenv("QUERY_STRING"));
    }
    return 0;
}
