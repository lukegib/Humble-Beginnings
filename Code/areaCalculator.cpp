#include "stdafx.h"
#include <stdio.h>

#define Triangle 1
#define Rectangle 2
#define Trapezoid 3
#define Ellipse 4
#define Square 5
#define Parallelogram 6
#define Circle 7
#define Sector 8

void main()
{
	float a;
	float b;
	float c;
	float area;
	int again;
	int shape = 1;

	printf("Area Calculater\n");
	do
	{
		printf("\nEnter choice:\n 1 <Triange>\n 2 <Rectangle\n 3 <Trapezoid>\n 4 <Ellipse>\n 5 <Square>\n 6 <Parallelogram>\n 7 <Circle>\n 8 <Sector>\n");
		printf("Choice: ");
		scanf_s("%d", &shape);

		switch (shape)
		{

		case Triangle:
			printf("Enter base: ");
			scanf_s("%f", &a);
			printf("Enter vertical height: ");
			scanf_s("%f", &b);
			area = (0.5 * (a) * (b));
			printf("Area = %.2f\n", area);
			break;
		case Rectangle:
			printf("Enter width: ");
			scanf_s("%f", &a);
			printf("Enter height: ");
			scanf_s("%f", &b);
			area = a * b;
			printf("Area = %.2f\n", area);
			break;
		case Trapezoid:
			printf("Enter base width: ");
			scanf_s("%f", &a);
			printf("Enter top width: ");
			scanf_s("%f", &b);
			printf("Enter vertical height: ");
			scanf_s("%f", &c);
			area = (0.5 * (a + b) * (c));
			printf("Area = %.2f\n", area);
			break;
		case Ellipse:
			printf("Enter major radius: ");
			scanf_s("%f", &a);
			printf("Enter minor radius: ");
			scanf_s("%f", &b);
			area = 3.14159 * a * b;
			printf("Area = %.2f\n", area);
			break;
		case Square:
			printf("Enter length: ");
			scanf_s("%f", &a);
			area = a * a;
			printf("Area = %.2f\n", area);
			break;
		case Parallelogram:
			printf("Enter base: ");
			scanf_s("%f", &a);
			printf("Enter height: ");
			scanf_s("%f", &b);
			area = a * b;
			printf("Area = %.2f\n", area);
			break;
		case Circle:
			printf("Enter radius: ");
			scanf_s("%f", &a);
			area = 3.14159 * (a * a);
			printf("Area = %.2f\n", area);
			break;
		case Sector:
			printf("Enter radius: ");
			scanf_s("%f", &a);
			printf("Enter angle in radians: ");
			scanf_s("%f", &b);
			area = 0.5 * (a * a) * b;
			printf("Area = %.2f\n", area);
			break;
		}
		printf("Go again? (1 = yes 0 = no) ");
		scanf_s("%d", &again);
	} while (again == 1);
}
