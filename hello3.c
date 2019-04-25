#include <string.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
        char* str = "Hello World\n";

        int fd = open("./hello.txt", 0_CREAT|0_RDWR);
                   // 0_CREAT : 파일 없으면 만들고, 0_RDWR : 쓰기 읽기 모드로 열기
        write(fd, str, strlen(str));
        close(fd);

        printf("---> %d\n", fd);
        return 0;
}
