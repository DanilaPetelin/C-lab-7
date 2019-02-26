#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>

struct SYM
{
	unsigned char ch; // ASCII-���
	float freq; // ������� �������������
	char code[256]; // ������ ��� ������ ����
	struct SYM *left; // ����� ������� � ������
	struct SYM *right; // ������ ������� � ������
};

long getArr(const char * fileName, int * arr);
int arr2SYM(int * arr, long count, struct SYM ** pSYM);
void sort_pArr(struct SYM ** pSYM, int size);
