#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 12

typedef struct profile {
    char P_name[20];
    char position[10];
    int Backnum, PlayVal;
}profile;


profile A[MAX] = { {"케파", "GK", 1, 10}, {"뤼디거", "DF", 2, 35}, {"실바", "DF", 6, 3},
                    {"알론소", "DF", 3, 15}, {"조르지뉴", "MF", 5, 45}, {"캉테", "MF", 7, 50},
                    {"풀리식", "FW", 10, 45},{"마운트", "MF", 19, 75},{"루카쿠", "FW", 9, 100},
                    {"코바치치", "MF", 8, 45},{"제임스", "DF", 24, 55},{"칠웰", "DF", 21, 38}
};

profile B[MAX] = { {"데브라위너", "MF", 17, 90},{"워커", "DF", 2, 25},{"디아스", "DF", 3, 75},
                    {"포든", "MF", 47, 85} ,{"스톤스", "DF", 5, 28} ,{"스털링", "FW", 7, 85} ,
                    {"마레즈", "FW", 26, 40} ,{"라포르트", "DF", 14, 45} ,{"로드리", "MF", 16, 70} ,
                    {"그릴리쉬", "MF", 10, 80}
};

profile C[MAX] = { {"메시", "FW", 30, 60}, {"네이마르", "FW", 10, 90},{"마르퀴뇨스", "DF", 5, 75},
                    {"바이날둠", "MF", 18, 25} ,{"베라티", "MF", 6, 55} ,{"라모스", "DF", 4, 8} ,
                    {"음바페", "FW", 7, 160}
};

profile D[MAX] = { {"바란", "DF", 19, 65},{"호날두", "FW", 7, 35},{"산초", "FW", 25, 85},
                    {"포그바", "MF", 6, 55} ,{"매과이어", "DF", 5, 48} ,{"래쉬포드", "FW", 10, 45}
};

profile E[MAX] = { {"살라", "FW", 11, 100} ,{"헨더슨", "MF", 14, 18}
};

profile F[MAX*5];


int n;
static int countA = 12, countB = 10, countC = 7, countD = 6, countE = 2, countF = 0;

int main()
{


    char ch = 0;

    choice_menu();

    while (ch != 'q')
    {
        scanf("%c", &ch);
        processMenu(ch);
        fflush(stdin);
    }
    printf("프로그램 종료\n");

    return 0;
}

int choice_menu()
{
    system("cls");
    printf("\n===선수 관리 프로그램===\n");
    printf("\n1. 선수 정보 등록 \n");
    printf("2. 선수 정보 삭제\n");
    printf("3. 출력\n");
    printf("4. 이름으로 검색 \n");
    printf("5. 포지션 검색 \n");
    printf("메뉴를 입력하세요('q' 입력시 종료): ");
}


void menu_1()
{
    int team_choice;
    system("cls");
    printf("(1) A팀 (2) B팀 (3) C팀 (4) D팀 (5) E팀\n");
    printf("어느 팀에 선수를 등록하시겠습니까? : ");
    scanf("%d", &team_choice);

    switch (team_choice)
    {
    case 1:

        if (countA == MAX) {
            printf("팀 내에 선수가 꽉차있습니다.");
            getch();
            break;
        }

        printf("몇명을 등록 하시겠습니까? : ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("선수 이름 : ");
            scanf("%s", A[countA].P_name);
            printf("포지션 : ");
            scanf("%s", A[countA].position);
            printf("등번호 : ");
            scanf("%d", &A[countA].Backnum);
            printf("몸값(€) : ");
            scanf("%d", &A[countA].PlayVal);
            countA++;

            if (countA >= MAX) {
                printf("선수가 꽉 찼습니다.");
                getch();
                break;
            }
        }
        break;
    case 2:
        if (countB == MAX) {
            printf("팀 내에 선수가 꽉차있습니다.");
            getch();
            break;
        }

        printf("몇명을 등록 하시겠습니까? : ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("선수 이름 : ");
            scanf("%s", B[countB].P_name);
            printf("포지션 : ");
            scanf("%s", B[countB].position);
            printf("등번호 : ");
            scanf("%d", &B[countB].Backnum);
            printf("몸값(€) : ");
            scanf("%d", &B[countB].PlayVal);
            countB++;

            if (countB >= MAX) {
                printf("선수가 꽉 찼습니다.");
                getch();
                break;
            }
        }
        break;
    case 3:
        if (countC == MAX) {
            printf("팀 내에 선수가 꽉차있습니다.");
            getch();
            break;
        }

        printf("몇명을 등록 하시겠습니까? : ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("선수 이름 : ");
            scanf("%s", C[countC].P_name);
            printf("포지션 : ");
            scanf("%s", C[countC].position);
            printf("등번호 : ");
            scanf("%d", &C[countC].Backnum);
            printf("몸값(€) : ");
            scanf("%d", &C[countC].PlayVal);
            countC++;

            if (countC >= MAX) {
                printf("선수가 꽉 찼습니다.");
                getch();
                break;
            }
        }
        break;
    case 4:
        if (countD == MAX) {
            printf("팀 내에 선수가 꽉차있습니다.");
            getch();
            break;
        }

        printf("몇명을 등록 하시겠습니까? : ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("선수 이름 : ");
            scanf("%s", D[countD].P_name);
            printf("포지션 : ");
            scanf("%s", D[countD].position);
            printf("등번호 : ");
            scanf("%d", &D[countD].Backnum);
            printf("몸값(€) : ");
            scanf("%d", &D[countD].PlayVal);
            countD++;

            if (countD >= MAX) {
                printf("선수가 꽉 찼습니다.");
                getch();
                break;
            }
        }
        break;
    case 5:
        if (countE >= MAX) {
            printf("팀 내에 선수가 꽉차있습니다.");
            getch();
            break;
        }

        printf("몇명을 등록 하시겠습니까? : ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("선수 이름 : ");
            scanf("%s", E[countE].P_name);
            printf("포지션 : ");
            scanf("%s", E[countE].position);
            printf("등번호 : ");
            scanf("%d", &E[countE].Backnum);
            printf("몸값(€) : ");
            scanf("%d", &E[countE].PlayVal);

            countE++;

            if (countE >= MAX) {
                printf("선수가 꽉 찼습니다.");
                getch();
                break;
            }
        }
        break;
    }

    return choice_menu();
}

void menu_2()
{
    char name[10];
    int i, team_choice, check = 0;
    system("cls");
    printf("(1) A팀 (2) B팀 (3) C팀 (4) D팀 (5) E팀\n");
    printf("어느 팀에 선수를 방출하시겠습니까? : ");
    scanf("%d", &team_choice);
    switch (team_choice)
    {
    case 1:

        if (countA == 0) {
            printf("팀 내에 선수가 아무도 없습니다.");
            getch();
            break;
        }

        printf("삭제할 선수 이름을 입력하세요 : ");
        scanf("%s", name);

        for (int i = 0; i < countA; i++) {
            if (strcmp(name, A[i].P_name) == 0) {
                for (int j = i; j < countA; j++) {
                    A[j] = A[j + 1];
                }
                countA--;
                check++;
                break;
            }
        }

        if (check == 0) {
            printf("해당 선수가 없습니다.");
            getch();
            break;
        }

        printf("삭제가 완료되었습니다.");
        getch();
        break;
    case 2:
        if (countB == 0) {
            printf("팀 내에 선수가 아무도 없습니다.");
            getch();
            break;
        }

        printf("삭제할 선수 이름을 입력하세요 : ");
        scanf("%s", name);

        for (int i = 0; i < countB; i++) {
            if (strcmp(name, B[i].P_name) == 0) {
                for (int j = i; j < countB; j++) {
                    B[j] = B[j + 1];
                }
                countB--;
                check++;
                break;
            }
        }

        if (check == 0) {
            printf("해당 선수가 없습니다.");
            getch();
            break;
        }

        printf("삭제가 완료되었습니다.");
        getch();
        break;
    case 3:
        if (countC == 0) {
            printf("팀 내에 선수가 아무도 없습니다.");
            getch();
            break;
        }

        printf("삭제할 선수 이름을 입력하세요 : ");
        scanf("%s", name);

        for (int i = 0; i < countC; i++) {
            if (strcmp(name, C[i].P_name) == 0) {
                for (int j = i; j < countC; j++) {
                    C[j] = C[j + 1];
                }
                countC--;
                check++;
                break;
            }
        }

        if (check == 0) {
            printf("해당 선수가 없습니다.");
            getch();
            break;
        }

        printf("삭제가 완료되었습니다.");
        getch();
        break;
    case 4:
        if (countD == 0) {
            printf("팀 내에 선수가 아무도 없습니다.");
            getch();
            break;
        }

        printf("삭제할 선수 이름을 입력하세요 : ");
        scanf("%s", name);

        for (int i = 0; i < countD; i++) {
            if (strcmp(name, D[i].P_name) == 0) {
                for (int j = i; j < countD; j++) {
                    D[j] = D[j + 1];
                }
                countD--;
                check++;
                break;
            }
        }

        if (check == 0) {
            printf("해당 선수가 없습니다.");
            getch();
            break;
        }

        printf("삭제가 완료되었습니다.");
        getch();
        break;
    case 5:
        if (countE == 0) {
            printf("팀 내에 선수가 아무도 없습니다.");
            getch();
            break;
        }

        printf("삭제할 선수 이름을 입력하세요 : ");
        scanf("%s", name);

        for (int i = 0; i < countE; i++) {
            if (strcmp(name, E[i].P_name) == 0) {
                for (int j = i; j < countE; j++) {
                    E[j] = E[j + 1];
                }
                countE--;
                check++;
                break;
            }
        }

        if (check == 0) {
            printf("해당 선수가 없습니다.");
            getch();
            break;
        }

        printf("삭제가 완료되었습니다.");
        getch();
        break;
    }

    return choice_menu();
}

void Sum_Team(profile* A, profile* B, profile* C, profile* D, profile* E, profile* F){
    countF = 0;
    for (int i = 0; i < MAX; i++) {
        F[countF++] = A[i];
        F[countF++] = B[i];
        F[countF++] = C[i];
        F[countF++] = D[i];
        F[countF++] = E[i];
    }
}
void Seeval(profile p[], int b) {
    profile temp;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < b; j++) {
            if (p[j].PlayVal < p[j + 1].PlayVal) {
                temp = p[j + 1];
                p[j + 1] = p[j];
                p[j] = temp;
            }

        }
    }
    system("cls");
    for (int j = 0; j < (countA + countB + countC + countD + countE); j++)
        printf("%2d위.\t%8s\t€%3dm\n", j + 1, p[j].P_name, p[j].PlayVal);

    getch();
}

void Sumof(profile a[], profile b[], profile c[], profile d[], profile f[]) {
    int suma = 0;
    int sumb = 0;
    int sumc = 0;
    int sumd = 0;
    int sumf = 0;
    int temp1;
    char* temp2;

    for (int i = 0; i < MAX; i++) {
        suma += a[i].PlayVal;
        sumb += b[i].PlayVal;
        sumc += c[i].PlayVal;
        sumd += d[i].PlayVal;
        sumf += f[i].PlayVal;
    }
    system("cls");
    int max1[] = { suma, sumb, sumc, sumd, sumf };
    char* max2[10] = { "A", "B", "C", "D", "E" };
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (max1[i] < max1[j]) {
                temp1 = max1[i];
                max1[i] = max1[j];
                max1[j] = temp1;
                temp2 = max2[i];
                max2[i] = max2[j];
                max2[j] = temp2;
            }
        }
    }
    for (int j = 0; j < 5; j++)
        printf("구단가치 %d위 팀 : %s\t구단가치 :  €%dm\n", j + 1, max2[j], max1[j]);

    getch();
}


int Profi() {

    int opt;
    int Topt;

    system("cls");

    while (1) {
        system("cls");
        printf("1.팀 별 전체  선수 출력\n");
        printf("2.선수 몸값 순으로 출력\n");
        printf("3.구단 가치 순으로 출력\n");
        printf("4.이전 메뉴로 이동\n");
        printf("원하는 메뉴 번호를 입력하세요 : ");
        scanf("%d", &opt);
        if (opt == 1) {
            system("cls");
            printf("1번 메뉴 실행\n");
            printf("원하시는 팀을 입력해주세요 : ");
            printf("(1) A (2) B (3) C (4) D (5) E\n");
            scanf("%d", &Topt);
            if (Topt == 1) {
                puts("=================  A  ================\n");
                puts("     이름     등번호\t포지션\t몸값\n");
                puts("======================================");
                for (int i = 0; i < countA; i++)
                    printf("%10s\t%2d\t%2s\t€%3dm\n", A[i].P_name, A[i].Backnum, A[i].position, A[i].PlayVal);
                getch();
            }
            else if (Topt == 2) {
                puts("=================  B  ================\n");
                puts("     이름     등번호\t포지션\t몸값\n");
                puts("======================================");
                for (int i = 0; i < countB; i++)
                    printf("%10s\t%2d\t%2s\t€%3dm\n", B[i].P_name, B[i].Backnum, B[i].position, B[i].PlayVal);
                getch();
            }
            else if (Topt == 3) {
                puts("=================  C  ================\n");
                puts("     이름     등번호\t포지션\t몸값\n");
                puts("======================================");
                for (int i = 0; i < countC; i++)
                    printf("%10s\t%2d\t%2s\t€%3dm\n", C[i].P_name, C[i].Backnum, C[i].position, C[i].PlayVal);
                getch();
            }
            else if (Topt == 4) {
                puts("=================  D  ================\n");
                puts("     이름     등번호\t포지션\t몸값\n");
                puts("======================================");
                for (int i = 0; i < countD; i++)
                    printf("%10s\t%2d\t%2s\t€%3dm\n", D[i].P_name, D[i].Backnum, D[i].position, D[i].PlayVal);
                getch();
            }
            else if (Topt == 5) {
                puts("=================  E  ================\n");
                puts("     이름     등번호\t포지션\t몸값\n");
                puts("======================================");
                for (int i = 0; i < countE; i++)
                    printf("%10s\t%2d\t%2s\t€%3dm\n", E[i].P_name, E[i].Backnum, E[i].position, E[i].PlayVal);
                getch();
            }

        }
        else if (opt == 2) {
            printf("2번 메뉴 실행\n");
            Sum_Team(&A, &B, &C, &D, &E, &F);
            Seeval(F, countF);
        }
        else if (opt == 3) {
            printf("3번 메뉴 실행\n");
            Sumof(A, B, C, D, E);

        }
        else if (opt == 4) {
            break;
        }
        else {
            printf("잘못된 입력입니다.\n");
        }

    }
    return choice_menu();
}

void nameSearch() {

    char name[20];
    int i = 0;

    printf("검색할 선수의 이름을 입력해주세요: ");
    scanf("%s", name);
    int check = 0;

    for (i = 0; i < MAX; i++) {
        if (strcmp(name, A[i].P_name) == 0) {
            printf("검색한 선수의 정보\n");
            printf("팀 : A  이름 : %s  포지션 : %s  번호 : %d  몸값 : €%dm\n", A[i].P_name, A[i].position, A[i].Backnum, A[i].PlayVal);
            check++;

        }
        else if (strcmp(name, B[i].P_name) == 0) {
            printf("검색한 선수의 정보\n");
            printf("팀 : B 이름 : %s 포지션 : %s 번호 : %d 몸값 : €%dm\n", B[i].P_name, B[i].position, B[i].Backnum, B[i].PlayVal);
            check++;
        }
        else if (strcmp(name, C[i].P_name) == 0) {
            printf("검색한 선수의 정보\n");
            printf("팀 : C 이름 : %s 포지션 : %s 번호 : %d 몸값 : €%dm\n", C[i].P_name, C[i].position, C[i].Backnum, C[i].PlayVal);
            check++;
        }
        else if (strcmp(name, D[i].P_name) == 0) {
            printf("검색한 선수의 정보\n");
            printf("팀 : D 이름 : %s 포지션 : %s 번호 : %d 몸값 : €%dm\n", D[i].P_name, D[i].position, D[i].Backnum, D[i].PlayVal);
            check++;
        }
        else if (strcmp(name, E[i].P_name) == 0) {
            printf("검색한 선수의 정보\n");
            printf("팀 : E 이름 : %s 포지션 : %s 번호 : %d 몸값 : €%dm\n", E[i].P_name, E[i].position, E[i].Backnum, E[i].PlayVal);
            check++;
        }

    }
    if (check == 0) {
        puts("검색한 선수가 없습니다.");
    }
    getch();

    return choice_menu();
}

void Position_Search() {


    char position[20];
    int i = 0;

    printf("검색할 포지션을 입력해주세요: ");
    scanf("%s", position);
    int check = 0;

    for (i = 0; i < MAX; i++) {
        if (strcmp(position, A[i].position) == 0) {
            printf("팀 : A\t이름: %10s\t포지션: %2s\t등번호: %2d\t몸값: €%3dm\n", A[i].P_name, A[i].position, A[i].Backnum, A[i].PlayVal);
            check++;

        }
    }
    for (i = 0; i < MAX; i++) {
        if (strcmp(position, B[i].position) == 0) {
            printf("팀 : B\t이름: %10s\t포지션: %2s\t등번호: %2d\t몸값: €%3dm\n", B[i].P_name, B[i].position, B[i].Backnum, B[i].PlayVal);
            check++;
        }
    }
    for (i = 0; i < MAX; i++) {
        if (strcmp(position, C[i].position) == 0) {
            printf("팀 : C\t이름: %10s\t포지션: %2s\t등번호: %2d\t몸값: €%3dm\n", C[i].P_name, C[i].position, C[i].Backnum, C[i].PlayVal);
            check++;
        }
    }
    for (i = 0; i < MAX; i++) {
        if (strcmp(position, D[i].position) == 0) {
            printf("팀 : D\t이름: %10s\t포지션: %2s\t등번호: %2d\t몸값: €%3dm\n", D[i].P_name, D[i].position, D[i].Backnum, D[i].PlayVal);
            check++;
        }
    }
    for (i = 0; i < MAX; i++) {
        if (strcmp(position, E[i].position) == 0) {
            printf("팀 : E\t이름: %10s\t포지션: %2s\t등번호: %2d\t몸값: €%3dm\n", E[i].P_name, E[i].position, E[i].Backnum, E[i].PlayVal);
            check++;
        }
    }

    if (check == 0) {
        puts("검색한 포지션이 없습니다.");
    }
    getch();
    return choice_menu();
}

void menu_5()
{

    return choice_menu();
}

int processMenu(char choice)
{
    switch (choice)
    {
    case '1':
        menu_1();
        break;

    case '2':
        menu_2();
        break;

    case '3':
        Profi();
        break;

    case '4':
        nameSearch();
        break;

    case '5':
        Position_Search();
        break;
    }
}