#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int target = 0;

void func()
{
   printf("Integer overflow \n");
   exit(EXIT_FAILURE);
}

void bufferOverflow() { printf("Buffer Overflow\n"); }

void stringfO(char *string){
   if(target){
      printf("Data reached\n");
   }
}

int main(int argc, char **argv)
{
   int test = 0;
   char buffer[10];
   // strcpy(buffer, argv[1]);

   stringfO(argv[1]);

   int numbers[500];
   int i = 0;
   FILE *fptr;

   scanf("%s", buffer);
   if (test)
   {
      bufferOverflow();
   }

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen(buffer, "w");

   if (fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   if (argc == 2)
   {
      if (argv[1] > 1)
      {
         fprintf(fptr, "%s \n", argv[1]);
      }
   }

   printf("Start of the app \n");

   fprintf(fptr, "%d\n", 1);
   fprintf(fptr, "%d\n", 2);
   fprintf(fptr, "%d\n", 3);
   fprintf(fptr, "%d\n", 4);
   fprintf(fptr, "%d\n", 5);
   
   fclose(fptr);
   
   //fptr = fopen(buffer, "r");

   if (fptr = fopen(buffer, "r"))
   {
   printf( "test\n");
      while (fscanf(fptr, "%d", &numbers[i]) != EOF)
      {
         printf("%d", numbers[i]);
         if (numbers[i] < 0)
         {
            func();
         }
         i++;
      }
      fclose(fptr);

      printf("",buffer);

      numbers[i] = '\0';

      for (i = 0; numbers[i] != '\0'; i++)
      {

         printf("%d\n", numbers[i]);
      }
   }

   return 0;
}
