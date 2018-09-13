#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee {
  char name[128];
  float salary;
};
typedef struct employee Employee;
float total_salary(Employee a[], int len);
int main() {
  	int num,i=0,j=0; 
  	Employee *all,*a;
  	FILE *fp;
  	printf("Enter num: ");
  	scanf("%d",&num);
 	all=(Employee *)malloc(num*sizeof(Employee));
 	a=(Employee *)malloc(num*sizeof(Employee));
  	printf("Input\n");
  	
	fp=fopen("employee.bin","ab+");
	for(i=0; i<num; i++){
		fflush(stdin);
		printf("name: ");
		gets((all+i)->name);
		printf("salary: ");
		scanf("%f",&(all+i)->salary);
		fwrite(&all,sizeof(Employee),1,fp);
	}
	fclose(fp);
	
	fp=fopen("employee.bin","rb");
	printf("\nOpen File employee.bin \n");
	fread(&a,sizeof(Employee),1,fp);
	printf("Enter num: ");
  	scanf("%d",&num);
	for(i=0; i<num; i++){
		printf("Name = %s\n",(a+i)->name);
		printf("Salary = %.2f\n",(a+i)->salary);
	}
	fclose(fp);

	printf("\nTotal Salary = %.1f\n", total_salary(a, num));
	free(a);
	free(all);
			
	fclose(fp);	
  	return 0;	
}
float total_salary(Employee a[], int len){
	int i;
	float sum=0;
	for(i=0; i<len; i++)
	sum=sum+(a+i)->salary;
	return sum;
}

