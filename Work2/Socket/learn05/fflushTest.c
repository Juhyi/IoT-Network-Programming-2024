#include <stdio.h>

int main()
{
	FILE *file = fopen("test.txt", "w");
	if(file == NULL) {
		printf("파일열기실패");
		return 1;
	}
	fprintf(file, "Hello World\n ");
	if(fflush(file) == 0) {
		printf("버퍼비우기 성공\n");
	} else {
		printf("버퍼비우기 실패\n");
	}

	fclose(file);

	return 0;
}
