#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    if(n<0)
    {
        printf("%d\n",n);
        printf("minus");
    }
    else
    {
        printf("%d",n);
    }
    return 0;
}