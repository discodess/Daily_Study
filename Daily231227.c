/* 23.12.27 ***********************************************************************************************/
///*두 개의 숫자의 합을 계산하는 프로그램*/
//#include <stdio.h>
//
//int main(void)
//{
//	int x;
//	int y;
//	int sum;
//
//	//x = 100;
//	//y = 200;
//	printf("정수 2개 입력 : ");
//	scanf("%d %d", &x, &y);
//
//	sum = x + y;
//
//	printf("x + y = %d\n", sum);
//	printf("%d + %d = %d\n", x, y, sum);
//
//	return;
//}

/*연봉 계산*/

//#include <stdio.h>
//
//int main(void)
//{
//	int y_money;
//
//	printf("연봉을 입력하시오(단위: 만원) : ");
//	scanf("%d", &y_money);
//	
//	printf("월 수력액(단위: 만원): %d\n", y_money/12);
//
//	return;
//}



///*반지름을 입력 받아 원의 면적을 구하는 코드*/
//#include <stdio.h>
//#define PI 3.141592

//int main(void)
//{
//	double r;
//	double circle;
//	printf("원의 반지름을 입력하세요 : ");
//	scanf("%lf", &r);
//
//	circle = r * r * PI;
//	printf("원의 넓이는 %lf 입니다.\n", circle);
//	printf("원의 넓이는 %lf 입니다.\n", r*r*PI);
//
//	return;
//}


//#include <stdio.h>
//
//void main(void)
//{
//	int a;
//	a = 12345;
//
//	printf("(1) value = %d\n", a);
//	printf("(2) value = %3d\n", a);
//	printf("(3) value = %8d\n", a);
//	printf("(4) value = %08d\n", a);
//}

//#include <stdio.h>
//int main()
//{
//	float x;
//	x = 136.578900;
//	printf("(1) x=%f\n", x);
//	printf("(2) x=%.3f\n", x);
//	printf("(3) x=%10.5f\n", x);
//	printf("(4) x=%012.5f\n", x);
//}


//#include <stdio.h>
//int main()
//{
//	int a;
//	a = 12345;
//	
//	printf("(1) 10진수 = %d\n", a);
//	printf("(2) 8진수 = %#o\n", a);
//	printf("(3) 16진수 = %#x\n\n\n", a);
//	printf("(2) 8진수 = %o\n", a);
//	printf("(3) 16진수 = %x\n", a);
//
//}

//#include <stdio.h>
//int main()
//{	
//	double first, second, third, avg;
//
//	printf("세계의 실수를 입력하세요 : ");
//	scanf("%lf %lf %lf", &first, &second, &third);
//
//	avg = (first + second + third) / 3;
//
//	printf("평균값은 %.3lf이다.", avg);
//
//	return;
//}


//#include <stdio.h>
//int main()
//{
//	double high, floor;
//	double area;
//
//	printf("높이와 밑변을 입력하세요 : ");
//	scanf("%lf %lf", &high, &floor);
//
//	area = (high * floor) / 2;
//
//	printf("삼각형의 넓이는 %.2lf입니다.\n", area);
//
//	return;
//}


//#include <stdio.h>
//int main()
//{
//	double x;
//	double a;
//	printf("x값을 입력하세요 : ");
//	scanf("%lf", &x);
//
//	a = 3*x*x + 7*x + 11;
//
//	printf("3x^2 + 7x + 11 = %.2lf", a);
//
//	return;
//}


//#include <stdio.h>
//int main()
//{
//	double x;
//	x = -3;
//	printf("%lf", x);
//
//	return;
//}



// 사이즈 크기 찾기
//#include <stdio.h>
//
//int main(void)
//{
//	int x;
//	printf("변수 x의 크기 : %d\n", sizeof(x));
//	printf("char형의 크기 : %d\n", sizeof(char));
//	printf("int형의 크기 : %d\n", sizeof(int));
//	printf("short형의 크기 : %d\n", sizeof(short));
//	printf("long형의 크기 : %d\n", sizeof(long));
//	printf("long long형의 크기 : %d\n", sizeof(long long));
//	printf("float형의 크기 : %d\n", sizeof(float));
//	printf("double형의 크기 : %d\n", sizeof(double));
//
//
//	return 0;
//}


//
//#include <stdio.h>
//#include <limits.h>

//int main(void)
//{
//	short s_money = SHRT_MAX;
//	unsigned short u_money = USHRT_MAX;
//
//	s_money = s_money + 1;
//	printf("s_money = %d\n", s_money);
//
//	u_money = u_money + 1;
//	printf("u_money = %d\n", u_money);
//
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int x = 10;
//	int y = 010;
//	int z = 0x10;
//
//	printf("x = %d\n", x);
//	printf("y = %d\n", y);
//	printf("z = %d\n", z);
//	printf("x = %d, x = %#o, x = %#x\n", x, x, x);
//
//	return 0;
//}


//#include <stdio.h>
//#define TAX_RATE 0.2
//
//int main()
//{
//	const int MONTHS = 12;
//	int m_salary, y_salary, tax;
//
//	printf("월급을 입력하시요 : ");
//	scanf("%d", &m_salary);
//
//	printf("달을 입력하시요 : ");
//	scanf("%d", &MONTHS);
//	
//	y_salary = MONTHS * m_salary;
//	tax = y_salary * TAX_RATE;
//
//	printf("연봉은 %d입니다.\n", y_salary);
//	printf("세금은 %d입니다.\n", tax);
//	printf("세금은 %f입니다.\n", y_salary * TAX_RATE);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int x = 3;
//	int y = -3;
//
//	printf("x = %08X\n", x);
//	printf("x = %08X\n", y);
//	printf("x + y = %08X\n", x+y);
//
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char code1 = 'A';
//	char code2 = 65;
//
//	printf("code1 = %c\n", code1);
//	printf("code2 = %c\n", code2);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char code1 = 'A';
//	char code2 = 65;
//
//	printf("code1 = %c\n", code1);
//	printf("code1 = %d\n", code1);
//	printf("code2 = %c\n", code2);
//
//	return 0;
//}


//#include <stdio.h>
//#define PI 3.141592
//
//int main()
//{
//	double r, circle, high;
//	double volume;
//
//	printf("밑변의 반지름을 입력하세요 : ");
//	scanf("%lf", &r);
//
//	printf("원통의 높이을 입력하세요 : ");
//	scanf("%lf", &high);
//
//	circle = r * r * PI;
//	volume = circle * high;
//	
//	printf("원통의 부피는 %.2lf입니다.", volume);
//
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int x, y, result;
//	printf("두개의 정수를 입력하시오 : ");
//	scanf("%d %d", &x, &y);
//
//	result = x + y;
//	printf("%d + %d = %d\n", x, y, result);
//
//	result = x - y;
//	printf("%d - %d = %d\n", x, y, result);
//
//	result = x * y;
//	printf("%d * %d = %d\n", x, y, result);
//
//	result = x / y;
//	printf("%d / %d = %d\n", x, y, result);
//
//	result = x % y;
//	printf("%d %% %d = %d\n", x, y, result);
//
//	return 0;
//}


//#include <stdio.h>
//#define SEC_PER_MINUTE 60 // 1분은 60초
//int main()
//{
//	int input, minute, second;
//
//	printf("초를 입력하세요 : ");
//	scanf("%d", &input); 
//
//	minute = input / SEC_PER_MINUTE;
//	second = input % SEC_PER_MINUTE;
//
//	printf("%d초는 %d분 %d초 입니다.\n", input, minute, second);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int pay, price, change;
//	int five_thousand, one_thousand;
//	int five_hundred, one_hundred;
//	
//	printf("물건 값을 입력하세요 : ");
//	scanf("%d", &price);
//
//	printf("사용자가 낸 돈 : ");
//	scanf("%d", &pay);
//
//	change = pay - price; // 거스름돈 액수
//
//	five_thousand = change / 5000;
//	one_thousand = (change - five_thousand * 5000) / 1000;
//	five_hundred = (change % 1000) / 500;
//	one_hundred = ((change % 1000) - (five_hundred*500)) / 100;
//
//	printf("오천원권 %d장\n", five_thousand);
//	printf("천원권 %d장\n", one_thousand);
//	printf("오백원권 %d장\n", five_hundred);
//	printf("백원권 %d장\n", one_hundred);
//
//
//
//	
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int x = 10;
//
//	printf("수식 x++의 값 : %d\n", x++);
//	printf("현재 x의 값 : %d\n", x);
//	printf("수식 ++x의 값 : %d\n", ++x);
//	printf("현재 x의 값 : %d\n", x);
//
//	printf("수식 x--의 값 : %d\n", x--);
//	printf("현재 x의 값 : %d\n", x);
//	printf("수식 --x의 값 : %d\n", --x);
//	printf("현재 x의 값 : %d\n", x);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//
//	printf("두 개의 정수를 입력하시오 : ");
//	scanf("%d %d", &x, &y);
//
//	printf("x == y의 결과값 : %d\n", x == y);
//	printf("x != y의 결과값 : %d\n", x != y);
//	printf("x > y의 결과값 : %d\n", x > y);
//	printf("x < y의 결과값 : %d\n", x < y);
//	printf("x >= y의 결과값 : %d\n", x >= y);
//	printf("x <= y의 결과값 : %d\n", x <= y);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//
//	printf("두개의 정수를입력하세요 : ");
//	scanf("%d %d", &x, &y);
//
//	printf("%d && %d의 결과값 : %d\n", x, y, x && y);
//	printf("%d || %d의 결과값 : %d\n", x, y, x || y);
//	printf("!%d의 결과값 : %d\n", x, !x);
//	
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int year;
//
//	printf("년도를 입력하세요 : ");
//	scanf("%d", &year);
//	
//	/*
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) == 1) printf("윤년입니다.");
//	else printf("%d년도는 윤년이 아닙니다.", year);
//	//((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
//	*/
//
//	(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) == 1) ? printf("윤년o") : printf("윤년x");
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	short x = -32768;
//	short y;
//	
//	y = x - 500;
//
//	printf("%d\n", x);
//	printf("%d\n", y);
//
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int paid, price, change;
//    int notes_5000, notes_1000, coins_500, coins_100, coins_50, coins_10;
//
//    printf("지불할 금액을 입력하세요: ");
//    scanf("%d", &paid);
//
//    printf("구매 금액을 입력하세요: ");
//    scanf("%d", &price);
//
//    // 지불 금액에서 구매 금액을 빼서 거스름돈을 계산
//    change = paid - price;
//
//    // 거스름돈이 음수인 경우를 체크
//    if (change < 0) {
//        printf("지불 금액이 구매 금액보다 적습니다.\n");
//        return 1; // 프로그램 비정상 종료
//    }
//
//    // 각 화폐 단위에 따라 필요한 수 계산
//    notes_5000 = change / 5000;
//    change %= 5000;
//
//    notes_1000 = change / 1000;
//    change %= 1000;
//
//    coins_500 = change / 500;
//    change %= 500;
//
//    coins_100 = change / 100;
//    change %= 100;
//
//    coins_50 = change / 50;
//    change %= 50;
//
//    coins_10 = change / 10;
//    change %= 10;
//
//    // 결과 출력
//    printf("거스름돈: %d원\n", paid - price);
//    printf("5000원 지폐: %d개\n", notes_5000);
//    printf("1000원 지폐: %d개\n", notes_1000);
//    printf("500원 동전: %d개\n", coins_500);
//    printf("100원 동전: %d개\n", coins_100);
//    printf("50원 동전: %d개\n", coins_50);
//    printf("10원 동전: %d개\n", coins_10);
//
//    return 0;
//}


//#include <stdio.h>
//
//int main() {
//    
//    printf("AND : %08X\n", 0x9 & 0xA);  //1001    1010
//    printf("OR : %08X\n", 0x9 | 0xA);   
//    printf("XOR : %08X\n", 0x9 ^ 0xA);
//    printf("NOT : %08X\n", ~0x9);       //1001 -> 0110
//    printf("<< : %08X\n", 0x4 << 1);
//    printf(">> : %08X\n", 0x4 >> 1);
//    return 0;
//}

//
//#include <stdio.h>
//
//int main() {
//
//    unsigned int num;
//    printf("십진수 : ");
//    scanf("%u", &num);
//
//    unsigned int mask = 1 << 7;
//    printf("이진수 : ");
//    
//    ((num & mask) == 0) ? printf("0") : printf("1");
//    mask = mask >> 1; // 오른쪽 비트로 1 이동
//
//    ((num & mask) == 0) ? printf("0") : printf("1");
//    mask = mask >> 1;
//
//    ((num & mask) == 0) ? printf("0") : printf("1");
//    mask = mask >> 1;
//
//    ((num & mask) == 0) ? printf("0") : printf("1");
//    mask = mask >> 1;
//
//    ((num & mask) == 0) ? printf("0") : printf("1");
//    mask = mask >> 1;
//
//    ((num & mask) == 0) ? printf("0") : printf("1");
//    mask = mask >> 1;
//
//    ((num & mask) == 0) ? printf("0") : printf("1");
//    mask = mask >> 1;
//
//    ((num & mask) == 0) ? printf("0") : printf("1");
//    printf("\n");
//
//}



//#include <stdio.h>
//
//int main() {
//
//    char c;
//    int i;
//    float f;
//
//    c = 10000; 
//    i = 1.2345 + 10;
//    f = 10 + 20;
//    printf("c = %d\ni = %d\nf = %f\n", c, i, f);
//
//    return 0;
//
//}

//#include <stdio.h>
//
//int main() {
//    int i;
//    double f;
//
//    f = 5 / 4;
//    printf("%.2lf\n", f);
//    
//    f = 5 / (double)4;
//    printf("%.2lf\n", f);
//
//
//    f = (double)5 / 4;
//    printf("%.2lf\n", f);
//
//    f = 5.0 / 4;
//    printf("%.2lf\n", f);
//
//    f = (double)5 / (double)4;
//    printf("%.2lf\n", f);
//
//    i = 1.3 + 1.8;
//    printf("%d\n", i);
//    
//    i = (int)1.3 + (int)1.8;
//    printf("%d\n", i);
//
//
//    return;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b, c;
//	int max1, max2, max3;
//	
//	printf("정수 3개를 입력하세요 : ");
//	scanf("%d %d %d", &a, &b, &c);
//
//	max1 = (a > b) ? a : b;
//	max2 = (b > c) ? b : c;
//	max3 = (max1 > max2) ? max1 : max2;
//
//	printf("최대값은 %d입니다.\n", max3);
//
//	return;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//
//	printf("뺄셈을 할 두 정수를 입력하세요 : ");
//
//	scanf("%d %d", &a, &b);
//	
//	(a > b) ? printf("%d - %d = %d\n", a, b, a - b) : printf("%d - %d = %d\n", b, a, b+ a);
//
//	return;
//}

//#include <stdio.h>
//
//int main()
//{
//	//달을 입력하였을 경우 계절을 출력하는 프로그램
//
//	int m;
//
//	printf("월을 입력하세요 : ");
//	scanf("%d", &m);
//
//	((m >= 3) && (m < 6)) ? printf("입력하신 월은 봄입니다.\n") : 0;
//	((m >= 6) && (m < 9)) ? printf("입력하신 월은 여름입니다.\n") : 0;
//	((m >= 9) && (m < 12)) ? printf("입력하신 월은 가을입니다.\n") : 0;
//	((m == 12) || (m == 1) || (m == 2)) ? printf("입력하신 월은 겨울입니다.\n") : 0;
//
//	return;
//}

//#include <stdio.h>
//
//int main()
//{
//	//조건연산자를 사용해 x,y의 좌표를 입력받아 사분면을 출력하는 프로그램 작성
//
//	int x, y;
//
//	printf("x의 좌표를 입력하세요 : ");
//	scanf("%d", &x);
//	
//	printf("y의 좌표를 입력하세요 : ");
//	scanf("%d", &y);
//
//	(x > 0) && (y > 0) ? printf("1사분면에 있습니다.\n") : 0;
//	(x < 0) && (y > 0) ? printf("2사분면에 있습니다.\n") : 0;
//	(x < 0) && (y < 0) ? printf("3사분면에 있습니다.\n") : 0;
//	(x > 0) && (y < 0) ? printf("4사분면에 있습니다.\n") : 0;
//
//	(x == 0) && (y == 0) ? printf("원점에 있습니다.\n") : 0;
//
//	return;
//}