/* 24.01.02 *********************************************************************************************************************************/

/*
#include <stdio.h>  // 반환형0, 매개변수0, main()으로 정수 2개를 전달 받아 합을 구해 반환하여 출력하는 프로그램 작성

int add(int, int);

int main()
{
	int x, y, sum;

	printf("두개 정수 입력 : ");
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




//반환형0, 매개변수x 함수를 통해 정수 2개를 입력받아 main에서 합을 구하는 코드 작성
/*
#include <stdio.h>

int get_int();

int main()
{
	int x, y, sum;

	x = get_int();
	y = get_int();

	sum = x + y;

	printf("두 수의 합 = %d\n", sum);

	return;
}

int get_int() {
	int x;
	printf("정수 한개 입력 : ");
	scanf("%d", &x);

	return x;
}
*/



// 반환형X, 매개변수0, main에서 정수 2개를 전달받아 함수에서 합을 구해 출력하시오
/*
#include <stdio.h>

void add(int x, int y);

int main()
{
	int x, y;
	printf("두개의 정수를 입력하세요 : ");
	scanf("%d %d", &x, &y);

	add(x, y);

	return;
}

void add(int x, int y) {
	printf("두 수의 합은 %d입니다.", x + y);
}
*/



// 반환형X, 매개변수X 함수에서 구분선을 표시하도록 하시오
/*
#include <stdio.h>

void print();

int main()
{
	int x, y, sum;
	printf("두개의 정수를 입력하세요 : ");
	scanf("%d %d", &x, &y);

	sum = x + y;

	print();

	printf("두 수의 합은 %d입니다.", x + y);


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

	printf("두 정수를 입력하세요 : ");
	scanf("%d %d", &x, &y);

	printf("큰 정수는 %d입니다.", max(x, y));

}

int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else return y;
}
*/



//print_stars() 함수를 2번 호출하여서 프로그램 작성
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





// 팩토리얼 계산 함수 반환형0 배개x
/*
#include <stdio.h>

int fact(void);

int main()
{
	printf("알고 싶은 팩토리얼 값은? ");
	printf("팩토리얼 값은 %d입니다.\n", fact());

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
#include <stdio.h>	// 함수를 이용해서 섭씨 화씨 바꿔보기

void cel(void);
void fah(void);

int main()
{
	int a = 1;
	char i;
	printf("'c' 섭씨온도에서 화씨온도로 변환\n");
	printf("'f' 화씨온도에서 섭씨온도로 변환\n");
	printf("'q' 종료\n");

	while (a) {
		printf("메뉴에서 선택하세요 : ");
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
	printf("섭씨온도 : ");
	scanf("%lf", &c);
	printf("화씨온도 >>> %lf\n", c * 1.8 + 32);

}
void fah(void) {
	double f;
	printf("화씨온도 : ");
	scanf("%lf", &f);
	printf("섭씨온도 >>> %lf\n", (f - 32) / 1.8);
}
*/



/*
#include <stdio.h>		//콤비네이션(C)를 함수를 통해 구하기

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

	printf("정수 한개 입력 : ");
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
//로또 번호 추출
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

	srand(time(NULL));	// 처음에 lotto에 초기화 했다. 그랬더니 랜덤함수가 똑같은 숫자만 나왔다. srand 위치가 매우 중요하다.

	for (int i = 0; i < 6; i++) {
		x = lotto();
		printf("%d ", x);
	}

	return;
}
*/



// 동전 앞뒷면 추출
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int coin_toss(void) {
	int x = rand() % 2;
	if (x == 0) {
		return 0;		//동전의 뒷면
	}
	else return 1;		//동전의 앞면

}

int main()
{
	int toss;
	int heads = 0;
	int tails = 0;

	srand((unsigned)time(NULL)); //음수x

	for (toss = 0; toss < 100; toss++) {
		if (coin_toss() == 1) {
			heads++;
		}
		else tails++;
	}
	printf("동전의 앞면 : %d\n", heads);
	printf("동전의 뒷면 : %d\n", tails);
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



// 사용자로부터 입력받은 실수를 제곱하여 반환하는 함수 double square(double)을 작성한다. square()함수를 main()에서 호출하여 테스트 하는 프로그램을 작성
/*
#include <stdio.h>

double square(double s) {
	return s * s;
}

int main()
{
	double a;
	double b;

	printf("실수를 입력하세요 : ");
	scanf("%lf", &a);

	b = square(a);
	printf("제곱한 결과는 %lf입니다.\n", b);

	return;
}
*/


// 전달된 문자가 알파벳 문자인지 아닌지를 검사하는 함수 check_alpha()를 작성하고 조건문에서 함수를 호출하여 사용자가 입력한 문자 알파벳('A'~'Z', 'a'~'z')인지를 판단하여 반환하여 main에서 "알파벳입니다"를 출력하는 프로그램을 작성하시오.
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
	printf("문자를 입력하세요 : ");
	scanf(" %c", &a);

	if (check_alpha(a) == 1) printf("This is 소문자\n");
	else if (check_alpha(a) == 2) printf("This is 대문자\n");
	else if (check_alpha(a) == 3) printf("This is 기타문자\n");

	return;
}
*/

// 좀 더 효율적인 코드, 리턴이 1과 0만 있으므로 if문 안에서 1,0만 비교함으로써 좀 더 간단하게 코드를 짤 수 있다.
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
	printf("문자를 입력하세요 : ");
	scanf(" %c", &a);

	if (check_alpha(a)) printf("This is 알파벳\n");
	else printf("This is 알파벳 X\n");


	return;
}
*/






//사용자로부터 2개의 정수를 입력받아 
// 1 > 두수를 더하는 함수 add
// 2 > 두 수 중 큰 값을 찾는 함수 max()
// 3 > 두 수 중 작은 값을 찾는 함수를 작성하여 min()
// 4 > 두 수를 입력받는 함수를 작성하여 get_int()
// main에서 각각의 함수를 호출한 뒤 출력을 main에서 하도록 작성.
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
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	return a;
}

int main()
{
	int a, b;

	a = get_int();
	b = get_int();

	printf("두수의 합은 %d입니다.\n", add(a, b));
	printf("최대값은 %d입니다.\n", max(a, b));
	printf("최소값은 %d입니다.\n", min(a, b));

	return;
}
*/




// 사용자로부터 2개의 좌표를 실수로 입력받아 get_int()
// 사분면을 구분하는 함수를 통해 사분면을 출력하는 함수를 작성 print_quadrant()
// Main 함수는 변수의 자료형 선언고 ㅏ함수호출만 하시오.
/*
#include <stdio.h>

double get_int(void) {
	double a;
	printf("점을 입력하세요 : ");
	scanf("%lf", &a);
	return a;
}

void print_quadrant(double x, double y) {
	if ((x > 0) && (y > 0))printf("1사분면\n");
	else if ((x < 0) && (y > 0))printf("2사분면\n");
	else if ((x < 0) && (y < 0))printf("3사분면\n");
	else if ((x > 0) && (y < 0))printf("4사분면\n");
	else if ((x == 0) && (y == 0))printf("원점\n");
	else printf("축 위에 있습니다.\n");
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
