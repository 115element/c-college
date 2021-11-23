#include <stdio.h>
#include <windows.h>

int main() {
    MessageBox(NULL, "hello，world！", "title",MN_GETHMENU);
    printf("Hello, World!\n");
    return 0;
}