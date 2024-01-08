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
//	// 6개의 영문자를 입력받아 모음의 개수와 자음의 개수를 출력하는 프로그램을 작성하시오
//	// 모음은 a,e,i,o,u
//
//	char fir, sec, thr, fou, fiv, six;
//	int m = 0;
//	int j = 0;
//
//	printf("영문자 6개를 입력하세요 : ");
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
//	printf("모음은 %d개, 자음은 %d개 입니다.", m, j);
//
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	//두 실수를 입력받아 두 실수의 사칙연산 결과 중 음수가 되는 연산 결과를 모두 출력하는 프로그램을 작성하시오
//
//	double a, b;
//	double mul;
//
//	printf("2개의 실수를 입력하시오 : ");
//	scanf("%lf %lf", &a, &b);
//
//	printf("음수가 되는 값 : \n");
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
//	printf("정수를 입력하시오 : ");
//	scanf("%d", &number);
//
//	if (number > 0)
//	{
//		printf("양수입니다\n");
//	}else printf("양수가 아닙니다\n");
//
//	printf("입력된 값은 %d입니다.\n", number);
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
//	printf("정수를 입력하시오 : ");
//	scanf("%d", &number);
//
//	if (number % 2 == 0)
//	{
//		printf("%d는 짝수입니다\n", number);
//	}
//	else if (number % 2 == 1){
//		printf("%d는 홀수입니다\n", number);
//	}else printf("오류.\n");
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
//	printf("정수를 입력하시오 : ");
//	scanf("%d", &number);
//
//	if (number % 5 == 0)
//	{
//		printf("%d는 5의 배수입니다\n", number);
//	}
//	else printf("%d는 5의 배수가 아닙니다.\n", number);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int score;
//
//	printf("점수를 입력하세요 : ");
//	scanf("%d", &score);
//
//	if (score >= 90) {
//		printf("학점은 A 입니다.");
//	}else if (score > 80) {
//		printf("학점은 B 입니다.");
//	}else if (score > 70) {
//		printf("학점은 C 입니다.");
//	}else if (score > 60) {
//		printf("학점은 D 입니다.");
//	}
//	else printf("학점은 F 입니다.");
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
//	printf("문자를 입력하세요 : ");
//	scanf("%c", &ch);
//
//	if ((ch >= 'A') && (ch <= 'Z'))
//	{
//		printf("%c는 대문자입니다.\n", ch);
//	}
//	if ((ch >= 'a') && (ch <= 'z'))
//	{
//		printf("%c는 소문자입니다.\n", ch);
//	}
//	if ((ch >= '0') && (ch <= '9'))
//	{
//		printf("%c는 일의 자리 문자입니다.\n", ch);
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
//    printf("수식을 입력하세요(ex 3 + 5) : ");
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
//    else printf("오류");
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
//    printf("수식을 입력하세요(ex 3 + 5) : ");
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
//        printf("지원되지 않습니다");
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
//    컴퓨터와 가위바위보 게임을 하는 프로그램을 작성해라. 
//    컴퓨터는 사용자에게 알리지 않고 가위바위보 중에서 임의로 하나를 선택한다.
//    사용자는 프로그램의 입력 안내 메시지에 따라서 3개 중에서 하나를 선택하게 된다.
//    사용자의 선택이 끝나면 컴퓨터는 누가 무엇을 선택하였고 누가 이겼는지 비겼는지 알려준다. 
//    */
//    int me;
//
//    //컴퓨터는 가위이다
//    printf("가위바위보를 시작하겠습니다.\n무엇을 내시겠습니까? (묵 : 1) (찌 : 2) (빠 : 3)\n>>> ");
//    scanf("%d", &me);
//    
//    switch(me) 
//    {
//        case 1:
//            printf("당신이 이겼습니다. 컴퓨터는 가위를 냈습니다.\n");
//            break;
//        case 2:
//            printf("당신이 비겼습니다. 컴퓨터는 가위를 냈습니다.\n");
//            break;
//        case 3:
//            printf("당신이 졌습니다. 컴퓨터는 가위를 냈습니다.\n");
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
//	printf("가위바위보를 시작하겠습니다.\n무엇을 내시겠습니까? (묵 : 1) (찌 : 2) (빠 : 3)\n>>> ");
//	scanf("%d", &me);
//
//	com = rand() % 3 + 1; // 난수 생성
//	
//
//	if (me == 1)
//	{
//		if (com == 1)printf("당신은 비겼습니다. 컴퓨터는 묵을 냈습니다.");
//		else if (com == 2)printf("당신은 이겼습니다. 컴퓨터는 찌을 냈습니다.");
//		else if (com == 3)printf("당신은 졌습니다. 컴퓨터는 보을 냈습니다.");
//	}
//	else if (me == 2)
//	{
//		if (com == 1)printf("당신은 졌습니다. 컴퓨터는 묵을 냈습니다.");
//		else if (com == 2)printf("당신은 비겼습니다. 컴퓨터는 찌을 냈습니다.");
//		else if (com == 3)printf("당신은 이겼습니다. 컴퓨터는 보을 냈습니다.");
//	}
//	else if (me == 3)
//	{
//		if (com == 1)printf("당신은 이겼습니다. 컴퓨터는 묵을 냈습니다.");
//		else if (com == 2)printf("당신은 졌습니다. 컴퓨터는 찌을 냈습니다.");
//		else if (com == 3)printf("당신은 비겼습니다. 컴퓨터는 보을 냈습니다.");
//	}
//	else printf("오류");
//
//	return 0;
//}

