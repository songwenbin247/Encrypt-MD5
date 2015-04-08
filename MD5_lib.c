#include "MD5.h"
#include "MD5_lib.h"
/* function describe:
 *    MD5 digest
 * input :
 * 	  txt      : the data to be digested;
 *    txt_len  : the data length
 *    digest   : the rusult of digest; 
 * return :
 * 	  0 ==  ok!
 * */


int Md5_encrypt(unsigned char *txt,unsigned int txt_len, unsigned char *digest)
{
	MD5_CTX md5;
	MD5Init(&md5);
	MD5Update(&md5,txt,txt_len);
	MD5Final(&md5,digest);
	return 0;
}
