#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>


using namespace std;

void main()
{
	setlocale(0, "");
	system("chcp1251");
	system("cls");
	FILE* fp1,* fp2;
	char name1[] = "File1.txt";
	char name2[] = "File2.txt";
	char line[256];
	printf("Enter line:  ");
	gets_s(line, 256);

	if ((fp1=fopen(name1,"w"))==NULL)
	{
		perror("Error:");
		
	}

	fp1 = fopen(name1, "w");
	fprintf(fp1, "%s ", line);
	fclose(fp1);

	if ((fp1 = fopen(name1, "r")) == NULL)
	{
		perror("Error:");
		
	}
	if ((fp2 = fopen(name2, "w")) == NULL)
	{
		perror("Error:");
		
	}

	fp1 = fopen(name1, "r");
	fp2 = fopen(name2, "w");

	while ((fgets(line,256,fp1))!=NULL)
	{
		fputs(line, fp2);
		printf("%s", line);
	}
	fclose(fp1);
	fclose(fp2);


}
/*Создать приложение для работы с файлами. 
У Вас есть два файла - File1.txt и File2.txt. 
Заполните сконсоли любыми данными File1.txt. 
После этогоскопируйте содержимое File1.txt в 
File2.txt. Незабывайте закрывать файлы в нужных местах.*/
