#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(){
    char text[30]="";
    int fd;
    
    //sleep(2);
    while(1){
        fd=open("/tmp/myfifo",O_RDONLY);
        read(fd,text,30);
        if(strlen(text)!=0){
        printf("Client received: %s\n",text);
        }
        close(fd);
    }
}
