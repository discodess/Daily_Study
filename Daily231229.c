/* 23.12.29 ***********************************************************************************************************************************************/

/*
#include <stdio.h>	// �ǵ��� break ���� �ۼ������ν� �ڵ尡 ������ ����������

int main()
{
	char a;

	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%c", &a);

	switch (a)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("�����Դϴ�");
			break;

		default:
			printf("�����Դϴ�");

	return 0;
}
*/




//���̰������� �ѷ��ڽ��Ϳ� Ÿ���� Ű�� 140 �̻��̰� ���̰� 10�� �̻��̿��� �Ѵ�. ����ڿ��� Ű�� ���̸� ������ �Ŀ� "Ÿ�� �����ϴ�" �Ǵ� "�˼��մϴ�"�� ����ϴ� ���α׷��� �ۼ�����
/*
#include <stdio.h>	// ���ǹ� 2���� Ȱ���� if���� �ۼ���

int main()
{
	int cm, age;

	printf("Ű�� ��� �ǽó���? : ");
	scanf("%d", &cm);
	printf("���̰� ��� �ǽó���? : ");
	scanf("%d", &age);

	if ((cm >= 140) && (age >= 10)) {
		printf("Ÿ�� �����ϴ�.\n");
	}else printf("�˼��մϴ�.\n");

	return 0;
}
*/


//x,y ��ǥ�� �Է¹޾Ƽ� ��ǥ�� ���ϴ� ��и��� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �� ���� ��ǥ�� ������ ��� �߸� �Է��Ͽ��ٴ� ������ ����Ͻÿ�. ������ �Է��� ��� �����̶�� ����ϵ��� �Ͻÿ�.
/*
#include <stdio.h>

int main()
{
	int x, y;

	printf("x, y ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);

	if ((x == 0) && (y == 0)) {
		printf("�����Դϴ�.");
	}else if((x > 0) && (y > 0)) {
		printf("1��и��Դϴ�.");
	}else if ((x < 0) && (y > 0)) {
		printf("2��и��Դϴ�.");
	}else if ((x < 0) && (y < 0)) {
		printf("3��и��Դϴ�.");
	}else if ((x > 0) && (y < 0)) {
		printf("4��и��Դϴ�.");
	}else printf("�� ���� ǥ�õǾ����ϴ�.");

	return 0;
}
*/




//2�ڸ� ���ڷ� �̷���� ������ �ִ�(���� �� 1��). ����ڰ� ������ �ִ� ���� ��ȣ�� 2�ڸ� ��� ��ġ�ϸ� 100������ �ް� 2�ڸ� �� �ϳ��� ��ġ�ϸ� 50������ �޴´�.
//�ϳ��� ��ġ���� ������ ����� ����. ���ǹ�ȣ�� ������ ���ڷ� �̸� ����ΰ� �Է��� �޵����Ѵ�.

/*
#include <stdio.h>			// ���� ������ ������� ���ǹ��� �̿��Ͽ� ��÷�ǰԲ� �����Ͽ���

int main()
{
	int input;
	int book = 54; //���� �Լ��� ���� �ȹ���� ������ ������ ���ڸ� �ִ´�.

	printf("���� ��ȣ�� �Է��ϼ��� : ");
	scanf("%d", &input);

	if (((book / 10) == (input / 10)) || ((book % 10) == (input / 10)) || ((book % 10) == (input % 10)) || ((book / 10) == (input % 10))) {
		printf("50���� ��÷");
	}
	else if (book == input) {	// (54 45), (45 54) �� ���� ������ ���ߴ�. 54 54 �� �Է��� �� 100������ �ް� ����� ��ĥ�ʿ��ִ�.
		printf("100���� ��÷");
	}
	else printf("��");

	return 0;
}
*/






//�ݺ��� ���� while�� 
// ���� ���ϴ� ������ ����ϴ� ���α׷�
// while (i <= 9); �̶�� �Ǽ��� ��. �����ϵ���

/*
#include <stdio.h>

int main()
{
	int n;
	int i = 1;

	printf("����ϰ� ���� �� : ");
	scanf("%d", &n);

	while (i <= 9)
	{
		printf("%d * %d = %d\n", n, i, n * i);
		i++;
	}

	return 0;
}
*/




//1���� n���� �� ����ϴ� ���α׷� �ۼ�
/*
#include <stdio.h>		//	��� scanf("%d", n"); �Ǽ��� �Ѵ�. ������ �鿩�� &�� ���� �Ἥ scanf("%d", &n);�� �ۼ�����

int main()
{
	int i, n, sum;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);

	i = 1;
	sum = 0;

	while (i <= n) {
		sum += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);


	return 0;
}
*/




// ���� ������ ����, while() �ȿ� ������ ���� ������ �ν�
// while(0)�� ���� while �� Ż���ϴ� ��
/*
#include <stdio.h>

int main(void)
{
	int i = 3;
	while (i) {
		printf("%d�� ���Դϴ�.\n", i);
		i--;
	}
	printf("%d�� �����Դϴ�.\n", i);

	return 0;
}
*/




/*
//��Ƽ�� ��� ����(������ �˸��� ��)
#include <stdio.h>

int main()
{
	int grade, n;
	float sum, average;

	n = 0;
	sum = 0;
	grade = 0;	//����

	printf("����� ������ �Է��ϼ���.\n");

	while (grade >= 0) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade;	// �������� �Է��ϴ� ���� while������ Ż���ϱ� ���� �������� �����ؾ��Ѵ�.
	n--;				// n ���� ��������

	average = sum / n;
	printf("���� ����� %f�Դϴ�.\n", average);


	return 0;
}
*/





/*
//do while�� ����
//���� ���߱�
//random ���� �ȹ���� ������ ������ ���� ����
#include <stdio.h>

int main()
{
	int answer = 59; //����
	int guess;
	int tries = 0;
	do {
		printf("������ �����Ͽ� ������.");
		scanf("%d", &guess);					//�� & �Ǽ��� �ߴ�. �����ϵ���
		tries++;
		if (guess > answer) {
			printf("������ ������ �����ϴ�.\n\n");
		}
		if (guess < answer) {
			printf("������ ������ �����ϴ�.\n\n");
		}

	} while (guess != answer);
	printf("�����մϴ�. �õ�Ƚ���� %dȸ �Դϴ�.\n", tries);

	return 0;
}
*/




/*
// random�� ����Ͽ� ���� ���߱�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int answer = rand() % 99 + 1; //����  1 ~ 99 ����
	int guess;
	int tries = 0;
	do {
		printf("������ �����Ͽ� ������.");
		scanf("%d", &guess);					//�� & �Ǽ��� �ߴ�. �����ϵ���
		tries++;
		if (guess > answer) {
			printf("������ ������ �����ϴ�.\n\n");
		}
		if (guess < answer) {
			printf("������ ������ �����ϴ�.\n\n");
		}

	} while (guess != answer);
	printf("�����մϴ�. �õ�Ƚ���� %dȸ �Դϴ�.\n", tries);

	return 0;

}
*/





//for ������ �Է°����� 100���� �� ���ϱ� �ڵ� ¥��
/*
#include <stdio.h>

int main()
{
	int in;
	int sum = 0;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &in);

	for (in ; in <= 100; in++) {
		sum = sum + in;
	}
	printf("�� ���� %d�Դϴ�.\n", sum);



	return 0;
}
*/




//for������ ���丮�� ����ϱ�, ���� �÷ο츦 �߻����� ��� �������� Ȯ��(�� 17������ �Է��ϸ� ���� �÷ο� �߻�)
/*
#include <stdio.h>

int main()
{
	long fact = 1;
	int i, n;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		fact = fact * i;
	}

	printf("%d! = %10d�Դϴ�.\n", n, fact);


	return 0;
}
*/




/*
//��ø�� for�� �̿��ؼ� *��ȣ�� �簢�� ��� ����ϱ�
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
//*�� �ﰢ�� �����
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
//�� ���� ���̰� 100 ���� ���� �ﰢ�� �߿��� ��Ÿ����� ������ �����ϴ� ���� �ﰢ���� ��� ������?

#include <stdio.h>

int main()
{
	int a;		//int a = 1; �� �ۿ��� �ʱ�ȭ ���� for���� ����/ for (a; a <= 100; a++)�� �ۼ��ߴ��� �״�� �������. �ʱ�ȭ�� for�� �ȿ��� �ϵ���!!
	int b;
	int c;

	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = 1; c <= 100; c++) {
				if ((c * c) == ((b * b) + (a * a))) {
					printf("�غ� : %d, ���� : %d, ���� : %d\n", a, b, c);
				}
			}
		}
	}


	return 0;
}
*/





/*
// ����ڷκ��� �Է¹��� �Ǽ��� �������� ���Ͽ� ����Ͻÿ�. ������ �ԷµǸ� �ݺ����� ��������

#include <stdio.h>
#include <math.h>

int main()
{
	double v;

	while (1) {
		printf("�Ǽ� ���� �Է��ϼ��� : ");
		scanf("%lf", &v);
		if (v < 0.0) {
			break;
		}
		printf("%lf�� �������� %f�Դϴ�.\n", v, sqrt(v));
	}


	return 0;
}
*/




//�ҹ��ڸ� �빮�ڷ� �����Ѵ�					�߿�!!!!!!!!!!!!!!!!!!!!!!!!!
/*
#include <stdio.h>

int main()
{
	char letter;

	while (1)
	{
		printf("�ҹ��ڸ� �Է��Ͻÿ� : ");		//���ڴ� ���ۿ� ��
		scanf(" %c", &letter);			//�ι���v%c ������� ���ڸ� �߶���		���ذ� �� �ȵ�.

		if (letter == 'Q') break;
		if (letter < 'a' || letter >'z') continue;

		letter -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);
	}

	return 0;
}
*/




/*
// ���� �Է½� ����
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

		printf("���� �Է½� ����\n\n");
		printf("%d + %d = ", x, y);
		scanf("%d", &answer);

		if (answer < 0) {
			//a = 0;
			break;
		}
		if (x + y == answer) {
			printf("����\n\n");
		}
		else printf("����\n\n");

	}

	return 0;
}
*/


/*
//* �Ųٷ� �ﰢ�� ������
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
//��ø�� �ݺ����� ����Ͽ� ������ ���� �ܷΰ��� �������� ���α׷��� �Ͻÿ�

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
//��ø�� �ݺ����� ����Ͽ� ������ ���� ����� �������� ���α׷��� �Ͻÿ�.

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




//��ø�� �ݺ����� ����Ͽ� ������ ���� ����� �������� ���α׷��� �Ͻÿ�
//�𷡽ð�
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

//������ �𷡽ð� �ڵ�
/*
#include <stdio.h>

int main() {
	int i, j, k, n = 5; // n�� �𷡽ð��� ũ���Դϴ�.

	// ��� �κ�
	for (i = n; i >= 1; i--) {
		for (j = n; j > i; j--) {
			printf(" ");
		}
		for (k = 1; k <= (2 * i - 1); k++) {
			printf("*");
		}
		printf("\n");
	}

	// �ϴ� �κ�
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
