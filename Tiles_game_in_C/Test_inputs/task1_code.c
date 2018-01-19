#include <stdio.h>
#include <string.h>
int Integer[4],i=0,j,k;
char Character[8];
 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //// You can directly use Integer[] and Character[] array. 
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
 void puzzle()
 { 
 	 //add your code here		
 }
 
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //DO NOT EDIT
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 int main()
 { 
 	char str3[20]=".txt";
 	for(k=0;k<3;k++)
 	{
		char str1[40]="Test_input";
 		str1[10]=k+48;
 		strcat(str1,str3);
 		printf("\n%s",str1);
 		printf("\n");	
 		FILE* in_file = fopen( str1, "r"); // read only  
         
        if (! in_file ) // equivalent to saying if ( in_file == NULL ) 
        {  
            printf("oops, file can't be read\n"); 
            return 0;
        } 
 
        // attempt to read the next line and store 
        // the value in the "number" variable 
        for (i = 0; i < 4; i++)
    	{
        	fscanf(in_file, "%d", &Integer[i]);
    	}
    	memset(&Character[0], 0, sizeof(Character));
        for (i = 0; i < 8; i++)
    	{
        	fscanf(in_file, "%c", &Character[i]);
    	}             
        puzzle();
    }
    return 0;
}
