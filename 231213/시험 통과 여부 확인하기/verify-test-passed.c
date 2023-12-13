#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    if(n>=80)
    {
        printf("pass");
    }
    else if(n<80)
    {
        printf("%d more score",80-n);
    }
    return 0;
}