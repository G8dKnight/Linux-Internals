#include<stdio.h>
#include<fcntl.h>



int main(int argc , char* argv[])
{
	if(argc < 3)
	{
		printf("Too few arguments\n");
		printf("Usage : my_cp -[option] SRC_File DST_File\n");
		return 0;
	}
	else if( argc == 4)
	{
		
	}

}
