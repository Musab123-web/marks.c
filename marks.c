#include<stdio.h>
int main()
{
	int phy,chem,itbs,electronics,civil,math,hrm;
	float per;
	/*input marks of seven subjects from the user */
	printf("Enter the seven subject marks:");
	scanf("%d%d%d%d%d%d%d%",&phy,&chem,&itbs,&electronics,&civil,&math,&hrm);
	
	/* calculate percentage */
	per=(phy+chem+itbs+electronics+civil+math+hrm)/7.0;
	printf("Percentage=%2f\n",per);
	
	if(per>=90)
	{
		printf("Grade A");
	}
	else if(per>=80)
	{
		printf("Grade B");
	}
	else if(per>=70)
	{
		printf("Grade C");
	}
	else if(per>=60)
	{
		printf("Grade D");
	}
	else if(per>=40)
	{
		printf("Grade E");
	}
	else
	{
		printf("Grade F");
	}
	return 0;
}
