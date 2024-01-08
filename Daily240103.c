/* 24.01.03 *******************************************************************************************************************************************/

/*
#include <stdio.h>	// ���� �̸��� ���� ������ �������� ��

int sum = 1;		// ������ ���� ������ ������ �̸����� ������� �� ���������� �̱��.

int main()
{
	int sum = 0;

	printf("sum = %d\n", sum);

	return;
}
*/

/*
#include <stdio.h>

void fct(void);

int main(void)
{
	int i;
	for (i = 0; i < 5; i++) {
		fct();
	}
	return;
}

void fct(void) {
	//int val = 0;			// 11111 �� ����. for������ ����ɶ����� �޸𸮿��� �Ҹ�Ǿ �ʱ�ȭ��;
	static int val = 0;		// �ѹ��� �ʱ�ȭ ��. ����ƽ�� ���� ������.	// �� �κ� �� ���� �ȵȴ�. val = 0 �κ��� �����ִµ� �� 0�� �ȵǴ°�????
	val++;
	printf("%d ", val);
}
*/


/*
#include <stdio.h>

void sub() {
	static int scount = 0;
	int acount = 0;
	printf("scount = %d  ", scount);	//scount�� static���� ���� ��� +1�� ��.
	printf("acount = %d\n", acount);

	scount++;
	acount++;
}

int main(void) {
	sub();
	sub();
	sub();
	sub();
	sub();

	return 0;
}
*/

/*
#include <stdio.h>

void sub() {
	static int scount;	// �̷��� �ʱ�ȭ �ϸ� �Ѵ� 0�� ����. static�� �� �������� static int scount = 0; �̶�� �ʱ�ȭ�� �ؾ� ȿ���� �ִ� �� ����.
	scount = 0;
	int acount;
	acount = 0;
	printf("scount = %d  ", scount);
	printf("acount = %d\n", acount);

	scount++;
	acount++;
}

int main(void) {
	sub();
	sub();
	sub();
	sub();
	sub();

	return 0;
}
*/




//���� ����� �����ϴ� ����� ��������. �� ����� ���� �Լ� save�� �ۼ��Ͽ� ����. �� �Լ��� ������ �ݾ��� ��Ÿ���� amount���� ������ save(100)�� ���� ȣ��ȴ� ~~ ����
/*
����
*/



/*
#include <stdio.h>		// ���� �Ű����� : �Ű������� ������ �� �տ� �����ְ� �Ű������� ����
#include <stdarg.h>

int sum(int, ...);

int main()
{
	int answer = sum(4, 4, 3, 2, 1);
	printf("���� %d�Դϴ�.\n", answer);

	return;
}

int sum(int num, ...) {
	int answer = 0;
	va_list argptr;
	va_start(argptr, num);
	for (; num > 0; num--) {
		answer += va_arg(argptr, int);
	}
	va_end(argptr);

	return answer;

}
*/


/*
#include <stdio.h>		// ����Լ��� ���丮�� ���ϱ�

long factorial(int n) {
	printf("factorial(%d)\n", n);

	if (n <= 1)return 1;
	else return n * factorial(n - 1);
}

int main(void)
{
	long n;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("%d!�� %d�Դϴ�.\n", n, factorial(n));

	return 0;
}
*/


/*
#include <stdio.h>		// ����Լ��� ���� 1���� n������ �� ���ϱ�

int add(int n) {
	if (n <= 0) return 0;
	else return (n + add(n - 1));
}

int main()
{
	int n, sum;

	printf("1���� n������ ���� ���Ͻÿ� : ");
	scanf("%d", &n);

	sum = add(n);

	printf("%d������ �� : %d", n, sum);

	return 0;
}
*/



//�� ���� ���� m,n�� �Է� �޾Ƽ� n�� m�� ����̸� 1�� ��ȯ�ϰ� �׷��� ������ 0�� ��ȯ�ϴ� �Լ� is_multiple(int n, int m)�� �ۼ��Ͻÿ�
/*
#include <stdio.h>

int is_multiple(int n, int m) {
	if (m % n == 0) return 1;
	else return 0;
}

int main()
{
	int n, m;

	printf("n�� m�� �Է��ϼ��� : ");
	scanf("%d %d", &n, &m);

	if (is_multiple(n, m)) printf("%d�� %d�� ����Դϴ�.", m, n);
	else printf("%d�� %d�� ����� �ƴմϴ�.", m, n);


	return 0;
}
*/



// ���࿡ ��ġ�Ǿ� �ִ� ATM��ġ�� ���α׷����� �����غ���.
// �Ա��ռ� > deposit(), �Աݵ� �ܰ� ����Ͻÿ�.
// ����Լ� > withdraw(), �ܰ� �����Ҷ��� �����ϴٴ� �޽����� ����Ͻÿ�
// �ܾ�, �Ա�, ���, ���Ḧ �����ϴ� �ڵ� choice_num() �Լ��� ����� �Ա��Լ��� ����Լ��� ȣ���ϵ��� �Ͻÿ�
/*
#include <stdio.h>

int money = 0;

void deposit(void) {
	int input;
	printf("�Ա� �ݾ��� �Է��ϼ��� : ");
	scanf("%d", &input);

	money += input;

	printf("�ܰ�� %d�Դϴ�.", money);
}
void withdraw(void) {
	int output;
	printf("��� �ݾ��� �Է��ϼ��� : ");
	scanf("%d", &output);

	money -= output;

	printf("�ܰ�� %d�Դϴ�.", money);


}
int choice_num(void) {
	int a;
	int b = 1;
	while (b) {
		printf("�ܾ�(1), �Ա�(2), ���(3), ����(0)�� �����ϼ���.");
		scanf("%d", &a); //???????????????????????????????????????????????????????????????

		if (a == 1) {
			printf("�ܾ��� %d�Դϴ�.", money);
		}
		else if (a == 2) {
			deposit();
		}
		else if (a == 3) {
			withdraw();
		}
		else {
			b = 0;
			printf("�����մϴ�.\n");
		}
	}



}
int main()
{
	printf("*********** Welcome to Express ATM ***********\n");
	choice_num();

	return 0;
}
*/


/*
#include <stdio.h>		// �迭 �⺻

int main()
{
	int scores[5];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;
	//scores[5] = 60;

	for (int i = 0; i < 5; i++) {
		printf("score[%d] = %d\n", i, scores[i]);
	}

	return 0;
}
*/


/*
#include <stdio.h>		// �迭�� �ʱ�ȭ �ϴ� ��, �ʱ�ȭ �� ������ ����ϴ� ��
#define STUDENTS 5
int main()
{
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) {
		printf("�л����� ������ �Է��ϼ��� : ");
		scanf("%d", &scores[i]);
	}
	for (i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}

	average = sum / STUDENTS;
	printf("���� ��� = %d\n", average);


	return 0;
}
*/


/*
#include <stdio.h>

int main(void)		// �ʱ�ȭ ����� �ʱ�ȭ�� ���� �ʾ��� �� ������ ���� ���� �� Ȯ��
{
	int score1[5] = { 31, 63, 62, 87, 14 };
	int score2[5] = { 31, 63, 62};
	int score3[5];

	int i;

	for (i = 0; i < 5; i++) {
		printf("score1[%d] = %d\n", i, score1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("score2[%d] = %d\n", i, score2[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("score3[%d] = %d\n", i, score3[i]);
	}
	printf("\n");


}
*/




/*
#include <stdio.h>		//a�� b �迭 ���غ���
#define SIZE 5

int main(void)
{
	int i;
	int a[SIZE] = { 1, 2, 3, 4, 5 };
	int b[SIZE] = { 1, 2, 3, 4, 4 };

	for (i = 0; i < SIZE; i++) {
		if (a[i] != b[i]) {
			printf("a[]�� b[]�� ���� �ʽ��ϴ�.\n");
			return 0;
		}
	}
	printf("a[]�� b[]�� �����ϴ�.\n");

	return 0;
}
*/



/*
#include <stdio.h>		// �ֻ��� Ƚ�� ����ϱ� // ���� ���� ���� �� ���� // �ֻ����� 1000�� ������ �� ���� ������ ȹ���� ����ϱ�
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	//int c[1000] = { 0, };
	int count[6] = { 1, 2, 3, 4, 5, 6 };
	int c[6] = { 0 , };
	int a;


	for (int i = 0; i < 1000; i++) {
		a = rand() % 6 + 1;
		for (int p = 0; p < 6; p++) {
			if (count[p] == a) {
				c[p]++;
			}
		}
	}


	for (int p = 0; p < 6; p++) {
		printf("%d���� %d�� ���Խ��ϴ�.\n", p+1, c[p]);
	}

	return 0;
}
*/

// �ֻ��� GPT�� ¥�ذ�
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROLLS 1000
#define DICE_FACES 6

int main() {
	int dice_counts[DICE_FACES] = { 0 }; // �� ���� Ƚ���� ������ �迭 �ʱ�ȭ
	int roll;
	srand(time(NULL)); // ���� ������ �ʱ�ȭ

	for (int i = 0; i < NUM_ROLLS; i++) {
		roll = rand() % DICE_FACES + 1; // 1���� 6������ ���� ����
		dice_counts[roll - 1]++; // �ش� ���� Ƚ�� ����
	}

	// ��� ���
	for (int i = 0; i < DICE_FACES; i++) {
		printf("�� %d: %d��\n", i + 1, dice_counts[i]);
	}

	return 0;
}
*/



/*
#include <stdio.h>		// ���� �¼� �����ϱ�
#define SIZE 10

int main()
{
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 };
	while (1) {
		printf("�¼��� �����Ͻðڽ��ϱ�?(Y or N) : ");
		scanf(" %c", &ans1);

		if (ans1 == 'Y') {
			printf("=============================\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("=============================\n");

			for (i = 0; i < SIZE; i++) {
				printf(" %d", seats[i]);
			}
			printf("\n");
			printf("���° �¼��� �����Ͻðڽ��ϱ�? : ");
			scanf("%d", &ans2);
			if (ans2 <= 0 || ans2 > SIZE) {
				printf("1���� 10������ ���ڸ� �Է��ϼ���\n\n");
				continue;
			}
			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("����Ǿ����ϴ�.\n\n");
			}
			else printf("�̹� ����� �ڸ��Դϴ�.\n\n");
		}
		else if (ans1 == 'N') return 0;
	}

	return 0;
}
*/



/*
#include <stdio.h>		// �迭�� �Լ��� �̿��� �Է°����� ��� ���ϱ�. �迭�� ������ ����. �迭�� ���� �����ϰ� �Լ����� �������͵� ���� ������ ����.
#define STU 5

int get_average(int scores[], int n) {
	int i;
	int sum = 0;

	for (i = 0; i < n; i++) {
		sum += scores[i];
	}
	return sum / n;
}

void input_stu(int scores[]) {
	printf("5���� ������ �Է��ϼ��� : ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &scores[i]);
	}
}

int main()
{
	int scores[STU];
	int avg;

	input_stu(scores);

	avg = get_average(scores, STU);
	printf("����� %d�Դϴ�.\n", avg);

	return 0;
}
*/


/*
#include <stdio.h>
#define SIZE 7

void square_array(int a[], int size);
void print_array(int a[], int size);

int main()
{
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 };

	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);

	return 0;
}

void square_array(int a[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		a[i] = a[i] * a[i];
	}
}
void print_array(int a[], int size) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");
}
*/



/* �����Ʈ ***********************************************************************************************/

/*
#include <stdio.h>	// 24.01.03 ���� Ʋ���� �ٽ� ¥���� 2��
int main()
{
	for (int i = 1; i < 8; i++) {
		for (int p = 7; p >= i; p--) {
			printf("*");
		}
		printf("\n");
	}
	return;
}
*/

/*
#include <stdio.h>	// 24.01.03 ���� Ʋ���� �ٽ� ¥���� 1��

int main()
{
	int i;
	int m, n;
	int total = 1;
	while (1) {
		printf("���ϰ��� �ϴ� �������� �ؼ��� n���� �ϰ���� n�� �Է��ϼ���.");
		scanf("%d %d", &m, &n);	// m �ؼ�  n ������
		if ((m <= 0) || (n <= 0)) {
			printf("�߸��� �� �Է�.\n");
			continue;
		}
		for (i = 0; i < n; i++) {
			total *= m;
			printf("%d�� %d ���� = %d\n", m, i + 1, total);
		}
		total = 1;	// �ʱ�ȭ

	}


	return 0;
}
*/

