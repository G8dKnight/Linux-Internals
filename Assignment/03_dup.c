
/* To redirect the message printed in STDOUT to the file passed as CLA */
//______________________________________
//Name		: Vasanthakumar K 
//Date		: 17/12/21
//______________________________________



#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main(int argc , char* argv[])
{
	if(argc != 2)
	{
		if(argc < 2)
			printf("Error : Fewer arguments\n");
		else if (argc > 2)
			printf("Error : Too many arguments\n");
		
		printf("Usage : ./dup <FILENAME> \n");
		
		return 0 ;
	}
	else
	{
		int fd , fd1;

		fd = open(argv[1] , O_CREAT | O_WRONLY , 0777 );
		
		
		
		/*...............Using dup2()................ */

		fd1 = dup2(fd,1); 



		/*...............Using dup()................ */

		/*
		 * close(1);
		 * fd1 = dup(fd);
		 */


		printf("Helllo World \n");

		return 0 ;
	}
}
