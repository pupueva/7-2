//���� 7
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()

{

	setlocale(LC_CTYPE,"RUS");

	char mp;
	float x,y;
	printf("������� �������:");
	scanf("%f %c %f",&x,&mp,&y);

	switch (mp)
	{

	case '+':
		printf("��������=%.f\n",x+y);
		break;
	case '-':
		printf("���������=%.f\n",x-y);
		break;
	case '*':
		printf("���������=%.f\n",x*y);
		break;
	case '/':
		printf("�������=%.f\n",x/y);
		break;
	case '^':
		printf("���������� � �������= %f\n",pow(x,y));
		break;

	}

	char cp;
	printf("������� ������:\n");
	scanf("%c", &cp);
	switch (cp)
	{


	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':

		printf("������� �����\n");
		break;

	case 'b':
	case 'a':
	case 'q':
	case 'w':
	case 'e':
	case 'r':
	case 't':
	case 'y':
	case 'u':
	case 'i':
	case 'o':
	case 'p':
	case 's':
	case 'd':
	case 'f':
	case 'g':
	case 'h':
	case 'j':
	case 'k':
	case 'l':
	case 'z':
	case 'x':
	case 'c':
	case 'v':
	case 'n':
	case 'm':

		printf("������� �����\n");
		break;


	}
	
	char fp;
	printf("������� ����:\n");
	scanf("%c", &fp);
	switch (fp)
    {
	case '.':

		printf("������� �����\n");
		break;

	case ',':

		printf("������� �������\n");
		break;

	case ':':

		printf("������� ��������� \n");
		break;

	case ';':

		printf("������� ����� � �������\n");
		break;

	case '!':

		printf("������ ���������������� ����\n");

		break;

	default:

		printf("����������� ������\n");

	}

	return 0;
}