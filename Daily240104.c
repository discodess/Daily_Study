/* 24.01.04 *****************************************************************************************************************************************/

// ���� ����
/*
#include <stdio.h>
#define SIZE 10

int main()
{
	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };			// ���� ��ħ���� ���ü���
	int i, j, temp, least;
	for (i = 0; i < SIZE; i++) {	// ������ �迭 ���
		printf("%d", list[i]);
	}
	printf("\n");

	for (i = 0; i < SIZE - 1; i++) {
		least = i;
		for (j = i + 1; j < SIZE; j++) {
			if (list[j] < list[least]) least = j;
		}

		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
	for (i = 0; i < SIZE; i++) {
		printf("%d", list[i]);
	}
	printf("\n");


	return;
}
*/



// ����Ž��
/*
#include <stdio.h>
#define SIZE 10

int main()
{
	int key, i, re;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("Ž�� �� ���� �Է��ϼ��� : ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) re = i;
	}
	printf("Ž�� ���� �ε��� = %d\n", re);
	printf("Ž�� ����\n");

	return;

}
*/



/*
#include <stdio.h>
#define SIZE 16

int binary_search(int list[], int n, int key);

int main()
{
	int key;
	int grade[SIZE] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	printf("�ƻ��� ���� �Է��ϼ��� : ");
	scanf("%d", &key);
	printf("Ž�� �Ϸ� �ε��� �� : %d�� �ε���\n", binary_search(grade, SIZE, key));

	return;
}

int binary_search(int list[], int n, int key) {		// n�� �迭�� ũ��
	int low, high, middle;
	low = 0;
	high = n - 1;
	while (low <= high) {
		printf("[%d %d]\n", low, high);
		middle = (low + high) / 2;
		if (key == list[middle]) return middle;
		else if (key > list[middle]) low = middle + 1;
		else high = middle - 1;
	}
	return -1;
}
*/


/*
#include <stdio.h>		// 2���� �迭 ���� ������ �����غ���
#include <stdlib.h>
#include <time.h>
#define ROWS 3
#define COLS 5

int main()
{
	srand(time(NULL));

	int s[ROWS][COLS];
	int i, j;
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			s[i][j] = rand() % 100;
		}
	}
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			printf("%3d", s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/


/*
#include <stdio.h>
#define ROWS 3
#define COLS 5

int main()
{
	int a[ROWS][COLS] = { {27,98,80,76,3},
						  {99,89,90,90,0},
						  {65,68,50,49,0}
	};

	int i;
	for (i = 0; i < ROWS; i++) {
		double final_scores = a[i][0] * 0.3 + a[i][1] * 0.4 + a[i][2] * 0.2 + a[i][3] * 0.1 - a[i][4];
		printf("�л� #%i�� �������� = %.2f\n", i + 1, final_scores);
	}


	return;
}
*/


/*
#include <stdio.h>	// ������ �迭�� �̿��� ����� ǥ��
#define ROWS 3
#define COLS 3

int main()
{
	int a[ROWS][COLS] = {
		{2,3,0},
		{8,9,1},
		{7,0,5}
	};
	int b[ROWS][COLS] = {
		{1,0,0},
		{1,0,0},
		{1,0,0}
	};
	int c[ROWS][COLS];


	int r;

	for (r = 0; r < ROWS; r++) {
		for (int p = 0; p < COLS; p++) {
			c[r][p] = a[r][p] + b[r][p];
		}
	}
	for (r = 0; r < ROWS; r++) {
		for (int p = 0; p < COLS; p++) {
			printf("%d", c[r][p]);
		}
		printf("\n");
	}
	return 0;
}
*/






// 2���� �迭�� �Լ��� �����ϱ�
/*
#include <stdio.h>
#define YEARS 3
#define PRODUCTS 5

int sum(int grade[][PRODUCTS]);

int main()
{
	int sales[YEARS][PRODUCTS] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int total_sale;

	total_sale = sum(sales);
	printf("�� ������ %d�Դϴ�.\n", total_sale);

	return 0;
}

int sum(int grade[][PRODUCTS]) {
	int y, p;
	int total = 0;

	for (y = 0; y < YEARS; y++) {
		for (p = 0; p < PRODUCTS; p++) {
			total += grade[y][p];
		}
	}
	return total;

}
*/


// �׽�Ʈ : 2���� ���� �迭 a,b�� �����ϰ� �迭 a�� ��Ҹ� �迭 b�� ���� �ϴ� �Լ��� �ۼ��Ͻÿ�
/*
#include <stdio.h>
#define SIZE 5

int array_copy(int a[], int b[], int size) {
	for (int i = 0; i < SIZE; i++) {
		b[i] = a[i];
	}
}
int array_print(int a[], int size) {
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", a[i]);
	}
}

int main()
{
	int a[SIZE] = { 1,2,3,4,5 };
	int b[SIZE];

	array_copy(a, b, SIZE);
	array_print(a, SIZE);

	return 0;
}
*/



// ������
/*
#include <stdio.h>	// ����Ǵ� �ּ� �˾Ƴ���

int main()
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i�� �ּ� : %u\n", &i);	// %u�� ��ȣ�� ���� 10����
	printf("c�� �ּ� : %u\n", &c);
	printf("f�� �ּ� : %u\n", &f);


	return 0;
}
*/


// ������ ���� ����
/*
#include <stdio.h>

int main()
{
	int i = 10;
	double f = 12.3;

	int* pi = &i;
	double* pf = &f;

	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);		// �ּ� ���� ������ �ִ� pf �� ����ؼ� �ּҰ� �����°�

	printf("%u %u\n", *pi, &i);		// ����Ű�� �ִ� �ּҰ��� �����͸� �����
	printf("%lf %u\n", *pf, &f);	// ����Ű�� �ּҰ��� ������ double�̱� ������ lf ����.


	return 0;
}
*/

/*
#include <stdio.h>		// ������ ������ �ڷ����� �ٲ㺸�� >> ������ �ַ��� �����µ� ���� ������ �ȶ�;; >> �ݵ�� ���� Ÿ���� �����Ѿ� ��Ȯ�� ���� ����. �߿�!!

int main()
{
	int i = 10;
	double f = 12.3;

	int* pi = &i;
	int* pf = &f;

	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);		// �ּ� ���� ������ �ִ� pf �� ����ؼ� �ּҰ� �����°�

	printf("%u %u\n", *pi, &i);		// ����Ű�� �ִ� �ּҰ��� �����͸� �����
	printf("%u %u\n", *pf, &f);	// ����Ű�� �ּҰ��� ������ double�̱� ������ lf ����.


	return 0;
}
*/





/*
#include <stdio.h>			// ������ �ּҰ��� ������ ������ ������ִ� ��, ������ ������ �ּҰ� �������ִ� �� ��.

int main()
{
	int i = 3000;
	int x = 10;

	int* p = NULL;

	p = &i;

	printf("i = %d\n", i);
	printf("&i = %u\n\n", &i);

	printf("p = %u\n", p);
	printf("*p = %d\n\n", *p);

	printf("&p = %u\n\n\n", &p);



	p = &x;

	printf("x = %d\n", x);
	printf("&x = %u\n\n", &x);

	printf("x�� �ּҰ� p = %u\n", p);
	printf("*p = %d\n\n", *p);



	*p = 100;
	printf("*p = 100 ����\n");
	printf("x�� �� = %d\n", x);
	printf("*p�� �� = %d\n", *p);

	return 0;
}
*/



/*
#include <stdio.h>

int main()					// ���������Ϳ� �־��.
{
	int i = 3000;

	int* p = &i;

	printf("i = %d\n", i);
	printf("&i = %u\n\n", &i);
	printf("p = %u\n\n", p);
	printf("*p = %d\n\n", *p);

	int** pp = &p;

	printf("**pp = %u\n\n", **pp);



	return 0;
}
*/





// ������ ����
/*
#include <stdio.h>

int main()
{
	int* ptr1 = 0;			// null�� ����ؾ� �ϴµ� ������ ������ �����ֱ� ���� 0 ���
	char* ptr2 = 0;			// �ڷ����� ũ�⸸ŭ �������� ����.
	double* ptr3 = 0;

	printf("int : %u����, char : %u����,double : %u����\n", ptr1++, ptr2++, ptr3++);
	printf("int : %u����, char : %u����,double : %u����\n", ptr1, ptr2, ptr3);
	printf("int : %u����, char : %u����,double : %u����\n", ptr1--, ptr2--, ptr3--);
	printf("int : %u����, char : %u����,double : %u����\n", ptr1, ptr2, ptr3);

	return;
}
*/






/*
#include <stdio.h>

int main()
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p, *pi = %d\n\n", i, pi, *pi);
	(*pi)++;
	printf("i = %d, pi = %p, *pi = %d\n\n", i, pi, *pi);

	*pi++;
	printf("i = %d, pi = %p, *pi = %d\n\n", i, pi, *pi);

	return 0;
}
*/





// swap() �Լ� �����ͷ� �ٲ㺸��, �ݹ��� ���۷���(������ ���� ȣ��)
/*
#include <stdio.h>

void swap(int* px , int* py ) {
	int tmp;
	printf("*px = %d, *py = %d\n", *px, *py);

	tmp = *px;
	*px = *py;
	*py = tmp;

	printf("*px = %d, *py = %d\n", *px, *py);
}

int main()
{
	int a = 100, b = 200;


	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);	//�ּҰ��� ������ ������ �Լ����� �ּҰ��� �޾��� �� �ִ� ������ ������ �־���Ѵ�. void swap(int* px , int* py ){~} �̰�ó��

	printf("a = %d, b = %d\n", a, b);

	return 0;
}
*/





//2�� �̻��� ����� ��ȯ(���������δ� ���� ��ȯ�ϱ� ���ٴ� ������� �޸� ������ ���� ��ȭ �Ѵٰ� �� �� ����)
/*
#include <stdio.h>																				// �̰� ����� ���� ����

int get_line_patameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept) {
	if (x1 == x2) return -1;
	else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;
		return 0;
	}
}

int main()
{
	float s, y;
	if (get_line_patameter(3, 3, 6, 6, &s, &y) == -1) {
		printf("����\n");
	}
	else printf("����� %f, y������ %f\n", s, y);

	return 0;
}
*/



// ���� : �Ҹ����� ������ �� ȣ�� ��� ����� �Է¹޾� �� ���� ��ü �α��� ���ϴ� �ڵ带 �ۼ��Ͻÿ�. 2���� �迭 ���
/*
#include <stdio.h>

int main()
{
	int bill[4][2];
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d�� %dȣ �α� �Է� : ", i + 1, j + 1);
			scanf("%d", &bill[i][j]);
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			sum += bill[i][j];
		}
		printf("%d�� ��ü �α� : %d\n", i + 1, sum);
		sum = 0;
	}

	return 0;
}
*/
