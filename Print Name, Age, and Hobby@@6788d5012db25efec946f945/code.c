#include <stdio.h>

int main() {
    char name[10000], hobby[10000];
    int age;
    scanf("%s %d %s", &name,&age,&hobby);
    printf("Name: %s", name);
    printf("Age: %d", age);
    printf("Hobby: %s", hobby);
    return 0;
}