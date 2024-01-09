/* 24.01.09 *********************************************************************************************************************************************/

// 이중 포인터 기초
/*
#include <stdio.h>

int main()
{
	int i = 100;
	int* p = &i;
	int** q = &p;	// 포인터변수 q에 p의 주소값을 넣는다.

	*p = 200;
	printf("i = %d  *p = %d  **q = %d\n", i, *p, **q);

	**q = 300;
	printf("i = %d  *p = %d  **q = %d\n", i, *p, **q);

	printf("주소값 i = %u  p = %u  \n", &i, p);
	printf("주소값 p = %u  q = %u  \n", &p, q);
	printf("주소값 q = %u\n", &q);

	return 0;
}
*/



// 이중포인터의 swap()
/*
#include <stdio.h>

void print(int** qpi, int** qpj) {	// pi와 pj가 싱글 포인터여서 그 값을 가지기 위해선 이중포인터가 값을 받아야한다.
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

	printf("함수 호출 전\n");
	printf("i = %d  *pi = %d  **qpi = %d\n", i, *pi, **qpi);
	printf("j = %d  *pj = %d  **qpj = %d\n", j, *pj, **qpj);

	printf("i의 주소값 : %u  *pi = %u  **qpi = %u\n", &i, pi, *qpi);
	printf("j의 주소값 : %u  *pj = %u  **qpj = %u\n", &j, pj, *qpj);

	printf("주소값 pi = %u  qpi = %u\n", &pi, qpi);
	printf("주소값 pj = %u  qpj = %u\n", &pj, qpj);


	print(&pi, &pj);

	printf("\n\n함수 호출 후\n");
	printf("i = %d  *pi = %d  **qpi = %d\n", i, *pi, **qpi);
	printf("j = %d  *pj = %d  **qpj = %d\n", j, *pj, **qpj);

	printf("i의 주소값 : %u  *pi = %u  **qpi = %u\n", &i, pi, *qpi);
	printf("j의 주소값 : %u  *pj = %u  **qpj = %u\n", &j, pj, *qpj);

	printf("주소값 pi = %u  qpi = %u\n", &pi, qpi);
	printf("주소값 pj = %u  qpj = %u\n", &pj, qpj);

	return 0;
}
*/





// 문자열 배열
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






// 함수 포인터
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
	printf("10+20은 %d\n", result);
	printf("pf의 주소 = %#x\n", pf);
	printf("add의 주소 = %#x\n", add);

	pf = sub;
	result = pf(10, 20);
	printf("10-20은 %d\n", result);
	printf("pf의 주소 = %#x\n", pf);
	printf("sub의 주소 = %#x\n", sub);

	return;
}
*/



// 함수 포인터 배열
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
	printf("0. 덧셈\n");
	printf("1. 뺄셈\n");
	printf("2. 곱셈\n");
	printf("3. 나눗셈\n");
	printf("4. 종료\n");
}

int main()
{
	int choice, result, x, y;
	int (*pf[4])(int, int) = { add,sub,mul,div1 };

	while (1) {
		menu();
		printf("메뉴를 선택하시오 : ");
		scanf("%d", &choice);

		if ((choice < 0) || (choice >= 4)) break;
		printf("2개의 정수를 입력하세요 : ");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y);
		printf("연산 결과 = %d\n", result);
	}
	return 0;
}
*/


/*
#include <stdio.h>		// 이건 빼
#include <math.h>

double f1(double k)
{
	return 1.0 / k;
}
double f2(double k)
{
	return cos(k);
}

double formula(double (*pf)(double), int n) { //함수이름을 인자로 받을 때 같은 타입의 함수 포인터로 받아줄 수 있음.
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


// 2차원 배열 이름의 포인터 타입
/*
#include <stdio.h>
int main()
{
	int m[3][3] = { 1,2,3,4,5,6,7,8,9 };

	printf("m = %u\n", m);
	printf("m+1 = %u\n", m+1);
	printf("m+2 = %u\n\n", m+2);


	printf("m[0] = %u\n", m[0]); //이차원 배열에서 행만 출력하면 데이터가 아닌 행의 시작 주소값이 출력됨
	printf("m[1] = %u\n", m[1]);
	printf("m[2] = %u\n", m[2]);

	printf("m[0][0] = %u\n", &m[0][0]);
	printf("m[1][0] = %u\n", &m[1][0]);
	printf("m[2][0] = %u\n", &m[2][0]);

	return;
}
*/




// void 포인터 사용 예시
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



// 문제 : 2차원 배열에 정수가 저장되어있다. 1차원 배열에 저장된 정수의 합을 구하는 int get_sum(int array[], int size)를 가지고 2차원 배열의 각 행에 대해 get_sum()을 호출하여 각 행의 합을 구하고 전체 2차원 배열에 저자오딘 정수의 합을 구하시오.
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
		printf("%d행의 합 : %d\n", i + 1, get_sum(m[i], 6));
	}
	printf("전체 합 : %d", total);
	return;
}
*/



// 문제 : 실수를 정수로 변환하면 소수점 이하는 잘려서 없어지게 된다
// 6.99를 정수로 변환하면 6이 되는데 실수에 0.5를 더해서 소수점 이하를 반올림하는 연산을 수행하는 round(double f)를 작성하시오.
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

	printf("실수를 입력하세요 : ");
	scanf("%lf", &f);

	rf = around(f);

	printf("반올림 값은 %d입니다.\n", rf);

	return 0;
}
*/



// 난수를 이용하여 10~90까지의 정수를 무작위로 반환하는 함수 randint()를 작성하고 10번 호출하시오.
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
		printf("%d번째 난수 : %d\n", i + 1, randint());
	}

	return 0;
}
*/




// 문제 : 원의 중심좌표를 나타내는 구조체와 그 구조체와 원의 반지름을 갖는 구조체를 선언하여 원의 면적과 원의 둘레를 구하는 코드를 작성하시오. 반지름은 실수를 사용하시오.
// 원의 중심좌표와 반지름은 main()에서 입력받도록 하고 면적과 둘레는 함수에 따로 작성하여 계산하여 반환하도록 하시오.
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

	printf("원의 중심점 입력(x,y) : ");
	scanf("%d %d", &mid.x, &mid.y);
	printf("원의 반지름 입력 : ");
	scanf("%d", &c.radius);

	circum = 2 * PI * c.radius;
	area = PI * pow(c.radius, 2);

	printf("원의 면적 %.3lf, 원의 둘레 %.3lf\n", circum, area);
	printf("중심점 : x = %d, y = %d", c.point->x, c.point->y);

	return;
}
*/





// 직원을 나타내는 구조체 employee가 사번(정수형), 이름(문자열), 전화번호(문자열), 나이(정수형) 등을 구성되도록 하고, typedef를 사용해서 구조체 타입을 정의하세요.
// 구조체 배열을 선언하고 3명의 데이터를 입력받아 나이가 20이상 30이하인 직원을 찾아서 출력하도록 하세요.
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
		printf("%d.사번 : ", i + 1);
		scanf("%d", &a[i].number);
		printf("이름 : ");
		scanf("%s", &a[i].name);
		printf("나이 : ");
		scanf("%d", &a[i].age);
		printf("전화번호 : ");
		scanf("%d", &a[i].phone);
		printf("\n");
	}

	printf("조건에 맞는 인원 : ");

	for (int i = 0; i < 3; i++) {
		if ((a[i].age >= 20) && (a[i].age <= 30)){
			printf("%s ", a[i].name);
		}
	}

	return 0;
}
*/