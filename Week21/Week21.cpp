#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{setlocale(LC_ALL, "");
	int i = 0;
	FILE* file;
	FILE* file1;
	char arr[255];
	char ar2d2[255];
	
	char temp[] = "arr";
	char temp1[] = "arrr";
	//Дом 1
 if (!fopen_s(&file, "text.txt", "r"));
 while (!feof(file))
	{
 fgets(arr, 255, file);
 printf("%s", arr);
	}
	fclose(file);
	strcpy_s(ar2d2, arr);

	if (!fopen_s(&file, "text.txt", "r"));
	if (!fopen_s(&file1, "text1.txt", "w"));
	while (!feof(file)) {
		fgets(arr, 255, file);
		if (strcmp(arr, ar2d2) == NULL) {
		}
		else {
			fprintf(file1, "%s", arr, sizeof(arr));
		}
	}
	fclose(file);
	fclose(file1);

	// Вариант 2
	if(!fopen_s(&file, "text.txt", "r"));
	while (!feof(file))
	{
		if (fgets(arr, 255, file) != NULL)
			printf("%s", arr);
		if (strlen(arr) > i) i = strlen(arr);
	}
	rewind(file);
	printf("\nLkbyyf cnhjrb\n");
	while (!feof(file))
	{
		if (fgets(arr, 255, file) != NULL)
		if (strlen(arr) == i) printf("%sВ ней %d символов", arr,i);
	} 
	fclose(file);

	//Вариант 3 
	if (!fopen_s(&file, "text.txt", "r"));
	while (!feof(file)){
		fscanf_s(file, "%s", arr, sizeof(arr));
			
			if (strcmp(temp, arr) == NULL) { i++; }
	}
	cout <<i<<" Ckjdj dcnhtxftncz hfp "<<temp<<endl;
	fclose(file);

	//Вариант  4 
	
	if (!fopen_s(&file, "text.txt", "r"));
	if (!fopen_s(&file1, "text1.txt", "w"));
	while (!feof(file)){

		fscanf_s(file, "%s", arr, sizeof(arr));
		printf("%s\n", arr);
		if (strcmp(arr,temp) == NULL) {
			strcpy_s(arr, temp1);

		}
		fprintf(file1, "%s ", arr, sizeof(arr));
	}
	fclose(file);
	fclose(file1);
	if (!fopen_s(&file, "text.txt", "w"));
	if (!fopen_s(&file1, "text1.txt", "r"));
	while (!feof(file1)) {
		fscanf_s(file1, "%s", arr, sizeof(arr));
		fprintf(file, "%s ", arr, sizeof(arr));
	}
	fclose(file);
	fclose(file1);
	remove("text1.txt");


}
    


