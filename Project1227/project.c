#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 12

typedef struct profile {
    char P_name[20];
    char position[10];
    int Backnum, PlayVal;
}profile;


profile A[MAX] = { {"����", "GK", 1, 10}, {"����", "DF", 2, 35}, {"�ǹ�", "DF", 6, 3},
                    {"�˷м�", "DF", 3, 15}, {"��������", "MF", 5, 45}, {"Ĳ��", "MF", 7, 50},
                    {"Ǯ����", "FW", 10, 45},{"����Ʈ", "MF", 19, 75},{"��ī��", "FW", 9, 100},
                    {"�ڹ�ġġ", "MF", 8, 45},{"���ӽ�", "DF", 24, 55},{"ĥ��", "DF", 21, 38}
};

profile B[MAX] = { {"���������", "MF", 17, 90},{"��Ŀ", "DF", 2, 25},{"��ƽ�", "DF", 3, 75},
                    {"����", "MF", 47, 85} ,{"���潺", "DF", 5, 28} ,{"���и�", "FW", 7, 85} ,
                    {"������", "FW", 26, 40} ,{"������Ʈ", "DF", 14, 45} ,{"�ε帮", "MF", 16, 70} ,
                    {"�׸�����", "MF", 10, 80}
};

profile C[MAX] = { {"�޽�", "FW", 30, 60}, {"���̸���", "FW", 10, 90},{"����������", "DF", 5, 75},
                    {"���̳���", "MF", 18, 25} ,{"����Ƽ", "MF", 6, 55} ,{"���", "DF", 4, 8} ,
                    {"������", "FW", 7, 160}
};

profile D[MAX] = { {"�ٶ�", "DF", 19, 65},{"ȣ����", "FW", 7, 35},{"����", "FW", 25, 85},
                    {"���׹�", "MF", 6, 55} ,{"�Ű��̾�", "DF", 5, 48} ,{"��������", "FW", 10, 45}
};

profile E[MAX] = { {"���", "FW", 11, 100} ,{"�����", "MF", 14, 18}
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
    printf("���α׷� ����\n");

    return 0;
}

int choice_menu()
{
    system("cls");
    printf("\n===���� ���� ���α׷�===\n");
    printf("\n1. ���� ���� ��� \n");
    printf("2. ���� ���� ����\n");
    printf("3. ���\n");
    printf("4. �̸����� �˻� \n");
    printf("5. ������ �˻� \n");
    printf("�޴��� �Է��ϼ���('q' �Է½� ����): ");
}


void menu_1()
{
    int team_choice;
    system("cls");
    printf("(1) A�� (2) B�� (3) C�� (4) D�� (5) E��\n");
    printf("��� ���� ������ ����Ͻðڽ��ϱ�? : ");
    scanf("%d", &team_choice);

    switch (team_choice)
    {
    case 1:

        if (countA == MAX) {
            printf("�� ���� ������ �����ֽ��ϴ�.");
            getch();
            break;
        }

        printf("����� ��� �Ͻðڽ��ϱ�? : ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("���� �̸� : ");
            scanf("%s", A[countA].P_name);
            printf("������ : ");
            scanf("%s", A[countA].position);
            printf("���ȣ : ");
            scanf("%d", &A[countA].Backnum);
            printf("����(��) : ");
            scanf("%d", &A[countA].PlayVal);
            countA++;

            if (countA >= MAX) {
                printf("������ �� á���ϴ�.");
                getch();
                break;
            }
        }
        break;
    case 2:
        if (countB == MAX) {
            printf("�� ���� ������ �����ֽ��ϴ�.");
            getch();
            break;
        }

        printf("����� ��� �Ͻðڽ��ϱ�? : ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("���� �̸� : ");
            scanf("%s", B[countB].P_name);
            printf("������ : ");
            scanf("%s", B[countB].position);
            printf("���ȣ : ");
            scanf("%d", &B[countB].Backnum);
            printf("����(��) : ");
            scanf("%d", &B[countB].PlayVal);
            countB++;

            if (countB >= MAX) {
                printf("������ �� á���ϴ�.");
                getch();
                break;
            }
        }
        break;
    case 3:
        if (countC == MAX) {
            printf("�� ���� ������ �����ֽ��ϴ�.");
            getch();
            break;
        }

        printf("����� ��� �Ͻðڽ��ϱ�? : ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("���� �̸� : ");
            scanf("%s", C[countC].P_name);
            printf("������ : ");
            scanf("%s", C[countC].position);
            printf("���ȣ : ");
            scanf("%d", &C[countC].Backnum);
            printf("����(��) : ");
            scanf("%d", &C[countC].PlayVal);
            countC++;

            if (countC >= MAX) {
                printf("������ �� á���ϴ�.");
                getch();
                break;
            }
        }
        break;
    case 4:
        if (countD == MAX) {
            printf("�� ���� ������ �����ֽ��ϴ�.");
            getch();
            break;
        }

        printf("����� ��� �Ͻðڽ��ϱ�? : ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("���� �̸� : ");
            scanf("%s", D[countD].P_name);
            printf("������ : ");
            scanf("%s", D[countD].position);
            printf("���ȣ : ");
            scanf("%d", &D[countD].Backnum);
            printf("����(��) : ");
            scanf("%d", &D[countD].PlayVal);
            countD++;

            if (countD >= MAX) {
                printf("������ �� á���ϴ�.");
                getch();
                break;
            }
        }
        break;
    case 5:
        if (countE >= MAX) {
            printf("�� ���� ������ �����ֽ��ϴ�.");
            getch();
            break;
        }

        printf("����� ��� �Ͻðڽ��ϱ�? : ");
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("���� �̸� : ");
            scanf("%s", E[countE].P_name);
            printf("������ : ");
            scanf("%s", E[countE].position);
            printf("���ȣ : ");
            scanf("%d", &E[countE].Backnum);
            printf("����(��) : ");
            scanf("%d", &E[countE].PlayVal);

            countE++;

            if (countE >= MAX) {
                printf("������ �� á���ϴ�.");
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
    printf("(1) A�� (2) B�� (3) C�� (4) D�� (5) E��\n");
    printf("��� ���� ������ �����Ͻðڽ��ϱ�? : ");
    scanf("%d", &team_choice);
    switch (team_choice)
    {
    case 1:

        if (countA == 0) {
            printf("�� ���� ������ �ƹ��� �����ϴ�.");
            getch();
            break;
        }

        printf("������ ���� �̸��� �Է��ϼ��� : ");
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
            printf("�ش� ������ �����ϴ�.");
            getch();
            break;
        }

        printf("������ �Ϸ�Ǿ����ϴ�.");
        getch();
        break;
    case 2:
        if (countB == 0) {
            printf("�� ���� ������ �ƹ��� �����ϴ�.");
            getch();
            break;
        }

        printf("������ ���� �̸��� �Է��ϼ��� : ");
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
            printf("�ش� ������ �����ϴ�.");
            getch();
            break;
        }

        printf("������ �Ϸ�Ǿ����ϴ�.");
        getch();
        break;
    case 3:
        if (countC == 0) {
            printf("�� ���� ������ �ƹ��� �����ϴ�.");
            getch();
            break;
        }

        printf("������ ���� �̸��� �Է��ϼ��� : ");
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
            printf("�ش� ������ �����ϴ�.");
            getch();
            break;
        }

        printf("������ �Ϸ�Ǿ����ϴ�.");
        getch();
        break;
    case 4:
        if (countD == 0) {
            printf("�� ���� ������ �ƹ��� �����ϴ�.");
            getch();
            break;
        }

        printf("������ ���� �̸��� �Է��ϼ��� : ");
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
            printf("�ش� ������ �����ϴ�.");
            getch();
            break;
        }

        printf("������ �Ϸ�Ǿ����ϴ�.");
        getch();
        break;
    case 5:
        if (countE == 0) {
            printf("�� ���� ������ �ƹ��� �����ϴ�.");
            getch();
            break;
        }

        printf("������ ���� �̸��� �Է��ϼ��� : ");
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
            printf("�ش� ������ �����ϴ�.");
            getch();
            break;
        }

        printf("������ �Ϸ�Ǿ����ϴ�.");
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
        printf("%2d��.\t%8s\t��%3dm\n", j + 1, p[j].P_name, p[j].PlayVal);

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
        printf("���ܰ�ġ %d�� �� : %s\t���ܰ�ġ :  ��%dm\n", j + 1, max2[j], max1[j]);

    getch();
}


int Profi() {

    int opt;
    int Topt;

    system("cls");

    while (1) {
        system("cls");
        printf("1.�� �� ��ü  ���� ���\n");
        printf("2.���� ���� ������ ���\n");
        printf("3.���� ��ġ ������ ���\n");
        printf("4.���� �޴��� �̵�\n");
        printf("���ϴ� �޴� ��ȣ�� �Է��ϼ��� : ");
        scanf("%d", &opt);
        if (opt == 1) {
            system("cls");
            printf("1�� �޴� ����\n");
            printf("���Ͻô� ���� �Է����ּ��� : ");
            printf("(1) A (2) B (3) C (4) D (5) E\n");
            scanf("%d", &Topt);
            if (Topt == 1) {
                puts("=================  A  ================\n");
                puts("     �̸�     ���ȣ\t������\t����\n");
                puts("======================================");
                for (int i = 0; i < countA; i++)
                    printf("%10s\t%2d\t%2s\t��%3dm\n", A[i].P_name, A[i].Backnum, A[i].position, A[i].PlayVal);
                getch();
            }
            else if (Topt == 2) {
                puts("=================  B  ================\n");
                puts("     �̸�     ���ȣ\t������\t����\n");
                puts("======================================");
                for (int i = 0; i < countB; i++)
                    printf("%10s\t%2d\t%2s\t��%3dm\n", B[i].P_name, B[i].Backnum, B[i].position, B[i].PlayVal);
                getch();
            }
            else if (Topt == 3) {
                puts("=================  C  ================\n");
                puts("     �̸�     ���ȣ\t������\t����\n");
                puts("======================================");
                for (int i = 0; i < countC; i++)
                    printf("%10s\t%2d\t%2s\t��%3dm\n", C[i].P_name, C[i].Backnum, C[i].position, C[i].PlayVal);
                getch();
            }
            else if (Topt == 4) {
                puts("=================  D  ================\n");
                puts("     �̸�     ���ȣ\t������\t����\n");
                puts("======================================");
                for (int i = 0; i < countD; i++)
                    printf("%10s\t%2d\t%2s\t��%3dm\n", D[i].P_name, D[i].Backnum, D[i].position, D[i].PlayVal);
                getch();
            }
            else if (Topt == 5) {
                puts("=================  E  ================\n");
                puts("     �̸�     ���ȣ\t������\t����\n");
                puts("======================================");
                for (int i = 0; i < countE; i++)
                    printf("%10s\t%2d\t%2s\t��%3dm\n", E[i].P_name, E[i].Backnum, E[i].position, E[i].PlayVal);
                getch();
            }

        }
        else if (opt == 2) {
            printf("2�� �޴� ����\n");
            Sum_Team(&A, &B, &C, &D, &E, &F);
            Seeval(F, countF);
        }
        else if (opt == 3) {
            printf("3�� �޴� ����\n");
            Sumof(A, B, C, D, E);

        }
        else if (opt == 4) {
            break;
        }
        else {
            printf("�߸��� �Է��Դϴ�.\n");
        }

    }
    return choice_menu();
}

void nameSearch() {

    char name[20];
    int i = 0;

    printf("�˻��� ������ �̸��� �Է����ּ���: ");
    scanf("%s", name);
    int check = 0;

    for (i = 0; i < MAX; i++) {
        if (strcmp(name, A[i].P_name) == 0) {
            printf("�˻��� ������ ����\n");
            printf("�� : A  �̸� : %s  ������ : %s  ��ȣ : %d  ���� : ��%dm\n", A[i].P_name, A[i].position, A[i].Backnum, A[i].PlayVal);
            check++;

        }
        else if (strcmp(name, B[i].P_name) == 0) {
            printf("�˻��� ������ ����\n");
            printf("�� : B �̸� : %s ������ : %s ��ȣ : %d ���� : ��%dm\n", B[i].P_name, B[i].position, B[i].Backnum, B[i].PlayVal);
            check++;
        }
        else if (strcmp(name, C[i].P_name) == 0) {
            printf("�˻��� ������ ����\n");
            printf("�� : C �̸� : %s ������ : %s ��ȣ : %d ���� : ��%dm\n", C[i].P_name, C[i].position, C[i].Backnum, C[i].PlayVal);
            check++;
        }
        else if (strcmp(name, D[i].P_name) == 0) {
            printf("�˻��� ������ ����\n");
            printf("�� : D �̸� : %s ������ : %s ��ȣ : %d ���� : ��%dm\n", D[i].P_name, D[i].position, D[i].Backnum, D[i].PlayVal);
            check++;
        }
        else if (strcmp(name, E[i].P_name) == 0) {
            printf("�˻��� ������ ����\n");
            printf("�� : E �̸� : %s ������ : %s ��ȣ : %d ���� : ��%dm\n", E[i].P_name, E[i].position, E[i].Backnum, E[i].PlayVal);
            check++;
        }

    }
    if (check == 0) {
        puts("�˻��� ������ �����ϴ�.");
    }
    getch();

    return choice_menu();
}

void Position_Search() {


    char position[20];
    int i = 0;

    printf("�˻��� �������� �Է����ּ���: ");
    scanf("%s", position);
    int check = 0;

    for (i = 0; i < MAX; i++) {
        if (strcmp(position, A[i].position) == 0) {
            printf("�� : A\t�̸�: %10s\t������: %2s\t���ȣ: %2d\t����: ��%3dm\n", A[i].P_name, A[i].position, A[i].Backnum, A[i].PlayVal);
            check++;

        }
    }
    for (i = 0; i < MAX; i++) {
        if (strcmp(position, B[i].position) == 0) {
            printf("�� : B\t�̸�: %10s\t������: %2s\t���ȣ: %2d\t����: ��%3dm\n", B[i].P_name, B[i].position, B[i].Backnum, B[i].PlayVal);
            check++;
        }
    }
    for (i = 0; i < MAX; i++) {
        if (strcmp(position, C[i].position) == 0) {
            printf("�� : C\t�̸�: %10s\t������: %2s\t���ȣ: %2d\t����: ��%3dm\n", C[i].P_name, C[i].position, C[i].Backnum, C[i].PlayVal);
            check++;
        }
    }
    for (i = 0; i < MAX; i++) {
        if (strcmp(position, D[i].position) == 0) {
            printf("�� : D\t�̸�: %10s\t������: %2s\t���ȣ: %2d\t����: ��%3dm\n", D[i].P_name, D[i].position, D[i].Backnum, D[i].PlayVal);
            check++;
        }
    }
    for (i = 0; i < MAX; i++) {
        if (strcmp(position, E[i].position) == 0) {
            printf("�� : E\t�̸�: %10s\t������: %2s\t���ȣ: %2d\t����: ��%3dm\n", E[i].P_name, E[i].position, E[i].Backnum, E[i].PlayVal);
            check++;
        }
    }

    if (check == 0) {
        puts("�˻��� �������� �����ϴ�.");
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