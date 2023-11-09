#include <stdio.h>
#include <string.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char st[2][101];
    int i,len=0;
    for(i=0;i<2;i++)
    {
        scanf("%s",st[i]);
        len+=strlen(st[i]);
    }
    printf("%d",len);


    return 0;
}