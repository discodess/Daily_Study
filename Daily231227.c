/* 23.12.27 ***********************************************************************************************/
///*�� ���� ������ ���� ����ϴ� ���α׷�*/
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
//	printf("���� 2�� �Է� : ");
//	scanf("%d %d", &x, &y);
//
//	sum = x + y;
//
//	printf("x + y = %d\n", sum);
//	printf("%d + %d = %d\n", x, y, sum);
//
//	return;
//}

/*���� ���*/

//#include <stdio.h>
//
//int main(void)
//{
//	int y_money;
//
//	printf("������ �Է��Ͻÿ�(����: ����) : ");
//	scanf("%d", &y_money);
//	
//	printf("�� ���¾�(����: ����): %d\n", y_money/12);
//
//	return;
//}



///*�������� �Է� �޾� ���� ������ ���ϴ� �ڵ�*/
//#include <stdio.h>
//#define PI 3.141592

//int main(void)
//{
//	double r;
//	double circle;
//	printf("���� �������� �Է��ϼ��� : ");
//	scanf("%lf", &r);
//
//	circle = r * r * PI;
//	printf("���� ���̴� %lf �Դϴ�.\n", circle);
//	printf("���� ���̴� %lf �Դϴ�.\n", r*r*PI);
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
//	printf("(1) 10���� = %d\n", a);
//	printf("(2) 8���� = %#o\n", a);
//	printf("(3) 16���� = %#x\n\n\n", a);
//	printf("(2) 8���� = %o\n", a);
//	printf("(3) 16���� = %x\n", a);
//
//}

//#include <stdio.h>
//int main()
//{	
//	double first, second, third, avg;
//
//	printf("������ �Ǽ��� �Է��ϼ��� : ");
//	scanf("%lf %lf %lf", &first, &second, &third);
//
//	avg = (first + second + third) / 3;
//
//	printf("��հ��� %.3lf�̴�.", avg);
//
//	return;
//}


//#include <stdio.h>
//int main()
//{
//	double high, floor;
//	double area;
//
//	printf("���̿� �غ��� �Է��ϼ��� : ");
//	scanf("%lf %lf", &high, &floor);
//
//	area = (high * floor) / 2;
//
//	printf("�ﰢ���� ���̴� %.2lf�Դϴ�.\n", area);
//
//	return;
//}


//#include <stdio.h>
//int main()
//{
//	double x;
//	double a;
//	printf("x���� �Է��ϼ��� : ");
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



// ������ ũ�� ã��
//#include <stdio.h>
//
//int main(void)
//{
//	int x;
//	printf("���� x�� ũ�� : %d\n", sizeof(x));
//	printf("char���� ũ�� : %d\n", sizeof(char));
//	printf("int���� ũ�� : %d\n", sizeof(int));
//	printf("short���� ũ�� : %d\n", sizeof(short));
//	printf("long���� ũ�� : %d\n", sizeof(long));
//	printf("long long���� ũ�� : %d\n", sizeof(long long));
//	printf("float���� ũ�� : %d\n", sizeof(float));
//	printf("double���� ũ�� : %d\n", sizeof(double));
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
//	printf("������ �Է��Ͻÿ� : ");
//	scanf("%d", &m_salary);
//
//	printf("���� �Է��Ͻÿ� : ");
//	scanf("%d", &MONTHS);
//	
//	y_salary = MONTHS * m_salary;
//	tax = y_salary * TAX_RATE;
//
//	printf("������ %d�Դϴ�.\n", y_salary);
//	printf("������ %d�Դϴ�.\n", tax);
//	printf("������ %f�Դϴ�.\n", y_salary * TAX_RATE);
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
//	printf("�غ��� �������� �Է��ϼ��� : ");
//	scanf("%lf", &r);
//
//	printf("������ ������ �Է��ϼ��� : ");
//	scanf("%lf", &high);
//
//	circle = r * r * PI;
//	volume = circle * high;
//	
//	printf("������ ���Ǵ� %.2lf�Դϴ�.", volume);
//
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int x, y, result;
//	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
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
//#define SEC_PER_MINUTE 60 // 1���� 60��
//int main()
//{
//	int input, minute, second;
//
//	printf("�ʸ� �Է��ϼ��� : ");
//	scanf("%d", &input); 
//
//	minute = input / SEC_PER_MINUTE;
//	second = input % SEC_PER_MINUTE;
//
//	printf("%d�ʴ� %d�� %d�� �Դϴ�.\n", input, minute, second);
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
//	printf("���� ���� �Է��ϼ��� : ");
//	scanf("%d", &price);
//
//	printf("����ڰ� �� �� : ");
//	scanf("%d", &pay);
//
//	change = pay - price; // �Ž����� �׼�
//
//	five_thousand = change / 5000;
//	one_thousand = (change - five_thousand * 5000) / 1000;
//	five_hundred = (change % 1000) / 500;
//	one_hundred = ((change % 1000) - (five_hundred*500)) / 100;
//
//	printf("��õ���� %d��\n", five_thousand);
//	printf("õ���� %d��\n", one_thousand);
//	printf("������� %d��\n", five_hundred);
//	printf("����� %d��\n", one_hundred);
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
//	printf("���� x++�� �� : %d\n", x++);
//	printf("���� x�� �� : %d\n", x);
//	printf("���� ++x�� �� : %d\n", ++x);
//	printf("���� x�� �� : %d\n", x);
//
//	printf("���� x--�� �� : %d\n", x--);
//	printf("���� x�� �� : %d\n", x);
//	printf("���� --x�� �� : %d\n", --x);
//	printf("���� x�� �� : %d\n", x);
//
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//
//	printf("�� ���� ������ �Է��Ͻÿ� : ");
//	scanf("%d %d", &x, &y);
//
//	printf("x == y�� ����� : %d\n", x == y);
//	printf("x != y�� ����� : %d\n", x != y);
//	printf("x > y�� ����� : %d\n", x > y);
//	printf("x < y�� ����� : %d\n", x < y);
//	printf("x >= y�� ����� : %d\n", x >= y);
//	printf("x <= y�� ����� : %d\n", x <= y);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int x, y;
//
//	printf("�ΰ��� �������Է��ϼ��� : ");
//	scanf("%d %d", &x, &y);
//
//	printf("%d && %d�� ����� : %d\n", x, y, x && y);
//	printf("%d || %d�� ����� : %d\n", x, y, x || y);
//	printf("!%d�� ����� : %d\n", x, !x);
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
//	printf("�⵵�� �Է��ϼ��� : ");
//	scanf("%d", &year);
//	
//	/*
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) == 1) printf("�����Դϴ�.");
//	else printf("%d�⵵�� ������ �ƴմϴ�.", year);
//	//((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
//	*/
//
//	(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0) == 1) ? printf("����o") : printf("����x");
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
//    printf("������ �ݾ��� �Է��ϼ���: ");
//    scanf("%d", &paid);
//
//    printf("���� �ݾ��� �Է��ϼ���: ");
//    scanf("%d", &price);
//
//    // ���� �ݾ׿��� ���� �ݾ��� ���� �Ž������� ���
//    change = paid - price;
//
//    // �Ž������� ������ ��츦 üũ
//    if (change < 0) {
//        printf("���� �ݾ��� ���� �ݾ׺��� �����ϴ�.\n");
//        return 1; // ���α׷� ������ ����
//    }
//
//    // �� ȭ�� ������ ���� �ʿ��� �� ���
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
//    // ��� ���
//    printf("�Ž�����: %d��\n", paid - price);
//    printf("5000�� ����: %d��\n", notes_5000);
//    printf("1000�� ����: %d��\n", notes_1000);
//    printf("500�� ����: %d��\n", coins_500);
//    printf("100�� ����: %d��\n", coins_100);
//    printf("50�� ����: %d��\n", coins_50);
//    printf("10�� ����: %d��\n", coins_10);
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
//    printf("������ : ");
//    scanf("%u", &num);
//
//    unsigned int mask = 1 << 7;
//    printf("������ : ");
//    
//    ((num & mask) == 0) ? printf("0") : printf("1");
//    mask = mask >> 1; // ������ ��Ʈ�� 1 �̵�
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
//	printf("���� 3���� �Է��ϼ��� : ");
//	scanf("%d %d %d", &a, &b, &c);
//
//	max1 = (a > b) ? a : b;
//	max2 = (b > c) ? b : c;
//	max3 = (max1 > max2) ? max1 : max2;
//
//	printf("�ִ밪�� %d�Դϴ�.\n", max3);
//
//	return;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//
//	printf("������ �� �� ������ �Է��ϼ��� : ");
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
//	//���� �Է��Ͽ��� ��� ������ ����ϴ� ���α׷�
//
//	int m;
//
//	printf("���� �Է��ϼ��� : ");
//	scanf("%d", &m);
//
//	((m >= 3) && (m < 6)) ? printf("�Է��Ͻ� ���� ���Դϴ�.\n") : 0;
//	((m >= 6) && (m < 9)) ? printf("�Է��Ͻ� ���� �����Դϴ�.\n") : 0;
//	((m >= 9) && (m < 12)) ? printf("�Է��Ͻ� ���� �����Դϴ�.\n") : 0;
//	((m == 12) || (m == 1) || (m == 2)) ? printf("�Է��Ͻ� ���� �ܿ��Դϴ�.\n") : 0;
//
//	return;
//}

//#include <stdio.h>
//
//int main()
//{
//	//���ǿ����ڸ� ����� x,y�� ��ǥ�� �Է¹޾� ��и��� ����ϴ� ���α׷� �ۼ�
//
//	int x, y;
//
//	printf("x�� ��ǥ�� �Է��ϼ��� : ");
//	scanf("%d", &x);
//	
//	printf("y�� ��ǥ�� �Է��ϼ��� : ");
//	scanf("%d", &y);
//
//	(x > 0) && (y > 0) ? printf("1��и鿡 �ֽ��ϴ�.\n") : 0;
//	(x < 0) && (y > 0) ? printf("2��и鿡 �ֽ��ϴ�.\n") : 0;
//	(x < 0) && (y < 0) ? printf("3��и鿡 �ֽ��ϴ�.\n") : 0;
//	(x > 0) && (y < 0) ? printf("4��и鿡 �ֽ��ϴ�.\n") : 0;
//
//	(x == 0) && (y == 0) ? printf("������ �ֽ��ϴ�.\n") : 0;
//
//	return;
//}