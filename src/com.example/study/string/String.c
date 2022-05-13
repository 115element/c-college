
#include <stdio.h>
#include <string.h>

enum bool {
    false, true
};

int main() {

    char s1[] = {"123455"};
    printf("%s", s1);

    char *s2 = "123455";
    printf("%s \n", s2);

    //判断两个字符串是否相等
    int i = strcmp(s1, s2);
    printf("%d", i);


    //字符串拼接
    char src[50], dest[50];
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");
    strcat(dest, src);
    printf("最终的目标字符串： |%s|", dest);

    return 0;
}