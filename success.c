#include <stdio.h> // ������ ����!!!!!!!!
#include <stdlib.h>
int main() {
	int num;
	char line[100] = "";
	FILE* fp1 = NULL;
	FILE* fp2 = NULL;
	fp1 = fopen("test.txt","r");
	fp2 = fopen("C:\\Users\\maxcr\\OneDrive\\���� ȭ��\\result.txt", "w");
	if (fp1 == NULL) {
		printf("����� ��ġ�� ������ �����ϴ�");
		exit(1);
	}
	while (1) {
		if (feof(fp1)!=0) {
			break;
		}
		fscanf(fp1, "%d", &num);
		fgets(line, 100, fp1);
		printf("%d %s\n",num,line);
		fprintf(fp2, "%d %s\n", num, line);
		fprintf(fp2, "==========================\n");
	}
	fclose(fp1);
	fclose(fp2);
}