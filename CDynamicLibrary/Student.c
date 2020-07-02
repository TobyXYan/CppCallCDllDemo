#include <stdio.h>
#include "Student.h"

static char Name[256];

char* GetName()
{
	strcpy(Name, "Toby");
	return Name;
}

void GetAge(int* age)
{
	*age = 2020 - 1992;
}