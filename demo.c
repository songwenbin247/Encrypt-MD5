#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>
#include "MD5_lib.h"  
  
int main(int argc, char *argv[])  
{  
    int i;  
    unsigned char encrypt[] ="adminn";//21232f297a57a5a743894a0e4a801fc3  
    unsigned char decrypt[16];      
    Md5_encrypt(encrypt,strlen(encrypt),decrypt);
	printf("加密前:%s\n加密后:",encrypt);  
    for(i=0;i<16;i++)  
    {  
        printf("%02x",decrypt[i]);  
    }  
      
    getchar();  
      
    return 0;  
}  

