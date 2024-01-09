/* 24.01.09 *********************************************************************************************************************************************/

// ���� ������ ����
/*
#include <stdio.h>

int main()
{
	int i = 100;
	int* p = &i;
	int** q = &p;	// �����ͺ��� q�� p�� �ּҰ��� �ִ´�.

	*p = 200;
	printf("i = %d  *p = %d  **q = %d\n", i, *p, **q);

	**q = 300;
	printf("i = %d  *p = %d  **q = %d\n", i, *p, **q);

	printf("�ּҰ� i = %u  p = %u  \n", &i, p);
	printf("�ּҰ� p = %u  q = %u  \n", &p, q);
	printf("�ּҰ� q = %u\n", &q);

	return 0;
}
*/



// ������������ swap()
/*
#include <stdio.h>

void print(int** qpi, int** qpj) {	// pi�� pj�� �̱� �����Ϳ��� �� ���� ������ ���ؼ� ���������Ͱ� ���� �޾ƾ��Ѵ�.
	int* temp = NULL;
	temp = *qpi;
	*qpi = *qpj;
	*qpj = temp;
}

int main()
{
	int i = 100;
	int j = 10;
	int* pi = &i;
	int* pj = &j;
	int** qpi = &pi;
	int** qpj = &pj;

	printf("�Լ� ȣ�� ��\n");
	printf("i = %d  *pi = %d  **qpi = %d\n", i, *pi, **qpi);
	printf("j = %d  *pj = %d  **qpj = %d\n", j, *pj, **qpj);

	printf("i�� �ּҰ� : %u  *pi = %u  **qpi = %u\n", &i, pi, *qpi);
	printf("j�� �ּҰ� : %u  *pj = %u  **qpj = %u\n", &j, pj, *qpj);

	printf("�ּҰ� pi = %u  qpi = %u\n", &pi, qpi);
	printf("�ּҰ� pj = %u  qpj = %u\n", &pj, qpj);


	print(&pi, &pj);

	printf("\n\n�Լ� ȣ�� ��\n");
	printf("i = %d  *pi = %d  **qpi = %d\n", i, *pi, **qpi);
	printf("j = %d  *pj = %d  **qpj = %d\n", j, *pj, **qpj);

	printf("i�� �ּҰ� : %u  *pi = %u  **qpi = %u\n", &i, pi, *qpi);
	printf("j�� �ּҰ� : %u  *pj = %u  **qpj = %u\n", &j, pj, *qpj);

	printf("�ּҰ� pi = %u  qpi = %u\n", &pi, qpi);
	printf("�ּҰ� pj = %u  qpj = %u\n", &pj, qpj);

	return 0;
}
*/





// ���ڿ� �迭
/*
#include <stdio.h>

int main()
{
	int i, n;
	char* fruits[] = {
		"apple",
		"blueberry",
		"orange",
		"melon"
	};
	n = sizeof(fruits) / sizeof(fruits[0]);

	for (i = 0; i < n; i++) {
		printf("%s\n", fruits[i]);
	}
	return 0;
}
*/






// �Լ� ������
/*
#include <stdio.h>

int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}

int main()
{
	int result;
	int (*pf)(int, int);

	pf = add;
	result = pf(10, 20);
	printf("10+20�� %d\n", result);
	printf("pf�� �ּ� = %#x\n", pf);
	printf("add�� �ּ� = %#x\n", add);

	pf = sub;
	result = pf(10, 20);
	printf("10-20�� %d\n", result);
	printf("pf�� �ּ� = %#x\n", pf);
	printf("sub�� �ּ� = %#x\n", sub);

	return;
}
*/



// �Լ� ������ �迭
/*
#include <stdio.h>

int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div1(int x, int y) {
	return x / y;
}

void menu(void) {
	printf("========================\n");
	printf("0. ����\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ������\n");
	printf("4. ����\n");
}

int main()
{
	int choice, result, x, y;
	int (*pf[4])(int, int) = { add,sub,mul,div1 };

	while (1) {
		menu();
		printf("�޴��� �����Ͻÿ� : ");
		scanf("%d", &choice);

		if ((choice < 0) || (choice >= 4)) break;
		printf("2���� ������ �Է��ϼ��� : ");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y);
		printf("���� ��� = %d\n", result);
	}
	return 0;
}
*/


/*
#include <stdio.h>		// �̰� ��
#include <math.h>

double f1(double k)
{
	return 1.0 / k;
}
double f2(double k)
{
	return cos(k);
}

double formula(double (*pf)(double), int n) { //�Լ��̸��� ���ڷ� ���� �� ���� Ÿ���� �Լ� �����ͷ� �޾��� �� ����.
	int i;
	double sum = 0.0;

	for (i = 1; i < n; i++) {
		sum += pf(i) * pf(i) + pf(i) + 1;
		return sum;
	}
}

int main()
{
	printf("%lf\n", formula(f1, 10));
	printf("%lf\n", formula(f2, 10));
}
*/


// 2���� �迭 �̸��� ������ Ÿ��
/*
#include <stdio.h>
int main()
{
	int m[3][3] = { 1,2,3,4,5,6,7,8,9 };

	printf("m = %u\n", m);
	printf("m+1 = %u\n", m+1);
	printf("m+2 = %u\n\n", m+2);


	printf("m[0] = %u\n", m[0]); //������ �迭���� �ุ ����ϸ� �����Ͱ� �ƴ� ���� ���� �ּҰ��� ��µ�
	printf("m[1] = %u\n", m[1]);
	printf("m[2] = %u\n", m[2]);

	printf("m[0][0] = %u\n", &m[0][0]);
	printf("m[1][0] = %u\n", &m[1][0]);
	printf("m[2][0] = %u\n", &m[2][0]);

	return;
}
*/




// void ������ ��� ����
/*
#include <stdio.h>

void memzero(void* ptr, size_t len) {
	char* p = (char*)ptr;
	for (; len > 0; len--) {
		*p++ = 0;
	}
}

int main()
{
	char a[10];
	memzero(a, sizeof(a));
	for (int i = 0; i < 10; i++) {
		printf("%2d", a[i]);
	}
	printf("\n");

	int b[10];
	memzero(b, sizeof(b));
	for (int i = 0; i < 10; i++) {
		printf("%2d", b[i]);
	}
	printf("\n");

	double c[10];
	memzero(c, sizeof(c));
	for (int i = 0; i < 10; i++) {
		printf("%.2lf ", c[i]);
	}
	printf("\n");

	return;
}
*/



// ���� : 2���� �迭�� ������ ����Ǿ��ִ�. 1���� �迭�� ����� ������ ���� ���ϴ� int get_sum(int array[], int size)�� ������ 2���� �迭�� �� �࿡ ���� get_sum()�� ȣ���Ͽ� �� ���� ���� ���ϰ� ��ü 2���� �迭�� ���ڿ��� ������ ���� ���Ͻÿ�.
/*
#include <stdio.h>

int get_sum(int array[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + array[i];
	}
	return sum;
}

int main()
{
	int total = 0;
	int m[3][6] = {
		{10,10,10,10,10,10},
		{10,10,10,10,10,10},
		{10,10,10,10,10,10}
	};

	for (int i = 0; i < 3; i++) {
		total = total + get_sum(m[i], 6);
		printf("%d���� �� : %d\n", i + 1, get_sum(m[i], 6));
	}
	printf("��ü �� : %d", total);
	return;
}
*/



// ���� : �Ǽ��� ������ ��ȯ�ϸ� �Ҽ��� ���ϴ� �߷��� �������� �ȴ�
// 6.99�� ������ ��ȯ�ϸ� 6�� �Ǵµ� �Ǽ��� 0.5�� ���ؼ� �Ҽ��� ���ϸ� �ݿø��ϴ� ������ �����ϴ� round(double f)�� �ۼ��Ͻÿ�.
/*
#include <stdio.h>

int round(double x) {
	if ((int)(x + 0.5) > x) return (x + 0.5);
	else (int)x;
}

int around(double x) {
	return (int)(x + 0.5);
}


int main()
{
	double f;
	int rf;

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%lf", &f);

	rf = around(f);

	printf("�ݿø� ���� %d�Դϴ�.\n", rf);

	return 0;
}
*/



// ������ �̿��Ͽ� 10~90������ ������ �������� ��ȯ�ϴ� �Լ� randint()�� �ۼ��ϰ� 10�� ȣ���Ͻÿ�.
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint() {
	int r;
	r = rand() % 81 + 10;
	return r;
}

int main()
{
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		printf("%d��° ���� : %d\n", i + 1, randint());
	}

	return 0;
}
*/




// ���� : ���� �߽���ǥ�� ��Ÿ���� ����ü�� �� ����ü�� ���� �������� ���� ����ü�� �����Ͽ� ���� ������ ���� �ѷ��� ���ϴ� �ڵ带 �ۼ��Ͻÿ�. �������� �Ǽ��� ����Ͻÿ�.
// ���� �߽���ǥ�� �������� main()���� �Է¹޵��� �ϰ� ������ �ѷ��� �Լ��� ���� �ۼ��Ͽ� ����Ͽ� ��ȯ�ϵ��� �Ͻÿ�.
/*
#include <stdio.h>
#include <math.h>
#define PI 3.141592

struct center {
	int x;
	int y;
};

struct circle {
	int radius;
	struct center* point;
};

int main()
{
	double area;
	double circum;
	struct center mid;
	struct circle c;

	c.point = &mid;

	printf("���� �߽��� �Է�(x,y) : ");
	scanf("%d %d", &mid.x, &mid.y);
	printf("���� ������ �Է� : ");
	scanf("%d", &c.radius);

	circum = 2 * PI * c.radius;
	area = PI * pow(c.radius, 2);

	printf("���� ���� %.3lf, ���� �ѷ� %.3lf\n", circum, area);
	printf("�߽��� : x = %d, y = %d", c.point->x, c.point->y);

	return;
}
*/





// ������ ��Ÿ���� ����ü employee�� ���(������), �̸�(���ڿ�), ��ȭ��ȣ(���ڿ�), ����(������) ���� �����ǵ��� �ϰ�, typedef�� ����ؼ� ����ü Ÿ���� �����ϼ���.
// ����ü �迭�� �����ϰ� 3���� �����͸� �Է¹޾� ���̰� 20�̻� 30������ ������ ã�Ƽ� ����ϵ��� �ϼ���.
/*
#include <stdio.h>

typedef struct employee {
	char name[10];
	char phone[11];
	int age;
	int number;
}EM;

int main()
{
	EM a[3];

	for (int i = 0; i < 3; i++) {
		printf("%d.��� : ", i + 1);
		scanf("%d", &a[i].number);
		printf("�̸� : ");
		scanf("%s", &a[i].name);
		printf("���� : ");
		scanf("%d", &a[i].age);
		printf("��ȭ��ȣ : ");
		scanf("%d", &a[i].phone);
		printf("\n");
	}

	printf("���ǿ� �´� �ο� : ");

	for (int i = 0; i < 3; i++) {
		if ((a[i].age >= 20) && (a[i].age <= 30)){
			printf("%s ", a[i].name);
		}
	}

	return 0;
}
*/