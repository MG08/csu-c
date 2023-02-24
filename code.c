#include<stdio.h>

int main() {
	float c;
	float v;
	printf("Give me two numbers\n");
	scanf_s("%f", &c);
	scanf_s("%f", &v);
	if (c == 0) {
		printf("Division of %f by %f : %f\n", c, v, c / v);
	}
	if (v == 0) {
		printf("Division of %f by %f : Nope\n", c, v);
	}
	if (int(c) % 2 != 0 and int(v) % 2 != 0) {
		printf("Division of %f by %f : %f\n", c, v, c / v);
		if (v < c)
			printf("In order: %f %f\n", v, c);
		else
			printf("In order: %f %f\n", c, v);
		printf("Bad Luck!\n");
		printf("Odd: %f %f \n", c,v);


	}
	else {
		if (int(c) % 2 != 0) {
			printf("Division of %f by %f : %f\n", c, v, c / v);
			if (v < c)
				printf("In order: %f %f\n", v, c);
			else
				printf("In order: %f %f\n", c, v);
			printf("Bad Luck!\n");
			printf("Odd:%f \n", c);
		}
		if (int(v) % 2 != 0) {
			printf("Division of %f by %f : %f\n", c, v, c / v);
			if (v < c)
				printf("In order: %f %f\n", v, c);
			else
				printf("In order: %f %f\n", c, v);
			printf("Bad Luck!\n");
			printf("Odd:%f \n", v);
		}
	}

}
