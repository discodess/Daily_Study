/* 23.12.28 ***********************************************************************************************/
//#include <stdio.h>
//
//int main()
//{
//    int hour, min;
//    int sum;
//    int allam;
//    int o_hour, o_min;
//
//    scanf("%d %d", &hour, &min);
//
//    sum = hour * 60 + min;
//
//    if (sum <= 45) {
//        allam = 1440 + sum - 45;
//    }else allam = sum - 45;
//
//    o_hour = allam / 60;
//    o_min = allam % 60;
//
//    printf("%d %d", o_hour, o_min);
//
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	// 6���� �����ڸ� �Է¹޾� ������ ������ ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�
//	// ������ a,e,i,o,u
//
//	char fir, sec, thr, fou, fiv, six;
//	int m = 0;
//	int j = 0;
//
//	printf("������ 6���� �Է��ϼ��� : ");
//	scanf("%c %c %c %c %c %c", &fir, &sec, &thr, &fou, &fiv, &six);
//	
//	/*
//	(fir == 'a') ? m++ : j++;
//	(fir == 'e') ? m++ : j++;
//	(fir == 'i') ? m++ : j++;
//	(fir == 'o') ? m++ : j++;
//	(fir == 'u') ? m++ : j++;
//	*/
//
//	((fir == 'a') || (fir == 'e') || (fir == 'i') || (fir == 'o') || (fir == 'u')) ? m++ : j++;
//
//	((sec == 'a') || (sec == 'e') || (sec == 'i') || (sec == 'o') || (sec == 'u')) ? m++ : j++;
//
//	((thr == 'a') || (thr == 'e') || (thr == 'i') || (thr == 'o') || (thr == 'u')) ? m++ : j++;
//
//	((fou == 'a') || (fou == 'e') || (fou == 'i') || (fou == 'o') || (fou == 'u')) ? m++ : j++;
//
//	((fiv == 'a') || (fiv == 'e') || (fiv == 'i') || (fiv == 'o') || (fiv == 'u')) ? m++ : j++;
//
//	((six == 'a') || (six == 'e') || (six == 'i') || (six == 'o') || (six == 'u')) ? m++ : j++;
//
//
//	printf("������ %d��, ������ %d�� �Դϴ�.", m, j);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//�� �Ǽ��� �Է¹޾� �� �Ǽ��� ��Ģ���� ��� �� ������ �Ǵ� ���� ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
//
//	double a, b;
//	double mul;
//
//	printf("2���� �Ǽ��� �Է��Ͻÿ� : ");
//	scanf("%lf %lf", &a, &b);
//
//	printf("������ �Ǵ� �� : \n");
//	(a + b < 0) ? printf("a + b = %lf\n", a + b) : 0;
//	(a - b < 0) ? printf("a - b = %lf\n", a - b) : 0;
//	(a * b < 0) ? printf("a * b = %lf\n", a * b) : 0;
//	(a / b < 0) ? printf("a / b = %lf\n", a / b) : 0;
//
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	int number;
//
//	printf("������ �Է��Ͻÿ� : ");
//	scanf("%d", &number);
//
//	if (number > 0)
//	{
//		printf("����Դϴ�\n");
//	}else printf("����� �ƴմϴ�\n");
//
//	printf("�Էµ� ���� %d�Դϴ�.\n", number);
//
//	return 0;
//}


//
//#include <stdio.h>
//
//int main()
//{
//	int number;
//
//	printf("������ �Է��Ͻÿ� : ");
//	scanf("%d", &number);
//
//	if (number % 2 == 0)
//	{
//		printf("%d�� ¦���Դϴ�\n", number);
//	}
//	else if (number % 2 == 1){
//		printf("%d�� Ȧ���Դϴ�\n", number);
//	}else printf("����.\n");
//
//	return 0;
//}
//
//



//#include <stdio.h>
//
//int main()
//{
//	int number;
//
//	printf("������ �Է��Ͻÿ� : ");
//	scanf("%d", &number);
//
//	if (number % 5 == 0)
//	{
//		printf("%d�� 5�� ����Դϴ�\n", number);
//	}
//	else printf("%d�� 5�� ����� �ƴմϴ�.\n", number);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int score;
//
//	printf("������ �Է��ϼ��� : ");
//	scanf("%d", &score);
//
//	if (score >= 90) {
//		printf("������ A �Դϴ�.");
//	}else if (score > 80) {
//		printf("������ B �Դϴ�.");
//	}else if (score > 70) {
//		printf("������ C �Դϴ�.");
//	}else if (score > 60) {
//		printf("������ D �Դϴ�.");
//	}
//	else printf("������ F �Դϴ�.");
//
//	return 0;
//}

//
//#include <stdio.h>
//
//int main()
//{
//	char ch;
//
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%c", &ch);
//
//	if ((ch >= 'A') && (ch <= 'Z'))
//	{
//		printf("%c�� �빮���Դϴ�.\n", ch);
//	}
//	if ((ch >= 'a') && (ch <= 'z'))
//	{
//		printf("%c�� �ҹ����Դϴ�.\n", ch);
//	}
//	if ((ch >= '0') && (ch <= '9'))
//	{
//		printf("%c�� ���� �ڸ� �����Դϴ�.\n", ch);
//	}
//
//
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int H, M;
//    int sum;
//    int allam;
//    int o_hour, o_min;
//
//    scanf("%d %d", &H, &M);
//
//    sum = H * 60 + M;
//
//    if (sum <= 45) {
//        allam = 1440 + sum - 45;
//    }
//    else allam = sum - 45;
//
//    o_hour = allam / 60;
//    o_min = allam % 60;
//
//    printf("%d %d", o_hour, o_min);
//
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int x, y;
//    char a;
//
//    printf("������ �Է��ϼ���(ex 3 + 5) : ");
//    scanf("%d %c %d", &x, &a, &y);
//
//    if (a == '+') {
//        printf("%d + %d = %d", x, y, x + y);
//    }
//    else if (a == '-') {
//        printf("%d - %d = %d", x, y, x - y);
//    }
//    else if (a == '*') {
//        printf("%d * %d = %d", x, y, x * y);
//    }
//    else if (a == '/') {
//        printf("%d / %d = %d", x, y, x / y);
//    }
//    else printf("����");
//
//
//
//
//    return 0;
//}
//


//
//#include <stdio.h>
//
//int main()
//{
//    int x, y;
//    char a;
//
//    printf("������ �Է��ϼ���(ex 3 + 5) : ");
//    scanf("%d %c %d", &x, &a, &y);
//
//    switch (a)
//    {
//    case '+':
//        printf("%d + %d = %d", x, y, x + y);
//        break;
//
//    case '-':
//        printf("%d - %d = %d", x, y, x - y);
//        break;
//
//    case '*':
//        printf("%d * %d = %d", x, y, x * y);
//        break;
//
//    case '/':
//        printf("%d / %d = %d", x, y, x / y);
//        break;
//
//    case '%':
//        printf("%d %% %d = %d", x, y, x % y);
//        break;
//
//
//    default:
//        printf("�������� �ʽ��ϴ�");
//        break;
//
//    }
//
//    return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//    /*
//    ��ǻ�Ϳ� ���������� ������ �ϴ� ���α׷��� �ۼ��ض�. 
//    ��ǻ�ʹ� ����ڿ��� �˸��� �ʰ� ���������� �߿��� ���Ƿ� �ϳ��� �����Ѵ�.
//    ����ڴ� ���α׷��� �Է� �ȳ� �޽����� ���� 3�� �߿��� �ϳ��� �����ϰ� �ȴ�.
//    ������� ������ ������ ��ǻ�ʹ� ���� ������ �����Ͽ��� ���� �̰���� ������ �˷��ش�. 
//    */
//    int me;
//
//    //��ǻ�ʹ� �����̴�
//    printf("������������ �����ϰڽ��ϴ�.\n������ ���ðڽ��ϱ�? (�� : 1) (�� : 2) (�� : 3)\n>>> ");
//    scanf("%d", &me);
//    
//    switch(me) 
//    {
//        case 1:
//            printf("����� �̰���ϴ�. ��ǻ�ʹ� ������ �½��ϴ�.\n");
//            break;
//        case 2:
//            printf("����� �����ϴ�. ��ǻ�ʹ� ������ �½��ϴ�.\n");
//            break;
//        case 3:
//            printf("����� �����ϴ�. ��ǻ�ʹ� ������ �½��ϴ�.\n");
//            break;
//    }
//
//
//    return 0;
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int me;
//	int random;
//	int com;
//
//	srand(time(NULL));
//
//	printf("������������ �����ϰڽ��ϴ�.\n������ ���ðڽ��ϱ�? (�� : 1) (�� : 2) (�� : 3)\n>>> ");
//	scanf("%d", &me);
//
//	com = rand() % 3 + 1; // ���� ����
//	
//
//	if (me == 1)
//	{
//		if (com == 1)printf("����� �����ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.");
//		else if (com == 2)printf("����� �̰���ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.");
//		else if (com == 3)printf("����� �����ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.");
//	}
//	else if (me == 2)
//	{
//		if (com == 1)printf("����� �����ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.");
//		else if (com == 2)printf("����� �����ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.");
//		else if (com == 3)printf("����� �̰���ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.");
//	}
//	else if (me == 3)
//	{
//		if (com == 1)printf("����� �̰���ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.");
//		else if (com == 2)printf("����� �����ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.");
//		else if (com == 3)printf("����� �����ϴ�. ��ǻ�ʹ� ���� �½��ϴ�.");
//	}
//	else printf("����");
//
//	return 0;
//}

