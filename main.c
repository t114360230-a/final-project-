#include <stdio.h>
#include <stdlib.h>

void addRecord();
void showRecords();

int main() {
    int choice;
    while (1) {
        printf("\n=== 記帳系統（C） ===\n");
        printf("1. 新增記帳\n");
        printf("2. 查看記帳\n");
        printf("3. 離開\n");
        printf("選擇：");
        scanf("%d", &choice);

        if (choice == 1) addRecord();
        else if (choice == 2) showRecords();
        else if (choice == 3) exit(0);
        else printf("無效輸入\n");
    }
}
