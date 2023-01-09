#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
	char name[30];
	char sirname[30];
	char schoolname[30];
	int age;
	float height;
};

void displayDetails(struct student* details) {


	printf("\n====================================== \n"); 
	printf("Name:- %s\n", details->name); 
	printf("LastName:- %s\n", details->sirname); 
	printf("School Name:- %s\n", details->schoolname); 
	printf("Age:- %d\n", details->age); 
	printf("Height:- %f\n", details->height); 
	return; 
}

void setName(struct student* details) {
	char name[30];
	printf("Please enter your name\n");
	scanf("%s", name);
	strcpy(details->name, name);
	return ;
}

void setLastName(struct student* details) {
	char lname[30];
	printf("Please enter your last name\n");
	scanf("%s", lname);
	strcpy(details->sirname, lname);
	return ;
}

void setSchoolName(struct student* details) {
	char sname[30];
	printf("Please enter your school name\n");
	scanf("%s", sname);
	strcpy(details->schoolname, sname);
	return ;
}

void setAge(struct student* details) {
	int age;
	printf("Please enter your age\n");
	scanf("%d", &age);
	details->age = age;
	return ;
}

void setHeight(struct student* details) {
	float height;
	printf("Please enter your height\n");
	scanf("%f", &height);
	details->height = height;
	return ;
}

int main() {

	struct student* details = (struct student*)(malloc(sizeof (struct student)));

	int input;
	while (input != -1) {

		printf("Please enter your choice:- \n");
		printf("1) Set Name \t 2) Set Last Name \t 3) Set School Name \n");
		printf("4) Set Age \t 5) Set Height \t 9) Display Details \n");
		printf("For exit press  -1 \n");
		scanf("%d", &input);
		switch (input) {
			case 1:
			setName(details);
			break;
			case 2:
			setLastName(details);
			break;
			case 3:
			setSchoolName(details);
			break;
			case 4:
			setAge(details);
			break;
			case 5:
			setHeight(details);
			break;
			case 9:
			displayDetails(details); 
			break;
			case -1:
			break;
			default:
			printf("Please select any valid option displayed in menu\n");

		}
	}

	return 0;
}