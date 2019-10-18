#include <stdio.h>
int i=0;

int binary (int n) {
    if(n!=0) {
        binary(n/2);
        printf("%d",n%2);

    }
}

int main(){
    int n;
    scanf("%d",&n);
    if (n == 0) {
        printf("0000");
    }
    binary(n);
    return 0;
}
