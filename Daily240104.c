/* 24.01.04 *****************************************************************************************************************************************/

// 선택 정렬
/*
#include <stdio.h>
#define SIZE 10

int main()
{
	int list[SIZE] = { 3,2,9,7,1,4,8,0,6,5 };			// 다음 아침문제 나올수도
	int i, j, temp, least;
	for (i = 0; i < SIZE; i++) {	// 원래의 배열 출력
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



// 순차탐색
/*
#include <stdio.h>
#define SIZE 10

int main()
{
	int key, i, re;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9 };

	printf("탐색 할 값을 입력하세요 : ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) {
		if (list[i] == key) re = i;
	}
	printf("탐색 성공 인덱스 = %d\n", re);
	printf("탐색 종료\n");

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
	printf("탬색할 값을 입력하세요 : ");
	scanf("%d", &key);
	printf("탐색 완료 인덱스 값 : %d번 인덱스\n", binary_search(grade, SIZE, key));

	return;
}

int binary_search(int list[], int n, int key) {		// n은 배열의 크기
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
#include <stdio.h>		// 2차원 배열 랜덤 값으로 지정해보기
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
		printf("학생 #%i의 최종성적 = %.2f\n", i + 1, final_scores);
	}


	return;
}
*/


/*
#include <stdio.h>	// 다차원 배열을 이용한 행렬의 표현
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






// 2차원 배열을 함수로 전달하기
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
	printf("총 매출은 %d입니다.\n", total_sale);

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


// 테스트 : 2개의 정수 배열 a,b를 선언하고 배열 a의 요소를 배열 b로 복사 하는 함수를 작성하시오
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



// 포인터
/*
#include <stdio.h>	// 저장되는 주소 알아내기

int main()
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소 : %u\n", &i);	// %u는 부호가 없는 10진수
	printf("c의 주소 : %u\n", &c);
	printf("f의 주소 : %u\n", &f);


	return 0;
}
*/


// 포인터 연결 예제
/*
#include <stdio.h>

int main()
{
	int i = 10;
	double f = 12.3;

	int* pi = &i;
	double* pf = &f;

	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);		// 주소 값을 가지고 있는 pf 를 출력해서 주소가 나오는거

	printf("%u %u\n", *pi, &i);		// 가리키고 있는 주소값의 데이터를 출력함
	printf("%lf %u\n", *pf, &f);	// 가리키는 주소값의 변수가 double이기 때문에 lf 써줌.


	return 0;
}
*/

/*
#include <stdio.h>		// 포인터 변수의 자료형을 바꿔보자 >> 원래는 애러가 떴었는데 이젠 에러가 안뜸;; >> 반드시 같은 타입을 가르켜야 정확한 값이 나옴. 중요!!

int main()
{
	int i = 10;
	double f = 12.3;

	int* pi = &i;
	int* pf = &f;

	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);		// 주소 값을 가지고 있는 pf 를 출력해서 주소가 나오는거

	printf("%u %u\n", *pi, &i);		// 가리키고 있는 주소값의 데이터를 출력함
	printf("%u %u\n", *pf, &f);	// 가리키는 주소값의 변수가 double이기 때문에 lf 써줌.


	return 0;
}
*/





/*
#include <stdio.h>			// 변수의 주소값과 포인터 변수에 저장되있는 값, 포인터 변수의 주소가 가지고있는 값 비교.

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

	printf("x의 주소값 p = %u\n", p);
	printf("*p = %d\n\n", *p);



	*p = 100;
	printf("*p = 100 넣음\n");
	printf("x의 값 = %d\n", x);
	printf("*p의 값 = %d\n", *p);

	return 0;
}
*/



/*
#include <stdio.h>

int main()					// 이중포인터에 넣어보기.
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





// 포인터 연산
/*
#include <stdio.h>

int main()
{
	int* ptr1 = 0;			// null을 사용해야 하는데 포인터 연산을 보여주기 위해 0 사용
	char* ptr2 = 0;			// 자료형의 크기만큼 더해지고 빼짐.
	double* ptr3 = 0;

	printf("int : %u번지, char : %u번지,double : %u번지\n", ptr1++, ptr2++, ptr3++);
	printf("int : %u번지, char : %u번지,double : %u번지\n", ptr1, ptr2, ptr3);
	printf("int : %u번지, char : %u번지,double : %u번지\n", ptr1--, ptr2--, ptr3--);
	printf("int : %u번지, char : %u번지,double : %u번지\n", ptr1, ptr2, ptr3);

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





// swap() 함수 포인터로 바꿔보기, 콜바이 레퍼런스(참조에 의한 호출)
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

	swap(&a, &b);	//주소값을 보내기 때문에 함수에서 주소값을 받아줄 수 있는 포인터 변수가 있어야한다. void swap(int* px , int* py ){~} 이것처럼

	printf("a = %d, b = %d\n", a, b);

	return 0;
}
*/





//2개 이상의 결과를 반환(실질적으로는 값을 반환하기 보다는 결과값이 메모리 참조를 통해 변화 한다고 할 수 있음)
/*
#include <stdio.h>																				// 이거 퀴즈로 냈을 수도

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
		printf("에러\n");
	}
	else printf("기울기는 %f, y절편은 %f\n", s, y);

	return 0;
}
*/



// 문제 : 소망빌라 각층의 각 호에 사는 사람을 입력받아 각 층의 전체 인구를 더하는 코드를 작성하시오. 2차원 배열 사용
/*
#include <stdio.h>

int main()
{
	int bill[4][2];
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d층 %d호 인구 입력 : ", i + 1, j + 1);
			scanf("%d", &bill[i][j]);
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			sum += bill[i][j];
		}
		printf("%d층 전체 인구 : %d\n", i + 1, sum);
		sum = 0;
	}

	return 0;
}
*/
