//#include <stdio.h>
//
//int main(void) {
//	
//	int num = 0;
//
//	while (num < 5) {
//		printf("Hello world! %d \n", num);
//		num++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	
//	int dan = 0, num = 1;
//	printf("몇 단? ");
//	scanf_s("%d", &dan);
//
//	while (num < 10) {
//		printf("%d X %d=%d \n", dan, num, dan * num);
//		num++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	
//	int cur = 2;
//	int is = 0;
//
//	while (cur < 10) {
//		is = 1;
//		while (is < 10) {
//			printf("%d X %d=%d \n", cur, is, cur * is);
//			is++;
//		}
//		cur++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//	int num;
//	int i = 0;
//
//	printf("양의 정수 입력: ");
//	scanf_s("%d", &num);
//
//	while (i < num) {
//		printf("Hello world! \n");
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//	
//	int num = 0;
//	int i = 0;
//
//	printf("양의 정수 입력: ");
//	scanf_s("%d", &num);
//
//	while (i++ < num) {
//		printf("%d ", 3 * i);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//	int hap = 0;
//	int num = 1;
//
//	while (num != 0) {
//		printf("정수 입력 : ");
//		scanf_s("%d", &num);
//		hap += num;
//	}
//	printf("입력된 정수의 총합 : %d \n", hap);
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//
//	int num;
//	int i = 9;
//
//	printf("역순으로 출력할 단 입력 : ");
//	scanf_s("%d", &num);
//
//	while (i > 0) {
//		printf("%d X %d=%d \n", num, i, num * i);
//		i--;
//	}
//	return 0;
//}

#include <stdio.h>

int main(void) {

	int total = 0;
	int i = 0;
	int num, input;

	printf("입력할 정수는? : ");
	scanf_s("%d", &num);

	while (i++ < num) {
		printf("정수 입력: ");
		scanf_s("%d", &input);
		total += input;
	}
	printf("")

}