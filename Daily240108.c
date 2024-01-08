/* 24.01.08 ***********************************************************************************************************************************/
// ����ü ����

//����ü�� �⺻.
/*
#include <stdio.h>

struct student {

	char a;
	char b;
	char name[10];	// ������ �ٲ�� 32����Ʈ�� �ٲ�. ����ü ũ��(�޸� �Ҵ�)�� ������ ���ΰ���. ������ �ٲ�� �� 32byte�� ���������� gpt���� �����
	int number;		// �� ������ �ٲ�� 24�� 32�� �Դٰ��� ��.
	double grade;

};

int main()
{
	struct student s;

	s.a = 'a';
	s.b = 'b';

	s.number = 201801378;
	strcpy(s.name, "���ؿ�");
	s.grade = 4.4;

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.2lf\n", s.grade);

	printf("����ü�� ������ : %u\n", sizeof(s));

	printf("a : %u\n", &s.a);
	printf("b : %u\n", &s.b);

	printf("�й� : %u\n", &s.number);
	printf("�̸� : %u\n", &s.name);		// ����ü ������ �� ���� 12����Ʈ�� �Ҵ� ����. �޸𸮿� 4�� ��������� �Ҵ�Ǿ �� 24����Ʈ�� �Ҵ�ǰԲ� ���� 12�� �Ҵ����.
	printf("���� : %u\n", &s.grade);	// char name �迭�� ���̸� 12�� �Ҵ��ϸ� �޸� ���� ����. ������ �޸� ���� ����ü �����ϴ°� ����. 4�� ����� ���� �ϴ°� ����.

	return 0;
}
*/


// �Է¹޾Ƽ� ����غ���.
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

	printf("�й��� �Է��ϼ��� : ");
	scanf("%d", &s.number);

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &s.name);

	printf("������ �Է��ϼ��� : ");
	scanf("%.2lf", &s.grade);

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %lf\n", s.grade);

	return 0;
}
*/


// ���� : 2���� ���� ���� ���� ����ü�� ǥ���ϱ�. ����ڷκ��� �� ���� ��ǥ�� �Է¹޾Ƽ� �� �������� �Ÿ��� ����Ͽ� ����. ���� ��ǥ�� ����ü�� ǥ������
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
	printf("1. �� ���� �Է��ϼ��� : ");
	scanf("%lf %lf", &p1.a, &p1.b);

	printf("2. �� ���� �Է��ϼ��� : ");
	scanf("%lf %lf", &p2.a, &p2.b);

	printf("�� �� ������ �Ÿ��� %.3lf�Դϴ�.\n", distance(p1.a, p1.b, p2.a, p2.b));

	return 0;
}
*/



// �簢���� point ����ü�� ��Ÿ����
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
	printf("1. �� ���� �Է��ϼ��� : ");
	scanf("%lf %lf", &p1.a, &p1.b);

	printf("2. �� ���� �Է��ϼ��� : ");
	scanf("%lf %lf", &p2.a, &p2.b);

	printf("�� ���� �ѷ��� %.3lf�Դϴ�.\n", circum(p1.a, p1.b, p2.a, p2.b));
	printf("�� ���� ���̴� %.3lf�Դϴ�.\n", area(p1.a, p1.b, p2.a, p2.b));


	return 0;
}
*/




// ����ü�� �迭
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
		printf("�й��� �Է��ϼ��� : ");
		scanf("%d", &list[i].number);

		printf("�̸��� �Է��ϼ��� : ");
		scanf("%s", &list[i].name);

		printf("������ �Է��ϼ��� : ");
		scanf("%lf", &list[i].grade);

		printf("\n");
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d. �й� : %d, �̸� : %s, ���� : %.2lf\n",i + 1, list[i].number, list[i].name, list[i].grade);

	}

	return 0;
}
*/


// ����ü�� ����Ű�� ������
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

	printf("�й� = %d, �̸� = %s, ���� = %.3lf\n", s.num, s.name, s.grade);
	//printf("�й� = %d, �̸� = %s, ���� = %lf\n", (*p).num, (*p).name, (*p).grade);
	printf("�й� = %d, �̸� = %s, ���� = %.3lf\n", p->num, p->name, p->grade);	// *p�� �������� �ּ��� ���� ����Ų��

	return 0;
}
*/



//����ü �����Ͱ� ����ü �ɹ��� �� �ִ� ���
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
	struct student s = { 201801378, "���ؿ�", 4.0 };

	s.dob = &d;

	printf("�й� : %d\n", s.num);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.2lf\n", s.grade);

	printf("%d�� %02d�� %02d��.", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}
*/


// �Լ����� ����ü�� ������ �Ẹ��
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

	struct student s1 = { 201801378, "���ؿ�", 4.0 };
	struct student s2 = { 201801355, "�°�", 4.0 };

	if (equal(&s1, &s2) == 1) {
		printf("���� �л�\n");
	}
	else printf("�ٸ� �л�\n");


	return 0;
}
*/




// �Լ��� ���ڷ� ���� �Ǵ� ����ü ����
/*
#include <stdio.h>

struct simple {
	int data1;
	int data2;
};

void show(struct simple ts) {
	printf("data1 : %d, data2 : %d\n", ts.data1, ts.data2);	// ����ü ������ �����ͷ� �ް� �ִ�. ����ü ������ �ּҰ��� ���� ���� �� �ֵ��� �Ǿ�����.
}
void swap(struct simple* ps) {
	int temp;
	temp = ps->data1;
	ps->data1 = ps->data2;		// -> �̰� �ͼ�ġ ����. ��� ���߰���.
	ps->data2 = temp;
}

int main()
{
	struct simple s = { 1, 2 };
	struct simple s2;

	s2 = s;

	show(s2);

	show(s);	// s�� �ɹ����� ts�� �ɹ��� �ɹ��� �Ѿ
	swap(&s);	// s�� ����ü ������ �ּҰ� �Ѿ
	show(s);

	return 0;
}
*/



// ���� : �� ������ ���� ���ϴ� �Լ� get_vector_sum()�� �����Ͽ� ����. �� �Լ��� �ΰ��� ���͸� �μ��� �޾Ƽ� ������ �ϰ� ������ ����� ������ ���͸� ��ȯ�Ѵ�.
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
	printf("������ ���� (%.3lf, %.3lf)�Դϴ�\n", sum.x, sum.y);

	return 0;
}
*/




// ����ü�� Ÿ�� �ʵ� ���
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
		printf("�й� %d\n", s.id.stu_number);
		printf("�̸� %s\n", s.name);
		break;

	case REG_NUMBER:
		printf("�ֹε�Ϲ�ȣ : %s\n", s.id.reg_number);
		printf("�̸� %s\n", s.name);
		break;

	default:
		printf("Ÿ�Կ���\n");
		break;
	}
}

int main()
{
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 201801378;
	strcpy(s1.name, "���ؿ�");

	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number, "123456-0000000");
	strcpy(s2.name, "�°�");

	print(s1);
	print(s2);


	return 0;
}
*/






// ������
/*
#include <stdio.h>

enum days {SUN, MON, TUE, WED, THU, FRI, SAT};				// 0���� ����
//enum days {SUN = 1, MON, TUE, WED, THU, FRI, SAT};		// 1���� ����
//enum days {SUN = 7, MON = 1, TUE, WED, THU, FRI, SAT};	// 7��� 1 ~~		���� ���� ����

char* day_name[] = {
	"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

int main()
{
	enum days d;	// enum �� �����Ϸ��� �ߺ��� �Ͼ�� �ʵ��� üũ����
	d = WED;		// ���� 3���� �νĵ�
	printf("%d��° ������ %s�Դϴ�\n", d, day_name[d]);

	return;
}
*/





// typedef ����غ���
/*
#include <stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;				// struct point�� POINT�� �ٿ��� ����� �� �ִ�.

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
	printf("���ο� ���� ��ǥ�� (%d, %d)�Դϴ�.\n", result.x, result.y);

	return 0;
}
*/



// ���� : ����ü�� �̿��Ͽ� �̸��� ǥ���� �� �ִ� ����ü�� �����ϰ�, ������ �ʱⰪ�� �Է¹޾� ����ϴ� ���α׷��� �ۼ��ϼ���.
// ����ü �ɹ��� ����, ������, �߽���, ����
/*
#include <stdio.h>

typedef struct mail {					// ���� �ذ� x
	char title[10];
	char sender[50];
	char receiver[50];
	char content[100];
}MAIL;


int main()
{
	MAIL s;

	printf("�������� : ");
	scanf("%s", &s.title);
	printf("������ : ");
	scanf("%s", &s.sender);
	printf("�߽��� : ");
	scanf("%s", &s.receiver);
	printf("���� : ");
	scanf("%s", &s.content);	// ���ۿ��� �ι��ڶ����� ���Ⱑ �ν��� �ȵǾ ���� �ϸ� ����.

	printf("\n�������� : %s\n", s.title);
	printf("������ : %s\n", s.sender);
	printf("�߽��� : %s\n", s.receiver);
	printf("���� : %s\n", s.content);


	return 0;
}
*/



// ���� : ����ü�� �̿��Ͽ� ���Ҽ��� �Ǽ������� �����ϰ� ���Ҽ��� �Ǽ��� ������� �Ǽ������� �Է� �޾� ������ �����ϴ� �Լ��� �ۼ��Ͻÿ�. 
// ����Լ��� ����� �����Լ��� �����Ͽ� ȣ���Ͻÿ�
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

	printf("c1�� �Ǽ��� ����� ���� �ϳ��� �Է��ϼ��� : ");
	scanf("%lf %lf", &num1.real, &num1.imagin);

	printf("c2�� �Ǽ��� ����� ���� �ϳ��� �Է��ϼ��� : ");
	scanf("%lf %lf", &num2.real, &num2.imagin);

	double real = sum(num1.real, num2.real);
	double imagin = sum(num1.imagin, num2.imagin);

	printf("%.2lf + j%.2lf\n", num1.real, num1.imagin);
	printf("%.2lf + j%.2lf\n", num2.real, num2.imagin);

	printf("%.2lf + j%.2lf\n", real, imagin);

	return;
}
*/


//����  : 2���� ��鿡�� ��ǥ 2���� �Է� �޾� ��ġ�ϴ��� ��ġ���� �ʴ��� ã�� �Լ� equal()�� �����ϰ� ��ġ�ϸ�
// 1�� ��ȯ, ��ġ���� ������ 0�� ��ȯ�Ͽ� �Լ��� ȣ��� ��ġ�� ���ƿ� ��ȯ�� ���� �̿��� ��ġ�ϸ� "��ġ��",��ġ���� ������ "��ġ���� ����"�̶�� ����� �������� �Ͻÿ�
// �Է¹ް� �Լ� ȣ���ϴ� �κ��� ���ѷ��� �ȿ� �־� ���࿡ �ι�° ��ǥ�� 0,0 ���� �Էµȴٸ� ������ ���������� �Ͻÿ�
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
		printf("p1�� x�� y��ǥ �ϳ��� �Է� : ");
		scanf("%d %d", &p1.x, &p1.y);
		printf("p2�� x�� y��ǥ �ϳ��� �Է� : ");
		scanf("%d %d", &p2.x, &p2.y);

		if (p2.x == 0 && p2.y == 0) break;

		if (equal(p1, p2)) {
			printf("��ġ��.\n");
		}else printf("��ġ���� ����.\n");
	}

	return 0;
}
*/