/* 24.01.03 *******************************************************************************************************************************************/

/*
#include <stdio.h>	// 같은 이름의 전역 변수와 지역변수 비교

int sum = 1;		// 전역과 지역 변수가 동일한 이름으로 사용했을 때 지역변수가 이긴다.

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
	//int val = 0;			// 11111 이 나옴. for문에서 실행될때마다 메모리에서 소멸되어서 초기화됨;
	static int val = 0;		// 한번만 초기화 됨. 스태틱에 의해 누적됨.	// 이 부분 잘 이해 안된다. val = 0 부분이 쓰여있는데 왜 0이 안되는거????
	val++;
	printf("%d ", val);
}
*/


/*
#include <stdio.h>

void sub() {
	static int scount = 0;
	int acount = 0;
	printf("scount = %d  ", scount);	//scount는 static으로 인해 계속 +1이 됨.
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
	static int scount;	// 이렇게 초기화 하면 둘다 0이 나옴. static은 그 변수에서 static int scount = 0; 이라고 초기화를 해야 효과가 있는 것 같음.
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




//돈만 생기면 전금하는 사람을 가정하자. 이 사람을 위한 함수 save를 작성하여 보자. 이 함수는 저금할 금액을 나타내는 amount만을 받으며 save(100)과 같이 호출된다 ~~ 사진
/*
예시
*/



/*
#include <stdio.h>		// 가변 매개변수 : 매개변수의 개수를 맨 앞에 적어주고 매개변수를 적음
#include <stdarg.h>

int sum(int, ...);

int main()
{
	int answer = sum(4, 4, 3, 2, 1);
	printf("합은 %d입니다.\n", answer);

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
#include <stdio.h>		// 재귀함수로 팩토리얼 구하기

long factorial(int n) {
	printf("factorial(%d)\n", n);

	if (n <= 1)return 1;
	else return n * factorial(n - 1);
}

int main(void)
{
	long n;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);
	printf("%d!은 %d입니다.\n", n, factorial(n));

	return 0;
}
*/


/*
#include <stdio.h>		// 재귀함수를 통해 1부터 n까지의 합 구하기

int add(int n) {
	if (n <= 0) return 0;
	else return (n + add(n - 1));
}

int main()
{
	int n, sum;

	printf("1부터 n까지의 합을 구하시오 : ");
	scanf("%d", &n);

	sum = add(n);

	printf("%d까지의 합 : %d", n, sum);

	return 0;
}
*/



//두 개의 정수 m,n을 입력 받아서 n이 m의 배수이면 1을 반환하고 그렇지 않으면 0을 반환하는 함수 is_multiple(int n, int m)을 작성하시오
/*
#include <stdio.h>

int is_multiple(int n, int m) {
	if (m % n == 0) return 1;
	else return 0;
}

int main()
{
	int n, m;

	printf("n과 m을 입력하세요 : ");
	scanf("%d %d", &n, &m);

	if (is_multiple(n, m)) printf("%d는 %d의 배수입니다.", m, n);
	else printf("%d는 %d의 배수가 아닙니다.", m, n);


	return 0;
}
*/



// 은행에 설치되어 있는 ATM장치를 프로그램으로 구현해보자.
// 입금합수 > deposit(), 입금된 잔고를 출력하시오.
// 출금함수 > withdraw(), 잔고가 부족할때는 부족하다는 메시지를 출력하시오
// 잔액, 입금, 출금, 종료를 선택하는 코드 choice_num() 함수로 만들어 입금함수와 출력함수를 호출하도록 하시오
/*
#include <stdio.h>

int money = 0;

void deposit(void) {
	int input;
	printf("입금 금액을 입력하세요 : ");
	scanf("%d", &input);

	money += input;

	printf("잔고는 %d입니다.", money);
}
void withdraw(void) {
	int output;
	printf("출금 금액을 입력하세요 : ");
	scanf("%d", &output);

	money -= output;

	printf("잔고는 %d입니다.", money);


}
int choice_num(void) {
	int a;
	int b = 1;
	while (b) {
		printf("잔액(1), 입금(2), 출금(3), 종료(0)를 선택하세요.");
		scanf("%d", &a); //???????????????????????????????????????????????????????????????

		if (a == 1) {
			printf("잔액은 %d입니다.", money);
		}
		else if (a == 2) {
			deposit();
		}
		else if (a == 3) {
			withdraw();
		}
		else {
			b = 0;
			printf("종료합니다.\n");
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
#include <stdio.h>		// 배열 기본

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
#include <stdio.h>		// 배열을 초기화 하는 법, 초기화 한 값들을 출력하는 법
#define STUDENTS 5
int main()
{
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++) {
		printf("학생들의 성적을 입력하세요 : ");
		scanf("%d", &scores[i]);
	}
	for (i = 0; i < STUDENTS; i++) {
		sum += scores[i];
	}

	average = sum / STUDENTS;
	printf("성적 평균 = %d\n", average);


	return 0;
}
*/


/*
#include <stdio.h>

int main(void)		// 초기화 방법과 초기화를 하지 않았을 때 쓰래기 값이 들어가는 것 확인
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
#include <stdio.h>		//a와 b 배열 비교해보기
#define SIZE 5

int main(void)
{
	int i;
	int a[SIZE] = { 1, 2, 3, 4, 5 };
	int b[SIZE] = { 1, 2, 3, 4, 4 };

	for (i = 0; i < SIZE; i++) {
		if (a[i] != b[i]) {
			printf("a[]와 b[]는 같지 않습니다.\n");
			return 0;
		}
	}
	printf("a[]와 b[]는 같습니다.\n");

	return 0;
}
*/



/*
#include <stdio.h>		// 주사위 횟수 출력하기 // 시험 문제 나올 거 같음 // 주사위를 1000번 던져서 각 면이 나오는 획수를 출력하기
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
		printf("%d눈은 %d번 나왔습니다.\n", p+1, c[p]);
	}

	return 0;
}
*/

// 주사위 GPT가 짜준거
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROLLS 1000
#define DICE_FACES 6

int main() {
	int dice_counts[DICE_FACES] = { 0 }; // 각 면의 횟수를 저장할 배열 초기화
	int roll;
	srand(time(NULL)); // 난수 생성기 초기화

	for (int i = 0; i < NUM_ROLLS; i++) {
		roll = rand() % DICE_FACES + 1; // 1부터 6까지의 난수 생성
		dice_counts[roll - 1]++; // 해당 면의 횟수 증가
	}

	// 결과 출력
	for (int i = 0; i < DICE_FACES; i++) {
		printf("면 %d: %d번\n", i + 1, dice_counts[i]);
	}

	return 0;
}
*/



/*
#include <stdio.h>		// 극장 좌석 예약하기
#define SIZE 10

int main()
{
	char ans1;
	int ans2, i;
	int seats[SIZE] = { 0 };
	while (1) {
		printf("좌석을 예약하시겠습니까?(Y or N) : ");
		scanf(" %c", &ans1);

		if (ans1 == 'Y') {
			printf("=============================\n");
			printf(" 1 2 3 4 5 6 7 8 9 10\n");
			printf("=============================\n");

			for (i = 0; i < SIZE; i++) {
				printf(" %d", seats[i]);
			}
			printf("\n");
			printf("몇번째 좌석을 예약하시겠습니까? : ");
			scanf("%d", &ans2);
			if (ans2 <= 0 || ans2 > SIZE) {
				printf("1부터 10사이의 숫자를 입력하세요\n\n");
				continue;
			}
			if (seats[ans2 - 1] == 0) {
				seats[ans2 - 1] = 1;
				printf("예약되었습니다.\n\n");
			}
			else printf("이미 예약된 자리입니다.\n\n");
		}
		else if (ans1 == 'N') return 0;
	}

	return 0;
}
*/



/*
#include <stdio.h>		// 배열과 함수를 이용해 입력값들의 평균 구하기. 배열에 점수들 저장. 배열은 값을 저장하고 함수에서 빠져나와도 값이 변하지 않음.
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
	printf("5개의 점수를 입력하세요 : ");
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
	printf("평균은 %d입니다.\n", avg);

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



/* 오답노트 ***********************************************************************************************/

/*
#include <stdio.h>	// 24.01.03 문제 틀린거 다시 짜보기 2번
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
#include <stdio.h>	// 24.01.03 문제 틀린거 다시 짜보기 1번

int main()
{
	int i;
	int m, n;
	int total = 1;
	while (1) {
		printf("구하고자 하는 제곱근의 밑수와 n제곱 하고싶은 n을 입력하세요.");
		scanf("%d %d", &m, &n);	// m 밑수  n 제곱근
		if ((m <= 0) || (n <= 0)) {
			printf("잘못된 수 입력.\n");
			continue;
		}
		for (i = 0; i < n; i++) {
			total *= m;
			printf("%d의 %d 제곱 = %d\n", m, i + 1, total);
		}
		total = 1;	// 초기화

	}


	return 0;
}
*/

