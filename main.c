#include <stdio.h>

// 최소 구조체 정의
struct Menu {
    char name[50];
    int price;
};

struct Table {
    int isOccupied;  // 0: 빈테이블, 1: 사용중
};

// 전역 변수 (나중에 동적 할당으로 변경 가능)
struct Menu menus[30];  // 최대 30개 메뉴
struct Table tables[10];  // 10개 테이블
int menuCount = 0;

// 기본 함수 선언
void showMainMenu(void);
void menuManagement(void);
void tableManagement(void);
void orderManagement(void);
void salesManagement(void);

int main(void) {
    int choice;
    
    while (1) {
        showMainMenu();
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: menuManagement(); break;
            case 2: tableManagement(); break;
            case 3: orderManagement(); break;
            case 4: salesManagement(); break;
            case 0: return 0;
        }
    }
    return 0;
}

// 기본 함수 구현
void showMainMenu(void) {
    printf("\n=== 중국집 POS 시스템 ===\n");
    printf("1. 메뉴 관리\n");
    printf("2. 테이블 관리\n");
    printf("3. 주문/결제\n");
    printf("4. 매출 관리\n");
    printf("0. 종료\n");
    printf("선택: ");
}

void menuManagement(void) {
    printf("\n메뉴 관리 - 개발 중\n");
}

void tableManagement(void) {
    printf("\n테이블 관리 - 개발 중\n");
}

void orderManagement(void) {
    printf("\n주문/결제 - 개발 중\n");
}

void salesManagement(void) {
    printf("\n매출 관리 - 개발 중\n");
}
