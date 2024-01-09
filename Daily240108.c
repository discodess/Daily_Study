/* 24.01.08 ***********************************************************************************************************************************/
// 구조체 시작

//구조체의 기본.
/*
#include <stdio.h>

struct student {

	char a;
	char b;
	char name[10];	// 순서가 바뀌면 32바이트로 바뀜. 구조체 크기(메모리 할당)가 굉장히 별로가됨. 순서가 바뀌면 왜 32byte가 나오는지는 gpt한테 물어보자
	int number;		// 이 순서가 바뀌면 24랑 32랑 왔다갔다 함.
	double grade;

};

int main()
{
	struct student s;

	s.a = 'a';
	s.b = 'b';

	s.number = 201801378;
	strcpy(s.name, "이준영");
	s.grade = 4.4;

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %lf\n", s.grade);

	printf("구조체의 사이즈 : %u\n", sizeof(s));

	printf("a : %u\n", &s.a);
	printf("b : %u\n", &s.b);

	printf("학번 : %u\n", &s.number);
	printf("이름 : %u\n", &s.name);		// 구조체 선언할 때 여기 12바이트가 할당 瑛. 메모리에 4의 배수값으로 할당되어서 총 24바이트가 할당되게끔 여기 12가 할당瑛.
	printf("학점 : %u\n", &s.grade);	// char name 배열의 길이를 12로 할당하면 메모리 낭비가 없음. 버리는 메모리 없게 구조체 선언하는게 좋음. 4의 배수로 선언 하는게 좋음.

	return 0;
}
*/


// 입력받아서 사용해보자.
/*
#include <stdio.h>

struct student {
	char name[10];
	int number;
	double grade;
};

int main()
{
	struct student s;

	printf("학번을 입력하세요 : ");
	scanf("%d", &s.number);

	printf("이름을 입력하세요 : ");
	scanf("%s", s.name);

	printf("학점을 입력하세요 : ");
	scanf("%.2lf", &s.grade);

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %lf\n", s.grade);

	return 0;
}
*/


// 문제 : 2차원 공간 상의 점을 구조체로 표현하기. 사용자로부터 두 점의 좌표를 입력받아서 두 점사이의 거리를 계산하여 보자. 점의 좌표를 구조체로 표현하자
/*
#include <stdio.h>
#include <math.h>

struct point {
	double a;
	double b;
};

double distance(double x1, double y1, double x2, double y2) {
	double t;
	t = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

	return t;
}

int main()
{
	struct point p1, p2;
	printf("1. 두 점을 입력하세요 : ");
	scanf("%lf %lf", &p1.a, &p1.b);

	printf("2. 두 점을 입력하세요 : ");
	scanf("%lf %lf", &p2.a, &p2.b);

	printf("두 점 사이의 거리는 %.3lf입니다.\n", distance(p1.a, p1.b, p2.a, p2.b));

	return 0;
}
*/



// 사각형을 point 구조체로 나타내기
/*
#include <stdio.h>
#include <math.h>

struct point {
	double a;
	double b;
};

double circum(double x1, double y1, double x2, double y2) {
	return fabs(2 *(x2 - x1)) + fabs(2*(y2 - y1));
}
double area (double x1, double y1, double x2, double y2){
	return fabs((x2 - x1) * (y2 - y1));
}

int main()
{
	struct point p1, p2;
	printf("1. 두 점을 입력하세요 : ");
	scanf("%lf %lf", &p1.a, &p1.b);

	printf("2. 두 점을 입력하세요 : ");
	scanf("%lf %lf", &p2.a, &p2.b);

	printf("두 점의 둘레는 %.3lf입니다.\n", circum(p1.a, p1.b, p2.a, p2.b));
	printf("두 점의 넓이는 %.3lf입니다.\n", area(p1.a, p1.b, p2.a, p2.b));


	return 0;
}
*/




// 구조체와 배열
/*
#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{

	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("학번을 입력하세요 : ");
		scanf("%d", &list[i].number);

		printf("이름을 입력하세요 : ");
		scanf("%s", &list[i].name);

		printf("학점을 입력하세요 : ");
		scanf("%lf", &list[i].grade);

		printf("\n");
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d. 학번 : %d, 이름 : %s, 학점 : %.2lf\n",i + 1, list[i].number, list[i].name, list[i].grade);

	}

	return 0;
}
*/


// 구조체를 가리키는 포인터
/*
#include <stdio.h>

struct student {
	int num;
	char name[20];
	double grade;
};

int main()
{
	struct student s = { 24, "Kim", 4.3 };
	struct student* p;

	p = &s;

	printf("학번 = %d, 이름 = %s, 학점 = %.3lf\n", s.num, s.name, s.grade);
	//printf("학번 = %d, 이름 = %s, 학점 = %lf\n", (*p).num, (*p).name, (*p).grade);
	printf("학번 = %d, 이름 = %s, 학점 = %.3lf\n", p->num, p->name, p->grade);	// *p가 가리지는 주소의 값을 가르킨다

	return 0;
}
*/



//구조체 포인터가 구조체 맴버로 들어가 있는 경우
/*
#include <stdio.h>

struct date {
	int month;
	int day;
	int year;
};
struct student {
	int num;
	char name[20];
	double grade;
	struct date* dob;
};

int main()
{
	struct date d = { 1, 8, 2024 };
	struct student s = { 201801378, "이준영", 4.0 };

	s.dob = &d;

	printf("학번 : %d\n", s.num);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.2lf\n", s.grade);

	printf("%d년 %02d월 %02d일.", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}
*/


// 함수에서 구조체와 포인터 써보기
/*
#include <stdio.h>

struct student {
	int num;
	char name[20];
	double grade;

};

int equal(struct student* p1, struct student* p2) {
	if ((p1->num) == (p2->num)) {
		return 1;
	}
	else return 0;
}

int main()
{

	struct student s1 = { 201801378, "이준영", 4.0 };
	struct student s2 = { 201801355, "태경", 4.0 };

	if (equal(&s1, &s2) == 1) {
		printf("같은 학생\n");
	}
	else printf("다른 학생\n");


	return 0;
}
*/




// 함수의 인자로 전달 되는 구조체 변수
/*
#include <stdio.h>

struct simple {
	int data1;
	int data2;
};

void show(struct simple ts) {
	printf("data1 : %d, data2 : %d\n", ts.data1, ts.data2);	// 구조체 변수를 포인터로 받고 있다. 구조체 변수의 주소값이 전달 받을 수 있도록 되어있음.
}
void swap(struct simple* ps) {
	int temp;
	temp = ps->data1;
	ps->data1 = ps->data2;		// -> 이거 익숙치 않음. 계속 봐야겠음.
	ps->data2 = temp;
}

int main()
{
	struct simple s = { 1, 2 };
	struct simple s2;

	s2 = s;

	show(s2);

	show(s);	// s의 맴버들이 ts에 맴버대 맴버로 넘어감
	swap(&s);	// s의 구조체 변수의 주소가 넘어감
	show(s);

	return 0;
}
*/



// 문제 : 두 백터의 합을 구하는 함수 get_vector_sum()를 제작하여 보자. 이 함수는 두개의 벡터를 인수로 받아서 덧셈을 하고 덧셈의 결과로 생성된 백터를 반환한다.
/*
#include <stdio.h>

struct vector {
	double x;
	double y;
};

struct vector get_vector_sum(struct vector a, struct vector b) {
	struct vector result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}

int main()
{
	struct vector a = { 2.0, 3.0 };
	struct vector b = { 5.0, 6.0 };

	struct vector sum;

	sum = get_vector_sum(a, b);
	printf("백터의 합은 (%.3lf, %.3lf)입니다\n", sum.x, sum.y);

	return 0;
}
*/




// 공용체에 타입 필드 사용
/*
#include <stdio.h>
#include <string.h>
#define STU_NUMBER 1
#define REG_NUMBER 2

struct student {
	int type;
	union {
		int stu_number;
		char reg_number[15];
	}id;
	char name[20];
};

void print(struct student s) {
	switch (s.type) {
	case STU_NUMBER:
		printf("학번 %d\n", s.id.stu_number);
		printf("이름 %s\n", s.name);
		break;

	case REG_NUMBER:
		printf("주민등록번호 : %s\n", s.id.reg_number);
		printf("이름 %s\n", s.name);
		break;

	default:
		printf("타입오류\n");
		break;
	}
}

int main()
{
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 201801378;
	strcpy(s1.name, "이준영");

	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number, "123456-0000000");
	strcpy(s2.name, "태경");

	print(s1);
	print(s2);


	return 0;
}
*/






// 열거형
/*
#include <stdio.h>

enum days {SUN, MON, TUE, WED, THU, FRI, SAT};				// 0부터 시작
//enum days {SUN = 1, MON, TUE, WED, THU, FRI, SAT};		// 1부터 시작
//enum days {SUN = 7, MON = 1, TUE, WED, THU, FRI, SAT};	// 7찍고 1 ~~		순서 제어 가능

char* day_name[] = {
	"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

int main()
{
	enum days d;	// enum 은 컴파일러가 중복이 일어나지 않도록 체크해줌
	d = WED;		// 현재 3으로 인식됨
	printf("%d번째 요일은 %s입니다\n", d, day_name[d]);

	return;
}
*/





// typedef 사용해보기
/*
#include <stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;				// struct point를 POINT로 줄여서 사용할 수 있다.

POINT translate(POINT p, POINT delta) {
	POINT new_p;

	new_p.x = p.x + delta.x;
	new_p.y = p.y + delta.y;

	return new_p;
}

int main()
{
	POINT p = { 2,3 };
	POINT delta = { 10,10 };
	POINT result;

	result = translate(p, delta);
	printf("새로운 점의 좌표는 (%d, %d)입니다.\n", result.x, result.y);

	return 0;
}
*/



// 문제 : 구조체를 이용하여 이메일 표현할 수 있는 구조체를 정의하고, 적당한 초기값을 입력받아 출력하는 프로그램을 작성하세요.
// 구조체 맴버는 제목, 수신자, 발신자, 내용
/*
#include <stdio.h>

typedef struct mail {					// 아직 해결 x
	char title[10];
	char sender[50];
	char receiver[50];
	char content[100];
}MAIL;


int main()
{
	MAIL s;

	printf("메일제목 : ");
	scanf("%s", &s.title);
	printf("수신자 : ");
	scanf("%s", &s.sender);
	printf("발신자 : ");
	scanf("%s", &s.receiver);
	printf("내용 : ");
	scanf("%s", &s.content);	// 버퍼에서 널문자때문에 띄어쓰기가 인식이 안되어서 띄어쓰기 하면 끊김.

	printf("\n메일제목 : %s\n", s.title);
	printf("수신자 : %s\n", s.sender);
	printf("발신자 : %s\n", s.receiver);
	printf("내용 : %s\n", s.content);


	return 0;
}
*/



// 문제 : 구조체를 이용하여 복소수를 실수형으로 정의하고 복소수의 실수와 허수값을 실수형으로 입력 받아 덧셈을 수행하는 함수를 작성하시오. 
// 출력함수는 사용자 정의함수로 선언하여 호출하시오
/*
#include <stdio.h>

typedef struct number {
	double real;
	double imagin;
}NUMBER;

double sum(double i1, double i2) {
	return i1 + i2;
}

int main() {
	NUMBER num1;
	NUMBER num2;

	printf("c1의 실수와 허수를 각각 하나씩 입력하세요 : ");
	scanf("%lf %lf", &num1.real, &num1.imagin);

	printf("c2의 실수와 허수를 각각 하나씩 입력하세요 : ");
	scanf("%lf %lf", &num2.real, &num2.imagin);

	double real = sum(num1.real, num2.real);
	double imagin = sum(num1.imagin, num2.imagin);

	printf("%.2lf + j%.2lf\n", num1.real, num1.imagin);
	printf("%.2lf + j%.2lf\n", num2.real, num2.imagin);

	printf("%.2lf + j%.2lf\n", real, imagin);

	return;
}
*/


//문제  : 2차원 평면에서 좌표 2개를 입력 받아 일치하는지 일치하지 않는지 찾는 함수 equal()을 선언하고 일치하면
// 1을 반환, 일치하지 않으면 0을 반환하여 함수가 호출된 위치로 돌아와 반환된 값을 이용해 일치하면 "일치함",일치하지 않으면 "일치하지 않음"이라는 출력이 나오도록 하시오
// 입력받고 함수 호출하는 부분을 무한루프 안에 넣어 만약에 두번째 좌표가 0,0 으로 입력된다면 루프를 빠져나오게 하시오
/*
#include <stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;

int equal(POINT a, POINT b) {
	if ((a.x == b.x) && (a.y == b.y)) return 1;
	else return 0;
}

int main()
{
	POINT p1, p2;

	while (1) {
		printf("p1의 x와 y좌표 하나씩 입력 : ");
		scanf("%d %d", &p1.x, &p1.y);
		printf("p2의 x와 y좌표 하나씩 입력 : ");
		scanf("%d %d", &p2.x, &p2.y);

		if (p2.x == 0 && p2.y == 0) break;

		if (equal(p1, p2)) {
			printf("일치함.\n");
		}else printf("일치하지 않음.\n");
	}

	return 0;
}
*/
