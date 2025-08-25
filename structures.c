#include <stdio.h>
#include <string.h>

struct details
{
	char str[100];
	int roll_no;
	float marks;
};

void updateMarks(struct details *d)
{
	int i;
	scanf("%d", &i);
	d->marks = i;
}

int main()
{
	struct details s1 = {"roxas", 89, 99.8};

	printf("Name: %s, Roll No.: %d, Marks: %f", s1.str, s1.roll_no, s1.marks);
	updateMarks(&s1);
	printf("\nName: %s, Roll No.: %d, Marks %f", s1.str, s1.roll_no, s1.marks);

	return 0;
}