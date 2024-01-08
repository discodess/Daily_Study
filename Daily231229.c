/* 23.12.29 ***********************************************************************************************************************************************/

/*
#include <stdio.h>	// 의도적 break 문을 작성함으로써 코드가 굉장히 간단해졌다

int main()
{
	char a;

	printf("문자 하나를 입력하세요 : ");
	scanf("%c", &a);

	switch (a)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("모음입니다");
			break;

		default:
			printf("자음입니다");

	return 0;
}
*/




//놀이공원에서 롤러코스터에 타려면 키가 140 이상이고 나이가 10살 이상이여야 한다. 사용자에게 키와 나이를 질문한 후에 "타도 좋습니다" 또는 "죄송합니다"를 출력하는 프로그램을 작성하자
/*
#include <stdio.h>	// 조건문 2개를 활용해 if문을 작성함

int main()
{
	int cm, age;

	printf("키가 어떻게 되시나요? : ");
	scanf("%d", &cm);
	printf("나이가 어떻게 되시나요? : ");
	scanf("%d", &age);

	if ((cm >= 140) && (age >= 10)) {
		printf("타도 좋습니다.\n");
	}else printf("죄송합니다.\n");

	return 0;
}
*/


//x,y 좌표를 입력받아서 좌표가 속하는 사분면을 화면에 출력하는 프로그램을 작성하시오. 축 위에 좌표가 존재할 경우 잘못 입력하였다는 문구를 출력하시오. 원점을 입력할 경우 원점이라고 출력하도록 하시오.
/*
#include <stdio.h>

int main()
{
	int x, y;

	printf("x, y 좌표를 입력하세요 : ");
	scanf("%d %d", &x, &y);

	if ((x == 0) && (y == 0)) {
		printf("원점입니다.");
	}else if((x > 0) && (y > 0)) {
		printf("1사분면입니다.");
	}else if ((x < 0) && (y > 0)) {
		printf("2사분면입니다.");
	}else if ((x < 0) && (y < 0)) {
		printf("3사분면입니다.");
	}else if ((x > 0) && (y < 0)) {
		printf("4사분면입니다.");
	}else printf("축 위에 표시되었습니다.");

	return 0;
}
*/




//2자리 숫자로 이루어진 복권이 있다(숫자 총 1개). 사용자가 가지고 있는 복권 번호가 2자리 모두 일치하면 100만원을 받고 2자리 중 하나만 일치하면 50만원을 받는다.
//하나도 일치하지 않으면 상금은 없다. 복권번호는 임의의 숫자로 미리 적어두고 입력을 받도록한다.

/*
#include <stdio.h>			// 복권 순서에 상관없이 조건문을 이용하여 당첨되게끔 설계하였다

int main()
{
	int input;
	int book = 54; //랜덤 함수는 아직 안배웠기 때문에 임의의 숫자를 넣는다.

	printf("복권 번호를 입력하세요 : ");
	scanf("%d", &input);

	if (((book / 10) == (input / 10)) || ((book % 10) == (input / 10)) || ((book % 10) == (input % 10)) || ((book / 10) == (input % 10))) {
		printf("50만원 당첨");
	}
	else if (book == input) {	// (54 45), (45 54) 는 아직 구현을 못했다. 54 54 만 입력됬을 때 100만원을 받게 설계됨 고칠필요있다.
		printf("100만원 당첨");
	}
	else printf("꽝");

	return 0;
}
*/






//반복문 시작 while문 
// 내가 원하는 구구단 출력하는 프로그램
// while (i <= 9); 이라는 실수를 함. 조심하도록

/*
#include <stdio.h>

int main()
{
	int n;
	int i = 1;

	printf("출력하고 싶은 단 : ");
	scanf("%d", &n);

	while (i <= 9)
	{
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}

	return 0;
}
*/




//1부터 n까지 합 계산하는 프로그램 작성
/*
#include <stdio.h>		//	계속 scanf("%d", n"); 실수를 한다. 버릇을 들여서 &를 필히 써서 scanf("%d", &n);라 작성하자

int main()
{
	int i, n, sum;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);


	return 0;
}
*/




// 감소 연산자 연습, while() 안에 음수가 들어가도 참으로 인식
// while(0)이 들어가서 while 문 탈출하는 것
/*
#include <stdio.h>

int main(void)
{
	int i = 3;
	while (i) {
		printf("%d는 참입니다.\n", i);
		i--;
	}
	printf("%d는 거짓입니다.\n", i);

	return 0;
}
*/




/*
//센티널 사용 예제(끝값을 알리는 것)
#include <stdio.h>

int main()
{
	int grade, n;
	float sum, average;

	n = 0;
	sum = 0;
	grade = 0;	//점수

	printf("종료시 음수를 입력하세요.\n");

	while (grade >= 0) {
		printf("성적을 입력하세요 : ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;	// 마지막에 입력하는 값이 while문에서 탈출하기 위한 값임으로 제거해야한다.
	n--;				// n 또한 마찬가지

	average = sum / n;
	printf("성적 평균은 %f입니다.\n", average);


	return 0;
}
*/





/*
//do while문 연습
//숫자 맞추기
//random 아직 안배웠기 때문에 임의의 숫자 대입
#include <stdio.h>

int main()
{
	int answer = 59; //정답
	int guess;
	int tries = 0;
	do {
		printf("정답을 추측하여 보세요.");
		scanf("%d", &guess);					//또 & 실수를 했다. 조심하도록
		tries++;
		if (guess > answer) {
			printf("제시한 점수가 높습니다.\n\n");
		}
		if (guess < answer) {
			printf("제시한 점수가 낮습니다.\n\n");
		}

	} while (guess != answer);
	printf("축하합니다. 시도횟수는 %d회 입니다.\n", tries);

	return 0;
}
*/




/*
// random을 사용하여 숫자 맞추기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int answer = rand() % 99 + 1; //정답  1 ~ 99 사이
	int guess;
	int tries = 0;
	do {
		printf("정답을 추측하여 보세요.");
		scanf("%d", &guess);					//또 & 실수를 했다. 조심하도록
		tries++;
		if (guess > answer) {
			printf("제시한 점수가 높습니다.\n\n");
		}
		if (guess < answer) {
			printf("제시한 점수가 낮습니다.\n\n");
		}

	} while (guess != answer);
	printf("축하합니다. 시도횟수는 %d회 입니다.\n", tries);

	return 0;

}
*/





//for 문으로 입력값부터 100까지 합 구하기 코드 짜기
/*
#include <stdio.h>

int main()
{
	int in;
	int sum = 0;
	printf("정수를 입력하세요 : ");
	scanf("%d", &in);

	for (in ; in <= 100; in++) {
		sum = sum + in;
	}
	printf("총 합은 %d입니다.\n", sum);



	return 0;
}
*/




//for문으로 팩토리얼 계산하기, 오버 플로우를 발생시켜 어떻게 나오는지 확인(약 17정도를 입력하면 오버 플로우 발생)
/*
#include <stdio.h>

int main()
{
	long fact = 1;
	int i, n;

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		fact = fact * i;
	}

	printf("%d! = %10d입니다.\n", n, fact);


	return 0;
}
*/




/*
//중첩의 for을 이용해서 *기호로 사각형 모양 출력하기
#include <stdio.h>

int main()
{

	int x, y;

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 10; x++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
*/



/*
//*로 삼각형 만들기
#include <stdio.h>

int main()
{

	int x, y;

	for (y = 1; y < 8; y++) {
		for (x = 0; x < y; x++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
*/




/*
//각 변의 길이가 100 보다 작은 삼각형 중에서 피타고라스의 정리가 성립하는 직각 삼각형은 몇개나 있을까?

#include <stdio.h>

int main()
{
	int a;		//int a = 1; 로 밖에서 초기화 이후 for문에 진입/ for (a; a <= 100; a++)로 작성했더니 그대로 종료됬음. 초기화는 for문 안에서 하도록!!
	int b;
	int c;

	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = 1; c <= 100; c++) {
				if ((c * c) == ((b * b) + (a * a))) {
					printf("밑변 : %d, 높이 : %d, 빗변 : %d\n", a, b, c);
				}
			}
		}
	}


	return 0;
}
*/





/*
// 사용자로부터 입력받은 실수의 제곱근을 구하여 출력하시오. 음수가 입력되면 반복문을 빠져나감

#include <stdio.h>
#include <math.h>

int main()
{
	double v;

	while (1) {
		printf("실수 값을 입력하세요 : ");
		scanf("%lf", &v);
		if (v < 0.0) {
			break;
		}
		printf("%lf의 제곱근은 %f입니다.\n", v, sqrt(v));
	}


	return 0;
}
*/




//소문자를 대문자로 변경한다					중요!!!!!!!!!!!!!!!!!!!!!!!!!
/*
#include <stdio.h>

int main()
{
	char letter;

	while (1)
	{
		printf("소문자를 입력하시오 : ");		//문자는 버퍼에 들어감
		scanf(" %c", &letter);			//널문자v%c 따라오는 문자를 잘라줌		이해가 잘 안됨.

		if (letter == 'Q') break;
		if (letter < 'a' || letter >'z') continue;

		letter -= 32;
		printf("변환된 대문자는 %c입니다.\n", letter);
	}

	return 0;
}
*/




/*
// 음수 입력시 종료
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a = 1;
	int x, y, answer, i;
	srand(NULL);

	while (1) {

		x = rand() % 10;
		y = rand() % 10;

		printf("음수 입력시 중지\n\n");
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);

		if (answer < 0) {
			//a = 0;
			break;
		}
		if (x + y == answer) {
			printf("정답\n\n");
		}
		else printf("오답\n\n");

	}

	return 0;
}
*/


/*
//* 거꾸로 삼각형 나오게
#include <stdio.h>

int main()
{
	//int x, y;

	for (int i = 0; i < 10 ; i++)
	{
		for (int j = 10; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
*/



/*
//중첩의 반복문을 사용하여 다음과 같은 겨로가가 나오도록 프로그래밍 하시오

#include <stdio.h>

int main()
{
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%d", i);
		}
		printf("\n");
	}


	return 0;
}
*/




/*
//중첩의 반복문을 사용하여 다음과 같은 결과가 나오도록 프로그래밍 하시오.

#include <stdio.h>

int main()
{
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}


	return 0;
}
*/




//중첩의 반복문을 사용하여 다음과 같은 결과가 나오도록 프로그래밍 하시오
//모래시계
/*
#include <stdio.h>
int main()
{
	int p = 0;

	for (int y = 0; y < 9; y += 2) {
		for (int p = 0; p < y/2; p++) {
			printf(" ");
		}

		for (int x = 9; x > y; x--) {
			printf("*");
		}
		printf("\n");
	}
	for (int y = 9; y > 0; y -= 2) {
		for (int x = 0; x < y / 2; x++) {
			printf(" ");
		}
		for (int p = 9; p >= y; p--) {
			printf("*");
		}


		printf("\n");
	}



	return 0;
}
*/

//적절한 모래시계 코드
/*
#include <stdio.h>

int main() {
	int i, j, k, n = 5; // n은 모래시계의 크기입니다.

	// 상단 부분
	for (i = n; i >= 1; i--) {
		for (j = n; j > i; j--) {
			printf(" ");
		}
		for (k = 1; k <= (2 * i - 1); k++) {
			printf("*");
		}
		printf("\n");
	}

	// 하단 부분
	for (i = 2; i <= n; i++) {
		for (j = n; j > i; j--) {
			printf(" ");
		}
		for (k = 1; k <= (2 * i - 1); k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
*/
