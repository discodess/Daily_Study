/* 24.01.02 *********************************************************************************************************************************/

/*
#include <stdio.h>  // ��ȯ��0, �Ű�����0, main()���� ���� 2���� ���� �޾� ���� ���� ��ȯ�Ͽ� ����ϴ� ���α׷� �ۼ�

int add(int, int);

int main()
{
	int x, y, sum;

	printf("�ΰ� ���� �Է� : ");
	scanf("%d %d", &x, &y);

	//sum = add(x, y);

	//printf("%d + %d = %d", x, y, sum);
	printf("%d + %d = %d", x, y, add(x, y));

	return;
}

int add(int a, int b) {
	return (a + b);
}
*/




//��ȯ��0, �Ű�����x �Լ��� ���� ���� 2���� �Է¹޾� main���� ���� ���ϴ� �ڵ� �ۼ�
/*
#include <stdio.h>

int get_int();

int main()
{
	int x, y, sum;

	x = get_int();
	y = get_int();

	sum = x + y;

	printf("�� ���� �� = %d\n", sum);

	return;
}

int get_int() {
	int x;
	printf("���� �Ѱ� �Է� : ");
	scanf("%d", &x);

	return x;
}
*/



// ��ȯ��X, �Ű�����0, main���� ���� 2���� ���޹޾� �Լ����� ���� ���� ����Ͻÿ�
/*
#include <stdio.h>

void add(int x, int y);

int main()
{
	int x, y;
	printf("�ΰ��� ������ �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);

	add(x, y);

	return;
}

void add(int x, int y) {
	printf("�� ���� ���� %d�Դϴ�.", x + y);
}
*/



// ��ȯ��X, �Ű�����X �Լ����� ���м��� ǥ���ϵ��� �Ͻÿ�
/*
#include <stdio.h>

void print();

int main()
{
	int x, y, sum;
	printf("�ΰ��� ������ �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);

	sum = x + y;

	print();

	printf("�� ���� ���� %d�Դϴ�.", x + y);


	return;
}

void print(void) {
	printf("==================================\n");
}
*/

/*
#include <stdio.h>

int max(int, int);

int main()
{
	int x, y;

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);

	printf("ū ������ %d�Դϴ�.", max(x, y));

}

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else return y;
}
*/



//print_stars() �Լ��� 2�� ȣ���Ͽ��� ���α׷� �ۼ�
/*
#include <stdio.h>

void print_stars(void);

int main()
{
	print_stars();
	printf("Hello World!\n");
	print_stars();
	return;
}

void print_stars(void) {
	printf("********************************************\n");
}
*/





// ���丮�� ��� �Լ� ��ȯ��0 �谳x
/*
#include <stdio.h>

int fact(void);

int main()
{
	printf("�˰� ���� ���丮�� ����? ");
	printf("���丮�� ���� %d�Դϴ�.\n", fact());

	return;
}

int fact(void) {
	int x;

	int mul = 1;

	scanf("%d", &x);

	for (int i = 1; i <= x; i++) {
		mul = mul * i;
	}
	return mul;
}
*/


/*
#include <stdio.h>	// �Լ��� �̿��ؼ� ���� ȭ�� �ٲ㺸��

void cel(void);
void fah(void);

int main()
{
	int a = 1;
	char i;
	printf("'c' �����µ����� ȭ���µ��� ��ȯ\n");
	printf("'f' ȭ���µ����� �����µ��� ��ȯ\n");
	printf("'q' ����\n");

	while (a) {
		printf("�޴����� �����ϼ��� : ");
		scanf(" %c", &i);

		if (i == 'c') {
			cel();
		}
		else if (i == 'f') {
			fah();
		}
		else if (i == 'q') a = 0;
	}
	return;
}

void cel(void) {
	double c;
	printf("�����µ� : ");
	scanf("%lf", &c);
	printf("ȭ���µ� >>> %lf\n", c * 1.8 + 32);

}
void fah(void) {
	double f;
	printf("ȭ���µ� : ");
	scanf("%lf", &f);
	printf("�����µ� >>> %lf\n", (f - 32) / 1.8);
}
*/



/*
#include <stdio.h>		//�޺���̼�(C)�� �Լ��� ���� ���ϱ�

int get_integer(void);
int combination(int n, int r);
int factorial(void);

int main()
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("C(%d, %d) = %d\n", a, b, combination(a, b));
	return 0;

}

int get_integer(void) {
	int f;

	printf("���� �Ѱ� �Է� : ");
	scanf("%d", &f);

	return f;
}

int combination(int n, int r) {
	return(factorial(n) / factorial(r) * factorial(n - 1));
}

int factorial(int p) {
	int mul = 1;

	for (int i = 1; i <= p; i++) {
		mul = mul * i;
	}

	return mul;
}
*/




/*
//�ζ� ��ȣ ����
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lotto(void) {
	int a;
	a = rand() % 45 + 1;
	return a;
}

int main()
{
	int x;

	srand(time(NULL));	// ó���� lotto�� �ʱ�ȭ �ߴ�. �׷����� �����Լ��� �Ȱ��� ���ڸ� ���Դ�. srand ��ġ�� �ſ� �߿��ϴ�.

	for (int i = 0; i < 6; i++) {
		x = lotto();
		printf("%d ", x);
	}

	return;
}
*/



// ���� �յ޸� ����
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void) {
	int x = rand() % 2;
	if (x == 0) {
		return 0;		//������ �޸�
	}
	else return 1;		//������ �ո�

}

int main()
{
	int toss;
	int heads = 0;
	int tails = 0;

	srand((unsigned)time(NULL)); //����x

	for (toss = 0; toss < 100; toss++) {
		if (coin_toss() == 1) {
			heads++;
		}
		else tails++;
	}
	printf("������ �ո� : %d\n", heads);
	printf("������ �޸� : %d\n", tails);
	return;
}
*/




/*
#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main()
{
	double x, y;

	x = PI / 2;

	y = sin(x);
	printf("sin(%lf) = %lf\n", x, y);

	y = cos(x);
	printf("cos(%lf) = %lf\n", x, y);

	return;
}
*/



// ����ڷκ��� �Է¹��� �Ǽ��� �����Ͽ� ��ȯ�ϴ� �Լ� double square(double)�� �ۼ��Ѵ�. square()�Լ��� main()���� ȣ���Ͽ� �׽�Ʈ �ϴ� ���α׷��� �ۼ�
/*
#include <stdio.h>

double square(double s) {
	return s * s;
}

int main()
{
	double a;
	double b;

	printf("�Ǽ��� �Է��ϼ��� : ");
	scanf("%lf", &a);

	b = square(a);
	printf("������ ����� %lf�Դϴ�.\n", b);

	return;
}
*/


// ���޵� ���ڰ� ���ĺ� �������� �ƴ����� �˻��ϴ� �Լ� check_alpha()�� �ۼ��ϰ� ���ǹ����� �Լ��� ȣ���Ͽ� ����ڰ� �Է��� ���� ���ĺ�('A'~'Z', 'a'~'z')������ �Ǵ��Ͽ� ��ȯ�Ͽ� main���� "���ĺ��Դϴ�"�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
/*
#include <stdio.h>

int check_alpha(char a) {
	if ((a <= 'z') && (a >= 'a')) {
		return 1;
	}else if ((a <= 'Z') && (a >= 'A')) {
		return 2;
	}else return 3;


}

int main()
{
	char a;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf(" %c", &a);

	if (check_alpha(a) == 1) printf("This is �ҹ���\n");
	else if (check_alpha(a) == 2) printf("This is �빮��\n");
	else if (check_alpha(a) == 3) printf("This is ��Ÿ����\n");

	return;
}
*/

// �� �� ȿ������ �ڵ�, ������ 1�� 0�� �����Ƿ� if�� �ȿ��� 1,0�� �������ν� �� �� �����ϰ� �ڵ带 © �� �ִ�.
/*
#include <stdio.h>

int check_alpha(char a) {
	if (((a <= 'z') && (a >= 'a'))|| ((a <= 'Z') && (a >= 'A'))) {
		return 1;
	}
	else return 0;
}

int main()
{
	char a;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf(" %c", &a);

	if (check_alpha(a)) printf("This is ���ĺ�\n");
	else printf("This is ���ĺ� X\n");


	return;
}
*/






//����ڷκ��� 2���� ������ �Է¹޾� 
// 1 > �μ��� ���ϴ� �Լ� add
// 2 > �� �� �� ū ���� ã�� �Լ� max()
// 3 > �� �� �� ���� ���� ã�� �Լ��� �ۼ��Ͽ� min()
// 4 > �� ���� �Է¹޴� �Լ��� �ۼ��Ͽ� get_int()
// main���� ������ �Լ��� ȣ���� �� ����� main���� �ϵ��� �ۼ�.
/*
#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int max(int a, int b) {
	if (a < b) return b;
	else return a;
}

int min(int a, int b) {
	if (a > b) return b;
	else return a;
}
int get_int(void) {
	int a;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	return a;
}

int main()
{
	int a, b;

	a = get_int();
	b = get_int();

	printf("�μ��� ���� %d�Դϴ�.\n", add(a, b));
	printf("�ִ밪�� %d�Դϴ�.\n", max(a, b));
	printf("�ּҰ��� %d�Դϴ�.\n", min(a, b));

	return;
}
*/




// ����ڷκ��� 2���� ��ǥ�� �Ǽ��� �Է¹޾� get_int()
// ��и��� �����ϴ� �Լ��� ���� ��и��� ����ϴ� �Լ��� �ۼ� print_quadrant()
// Main �Լ��� ������ �ڷ��� ����� ���Լ�ȣ�⸸ �Ͻÿ�.
/*
#include <stdio.h>

double get_int(void) {
	double a;
	printf("���� �Է��ϼ��� : ");
	scanf("%lf", &a);
	return a;
}

void print_quadrant(double x, double y) {
	if ((x > 0) && (y > 0))printf("1��и�\n");
	else if ((x < 0) && (y > 0))printf("2��и�\n");
	else if ((x < 0) && (y < 0))printf("3��и�\n");
	else if ((x > 0) && (y < 0))printf("4��и�\n");
	else if ((x == 0) && (y == 0))printf("����\n");
	else printf("�� ���� �ֽ��ϴ�.\n");
}

int main()
{
	double x, y;
	x = get_int();
	y = get_int();

	print_quadrant(x, y);

	return 0;
}
*/
