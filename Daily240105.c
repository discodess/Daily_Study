/* 24.01.05 *****************************************************************************************************************************************/

/*
//��ħ ����
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

	printf("a = %u\n", a);					// �迭�� �̸��� �������̱� ������ ���� �ּҰ��� ��µ�.

	printf("a + 1 = %u\n", a + 1);
	printf("*a = %d\n", *a);				// a�� ���� �����´�.
	printf("*(a + 1) = %d\n", *(a + 1));	// ()�� �켱������ ���� ���� ������ �ּҰ��� +1 (��Ȯ���� int �ڷ����̱� ������ +4)�� �� �� �����͸� ��⶧���� a[1]���� 20 ��µȴ�.

	//a = &b; // a�� ����̹Ƿ� ����, a�� �������ٸ� ok. a�� �迭 �̸��̹Ƿ� ������ ����ε� b�� �����̹Ƿ� ������ a�� ���Ե� �� ����.
	return;
}	//a�� ����̹Ƿ� �ٸ� �ּҰ��� ���� �� ����.
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
	printf("arr�� �ּ� = %u\n", arr);
	printf("pArr�� �ּ� = %u\n\n", pArr);

	printf("*pArr = %d\n", *pArr);
	printf("%d\n", *(++pArr));				// �ּҰ��� ��ȭ�� �߻���
	printf("%d\n", *(++pArr));
	printf("pArr�� �ּ� = %u\n\n", pArr);

	printf("%d\n", *(pArr + 1));			// �ּҰ��� ��ȭ�� ����.
	printf("%d\n", *(pArr + 2));
	printf("%d\n", *(pArr + 3));
	printf("pArr�� �ּ� = %u\n\n", pArr);

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



// 0~99 ������ ������ �߻��Ͽ� ũ�Ⱑ 3�� �迭 p�� ����
// �������� �Ÿ� ����
/*
#include <stdio.h>		// ������ ���� ¥����� ���� ����
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

	printf("���� ������ ��ֹ����� �Ÿ� : %.2lf\n", sensorData[0]);
	printf("�߰� ������ ��ֹ����� �Ÿ� : %.2lf\n", sensorData[1]);
	printf("������ ������ ��ֹ����� �Ÿ� : %.2lf\n", sensorData[2]);


	return 0;
}
*/


// ���� : ȸ���ϴ� �Լ��� ����ϴ� �Լ��� ���� ����� �ڵ� �ۼ�
/*
#include <stdio.h>

#define SIZE 5

void rotateClockwise(int arr[SIZE][SIZE], int result[SIZE][SIZE]) {			// ������ �迭�� �� �ε�����  ȸ������ �迭�� ���� ����. result[j][SIZE - 1 - i] = arr[i][j]; �̰� �����ؾ��Ѵ�.
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




/* 12��. ���ڿ� ���ڿ�
#include <stdio.h>

int main()
{
	char str1[6] = "Seoul";
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = "the capital ctiy of Korea.";	// ���� �Է� ���ص� �ڵ����� "~~\0"���� �ڵ����� �����.

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
	printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�.\n\n", str, i);


	for (i = 0; i < sizeof(str); i++) {			// sizeof�� �̿��ؼ� �����غ���. �ι��ڱ��� ������ ���ԵȰ���
		p++;
	}
	printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�.\n\n", str, i);


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

	//strcpy(p, "Hello"); // �� ���� ������ #include <string.h> �� ���� ����� ��

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
	while ((ch = _getch()) != 'q') {  // _getch() �Էµ��ڸ��� ����� �ٷγ���.
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
	printf("�̸��� �Է��ϼ��� : ");
	gets_s(name, 100);
	printf("���� �����ϴ� �ּҸ� �Է��ϼ��� : ");
	gets_s(address, 100);
	puts(name);
	puts(address);
	return;
}
*/





// �ܾ��� ���� ����
/*
#include <stdio.h>
#include <ctype.h>

int count_word(char* s) {
	int i, wc = 0, waiting = 1;
	for (i = 0; s[i] != NULL; ++i) {
		if (isalpha(s[i])) {
			if (waiting) {				// �� �� �˰��� �� �𸣰��� �ٽ� Ȯ���غ�.!!!!!!!!!!!!!!!!!!!!!!!!!
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
	printf("�ܾ��� ���� : %d\n", wc);

	return 0;
}
*/


/*
#include <string.h>
#include <stdio.h>

int main()
{
	char string[80];
	strcpy(string, "Hello world from ");		// string �ڿ� ���̱�.
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

	printf("ù��° �ܾ �Է��ϼ��� : ");
	scanf("%s", s1);

	printf("�ι�° �ܾ �Է��ϼ��� : ");
	scanf("%s", s2);

	result = strcmp(s1, s2);

	if (result < 0) {
		printf("%s�� %s���� �տ� �ֽ��ϴ�.\n", s1, s2);
	}else if (result == 0) {
		printf("%s�� %s�� �����ϴ�.\n", s1, s2);
	}else {
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.\n", s1, s2);
	}

	return 0;
}
*/


// ���� �̸��� �ڵ����� �����ϴ� ���α׷�
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char filename[100];
	char s[100];
	int i;
	for (i = 0; i < 6; i++) {
		strcpy(filename, "image");		// ���� �� �ѹ��� �ٽ� ����~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		sprintf(s, "%d", i);			// s����ϴ� �迭 �ڿ� i=0�̶�� ���� ���� �ٿ��� ���ִ°�
		strcat(filename, s);			// sprintf �ٽ� ����
		strcat(filename, ".jpg");
		printf("%s \n", filename);
	}
	return 0;
}
*/




// 2���� ���ڿ� �迭
/*
#include <stdio.h>

int main()
{
	int i;
	char menu[5][10] = {				// 2���� ���ڿ� �迭���� ���ڿ� 2�� �̻� ���� ������ �ݺ��� 1���� ��
		"init",							// 3������ �ݺ��� 2��
		"open",
		"close",
		"read",
		"write"
	};
	for (i = 0; i < 5; i++) {
		printf("%d ���� �޴� : %s \n", i + 1, menu[i]);
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
		{"book", "å"},
		{"boy", "�ҳ�"},
		{"computer", "��ǻ��"},
		{"language", "���"},
		{"rain", "��"}
	};
	char word[30];

	printf("�ܾ �Է��ϼ��� : ");
	scanf("%s", word);

	index = 0;
	for (i = 0; i < ENNTRIES; i++) {
		if (strcmp(dic[index][0], word) == 0) {
			printf("%s : %s\n", word, dic[index][1]);
			return 0;	// ���� ���� ã���� ����.
		}
		index++;
	}
	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");

}
*/


// ���� : ���ڿ� �ȿ� ���Ե� Ư���� ������ ������ ���� �Լ��� �ۼ��Ͻÿ� s�� ���ڿ��̰�, c�� ������ �� ������(int str_chr(char* s, int x))

