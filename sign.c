#include<stdio.h>
#include"font5x7.h"
#include<string.h>

/* Mengyue Duan
First, I read the different input. test1.dat, test2.dat and test3.dat. Secondly, I did all in the different format. Third, I output them with different format. */
void printChar(char z,int index,char y)
{	int array[8];  
	for(int j =0;j<8;j++){
		if(j<5)
		array[j]=Font5x7[index +j];
		else
		array[j]=0;
		
	}
	//int letter = 0;	
	for(int i=0; i<8;i++)
	{	for(int k=0;k<8;k++)
			{	if(array[k]%2==1)
				if(z!='~')
				printf("%c",z);
				else{
					printf("%c",y);
				}
				else printf(" ");
				//if((k+1)%8 ==0)
				//++letter;
				array[k]=array[k]/2;
			}
			printf("\n");
			//letter =0;
	}
	

}

void printWord(char z, char y[],int d)
{       
	
	int array[8*d];
	int a=0;
           for(int i=0;i<d;i++)
		{
		int index;
		index =( y[i]-32)*5; 
           	for(int j=0;j<8;j++){
                   if(j<5)
                   array[a]=Font5x7[index +j];
		
                   else
                      array[a]=0;
 		   a++;
         	 }
 	}
	int letter = 0;
          for(int i=0; i<8;i++)
          {       for(int k=0;k<8*d;k++)
                          {       if(array[k]%2==1)
                                  	if(z != '~'&& z!='\n')
						printf("%c",z);
				  	else{
						printf("%c",y[letter]);
					
					}		
                                  else
                                  printf(" ");

				  if ((k+1)%8 == 0)
					++letter;
                                  array[k]=array[k]/2;
                          }
                          printf("\n");
 			  letter = 0;
          }
 
  }


int main(void)
{	char a;
	char b;
	char c[100];
	int d;

	printf("Enter formatting code: \n");
	
	fgets(c,100,stdin);
	a=c[0]; b=c[1];	
	

	printf("Enter message: \n");
	
	int numberword=0;	
	while(1){
	//while(!feof(stdin==1)){	
	//d = strlen(c);
	//scanf("%d",c);
	//if(feof(stdin) break;	
	//d=strlen(c);
	if(a=='C'){
	scanf("%s",c);
	if(feof(stdin)) break;	
	d=strlen(c);
	numberword++;	 
	if(numberword>1)
		{
			printf("\n");

			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
		}
			//d=strlen(c);
			//if(feof(stdin)) break;
			for(int i=0; i<d;i++)
			{
				int index = (int)(c[i] -32)*5;
				printChar(b,index,c[i]);
				//printf("\n");
				}
}
		else if(a=='W'){
			        scanf("%s",c);
				d=strlen(c);
				if(feof(stdin)) break;
				printWord(b,c,d);
				printf("\n");
				}
		
		else if(a=='L'){
		fgets(c,100,stdin);
		//fgets(c,stdin);
		if(feof(stdin))
			break;
		//c[strlen(c)-1]='\0';
		d= strlen(c);
		printWord(b,c,d);
	
	}
}
	
	return 0;

}
