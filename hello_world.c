#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int num;
   int numbers[500];
  int i = 0;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("test.txt","a");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   if (argc == 2)
   {
      if(argv[1] > 5) fprintf(fptr, "%s \n", argv[1]);
   }
   // else {   
   //    printf(stdout, "Usage %s <name>", argv[0]);
   //    return 1;
   // }
   

   // printf("Enter num: ");
   // scanf("%d",&num);

   
   // fprintf(fptr,"%d",num);
   // fclose(fptr);

   printf("Start of the app \n");

   fprintf(fptr,"%d\n", 2599);
   fprintf(fptr,"%d\n", 454);
   fprintf(fptr,"%d\n", 45);
   fprintf(fptr,"%d\n", 97);
   fprintf(fptr,"%d\n", 14154);

   fclose(fptr);

   // READING FILE
   // if ((fptr = fopen("test.txt","r")) == NULL){
   //     printf("Error! opening file");

   //     // Program exits if the file pointer returns NULL.
   //     exit(1);
   // }

   // char str1 = fgetc(fptr);
	// while (str1 != EOF)
	// 	{
   //       if (((int)str1) == -1) printf("INTEGER OWERFLOW");
         
	// 		printf ("%c", str1);
	// 		str1 = fgetc(fptr);
	// 	}
   // fscanf(fptr,"%d", &num);

   // printf("Value of n=%d", num);
   // fclose(fptr); 

   if (fptr = fopen("test.txt", "r"))
  {
    while (fscanf(fptr, "%d", &numbers[i]) != EOF)
    {
      i++;
    }
    fclose(fptr);

    numbers[i] = '\0';

    for (i = 0; numbers[i] != '\0'; i++)
      printf("%d\n", numbers[i]);
  }

   return 0;
}
