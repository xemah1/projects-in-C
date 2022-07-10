#include <stdio.h>
// void counter();

int main(){
	FILE *fptr;
	int fileCounterIntegerThatsNotSupposedToCreateProblemSoItsSuperLong=0;	// all integers used in this file are the same one repeated. you can change them easily.
	fptr = fopen("counter.txt","r");
	if (fptr == NULL){	// creates counter.txt if this is the first time running the code.
		fopen("counter.txt","w");
		fprintf(fptr,"%d",fileCounterIntegerThatsNotSupposedToCreateProblemSoItsSuperLong);
		fclose(fptr);
	}
	
	fptr = fopen("counter.txt","r");	// reads from file
	fscanf(fptr,"%d",&fileCounterIntegerThatsNotSupposedToCreateProblemSoItsSuperLong);
	fclose(fptr);
	
	fopen("counter.txt","w");	// writes into the file
	fprintf(fptr,"%d",fileCounterIntegerThatsNotSupposedToCreateProblemSoItsSuperLong+1);
	fclose(fptr);
	printf("This Program Ran %d Times.",fileCounterIntegerThatsNotSupposedToCreateProblemSoItsSuperLong+1);
	
	// counter(); example of function usage
	return 0;
}
/*
void counter(){
	// paste all code inside main without return in order to turn the counter into a function
	// and remove back slashes from line 2
}
*/
