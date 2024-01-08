/* 24.01.05 *****************************************************************************************************************************************/

/*
//아침 문제
#include <stdio.h>

int main()
{
	int num = 20;
	int* p = &num;
	*p = *p * 2;
	printf("%d", num);
}
*/


/*
#include <stdio.h>

int main()
{
	int a[] = { 10,20,30,40,50 };
	int b = 10;

	printf("&a[0] = %u\n", &a[0]);
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);

	printf("a = %u\n", a);					// 배열의 이름이 포인터이기 때문에 시작 주소값이 출력됨.

	printf("a + 1 = %u\n", a + 1);
	printf("*a = %d\n", *a);				// a의 값을 가져온다.
	printf("*(a + 1) = %d\n", *(a + 1));	// ()가 우선순위가 가장 높기 때문에 주소값이 +1 (정확히는 int 자료형이기 때문에 +4)이 된 후 포인터를 썼기때문에 a[1]값인 20 출력된다.

	//a = &b; // a는 상수이므로 오류, a가 변수였다면 ok. a는 배열 이름이므로 포인터 상수인데 b는 변수이므로 변수가 a에 대입될 수 없다.
	return;
}	//a는 상수이므로 다른 주소값은 담을 수 없음.
*/


/*
#include <stdio.h>

int main()
{
	int a[] = { 10,20,30,40,50 };
	int* p;

	p = a;
	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
	printf("p[0] = %d, p[1] = %d, p[2] = %d\n\n", p[0], p[1], p[2]);

	p[0] = 60;
	p[1] = 70;
	p[2] = 80;

	printf("a[0] = %d, a[1] = %d, a[2] = %d\n", a[0], a[1], a[2]);
	printf("p[0] = %d, p[1] = %d, p[2] = %d\n", p[0], p[1], p[2]);


	return;
}
*/



/*
#include <stdio.h>

int main()
{
	int arr[6] = {1,2,3,4,5,6};

	int* pArr = arr;
	printf("arr의 주소 = %u\n", arr);
	printf("pArr의 주소 = %u\n\n", pArr);

	printf("*pArr = %d\n", *pArr);
	printf("%d\n", *(++pArr));				// 주소값에 변화가 발생함
	printf("%d\n", *(++pArr));
	printf("pArr의 주소 = %u\n\n", pArr);

	printf("%d\n", *(pArr + 1));			// 주소값에 변화는 없음.
	printf("%d\n", *(pArr + 2));
	printf("%d\n", *(pArr + 3));
	printf("pArr의 주소 = %u\n\n", pArr);

	return;
}
*/


/*
#include <stdio.h>

void sub(int* b) {
	b[0] = 4;
	b[1] = 5;
	b[2] = 6;
}

int main()
{
	int a[3] = { 1,2,3 };

	printf("%d %d %d\n", a[0], a[1], a[2]);
	sub(a);
	printf("%d %d %d\n", a[0], a[1], a[2]);

	return;
}
*/



// 0~99 까지의 난수를 발생하여 크기가 3인 배열 p에 저장
// 센서와의 거리 측정
/*
#include <stdio.h>		// 원래는 직접 짜보라고 했을 문제
#include <stdlib.h>
#include <time.h>

void getSensorData(double* p) {
	p[0] = rand() % 100;
	p[1] = rand() % 100;
	p[2] = rand() % 100;

	return;
}

int main()
{
	srand(time(NULL));

	double sensorData[3];
	getSensorData(sensorData);

	printf("왼쪽 센서와 장애물과의 거리 : %.2lf\n", sensorData[0]);
	printf("중간 센서와 장애물과의 거리 : %.2lf\n", sensorData[1]);
	printf("오른쪽 센서와 장애물과의 거리 : %.2lf\n", sensorData[2]);


	return 0;
}
*/


// 문제 : 회전하는 함수와 출력하는 함수를 따로 만들어 코드 작성
/*
#include <stdio.h>

#define SIZE 5

void rotateClockwise(int arr[SIZE][SIZE], int result[SIZE][SIZE]) {			// 원래의 배열의 행 인덱스가  회전후의 배열의 열에 간다. result[j][SIZE - 1 - i] = arr[i][j]; 이걸 생각해야한다.
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			result[j][SIZE - 1 - i] = arr[i][j];
		}
	}
}

void printArray(int arr[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}

int main() {
	int arr[SIZE][SIZE] = {
		{ 1, 2, 3, 4, 5},
		{ 6, 7, 8, 9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};
	int rotatedArr[SIZE][SIZE];
	int rerol[SIZE][SIZE];

	rotateClockwise(arr, rotatedArr);

	printf("Original Array:\n");
	printArray(arr);
	printf("\nRotated Array:\n");
	printArray(rotatedArr);

	printf("\nrelrol Array:\n");
	rotateClockwise(rotatedArr, rerol);
	printArray(rerol);

	return 0;
}
*/



/*
#include <stdio.h>

int main()
{
	int i = 0;
	char str[4];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';

	while (str[i] != '\0') {
		printf("%c", str[i]);
		i++;
	}

	return 0;
}
*/




/* 12장. 문자와 문자열
#include <stdio.h>

int main()
{
	char str1[6] = "Seoul";
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = "the capital ctiy of Korea.";	// 숫자 입력 안해도 자동으로 "~~\0"까지 자동으로 저장됨.

	printf("%s %s %s\n", str1, str2, str3);

	return;
}
*/


/*
#include <stdio.h>

int main()
{
	char str[] = "C language is hard.";
	int i = 0;
	int p = 0;

	while (str[i] != '\0') {
		i++;
	}
	printf("문자열\"%s\"의 길이는 %d입니다.\n\n", str, i);


	for (i = 0; i < sizeof(str); i++) {			// sizeof를 이용해서 측정해보기. 널문자까지 갯수에 포함된거임
		p++;
	}
	printf("문자열\"%s\"의 길이는 %d입니다.\n\n", str, i);


	return 0;
}
*/



/*
#include <stdio.h>
#include <string.h>

int main()
{
	char* p = "Hello World";
	printf("%s\n", p);

	p = "Welcome to C World!";
	printf("%s\n", p);

	p = "Goodbye";
	printf("%s\n", p);

	//strcpy(p, "Hello"); // 이 문장 쓰려면 #include <string.h> 이 문장 써줘야 함

	return 0;
}
*/



/*
#include <stdio.h>

int main()
{
	char ch;
	while ((ch = getchar()) != EOF){
		putchar(ch);
	}return 0;
}
*/


/*
#include <stdio.h>
#include <conio.h>

int main()
{
	int ch;
	while ((ch = _getch()) != 'q') {  // _getch() 입력되자마자 출력이 바로나옴.
		_putch(ch);
	}
	return;
}
*/


/*
#include <stdio.h>
int main()
{
	char name[100];
	char address[100];
	printf("이름을 입력하세요 : ");
	gets_s(name, 100);
	printf("현재 거주하는 주소를 입력하세요 : ");
	gets_s(address, 100);
	puts(name);
	puts(address);
	return;
}
*/





// 단어의 개수 세기
/*
#include <stdio.h>
#include <ctype.h>

int count_word(char* s) {
	int i, wc = 0, waiting = 1;
	for (i = 0; s[i] != NULL; ++i) {
		if (isalpha(s[i])) {
			if (waiting) {				// 이 곳 알고리즘 잘 모르겠음 다시 확인해봐.!!!!!!!!!!!!!!!!!!!!!!!!!
				wc++;
				waiting = 0;
			}
		}
		else waiting = 1;
	}
	return wc;

}
int main()
{
	int wc = count_word("the c book...");
	printf("단어의 개수 : %d\n", wc);

	return 0;
}
*/


/*
#include <string.h>
#include <stdio.h>

int main()
{
	char string[80];
	strcpy(string, "Hello world from ");		// string 뒤에 붙이기.
	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat! ");
	printf("string = %s\n", string);
	return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[80];
	char s2[80];
	int result;

	printf("첫번째 단어를 입력하세요 : ");
	scanf("%s", s1);

	printf("두번째 단어를 입력하세요 : ");
	scanf("%s", s2);

	result = strcmp(s1, s2);

	if (result < 0) {
		printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);
	}else if (result == 0) {
		printf("%s가 %s와 같습니다.\n", s1, s2);
	}else {
		printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);
	}

	return 0;
}
*/


// 파일 이름을 자동으로 생성하는 프로그램
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char filename[100];
	char s[100];
	int i;
	for (i = 0; i < 6; i++) {
		strcpy(filename, "image");		// 여기 다 한번씩 다시 봐봐~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		sprintf(s, "%d", i);			// s라고하는 배열 뒤에 i=0이라는 값을 따라 붙여서 해주는것
		strcat(filename, s);			// sprintf 다시 봐봐
		strcat(filename, ".jpg");
		printf("%s \n", filename);
	}
	return 0;
}
*/




// 2차원 문자열 배열
/*
#include <stdio.h>

int main()
{
	int i;
	char menu[5][10] = {				// 2차원 문자열 배열에서 문자열 2개 이상 같고 있을때 반복문 1개만 씀
		"init",							// 3차원은 반복문 2개
		"open",
		"close",
		"read",
		"write"
	};
	for (i = 0; i < 5; i++) {
		printf("%d 번재 메뉴 : %s \n", i + 1, menu[i]);
	}
	return;
}
*/


/*
#include <stdio.h>
#define ENNTRIES 5

int main()
{
	int i, index;
	char dic[ENNTRIES][2][30] = {
		{"book", "책"},
		{"boy", "소년"},
		{"computer", "컴퓨터"},
		{"language", "언어"},
		{"rain", "비"}
	};
	char word[30];

	printf("단어를 입력하세요 : ");
	scanf("%s", word);

	index = 0;
	for (i = 0; i < ENNTRIES; i++) {
		if (strcmp(dic[index][0], word) == 0) {
			printf("%s : %s\n", word, dic[index][1]);
			return 0;	// 같은 답을 찾으면 종료.
		}
		index++;
	}
	printf("사전에서 발견되지 않았습니다.\n");

}
*/


// 문제 : 문자열 안에 포함된 특정한 문자의 개수를 세는 함수를 작성하시오 s는 문자열이고, c는 개수를 셀 문자임(int str_chr(char* s, int x))

