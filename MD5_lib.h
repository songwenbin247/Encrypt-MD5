#ifndef __MD5_LIB_H__
#define __MD5_LIB_H__
#include "MD5.h"
/*
 * note:  the memory space of the digest pointer nust be equel or greater  then 16 Byte.
 *
 * */
int Md5_encrypt(unsigned char *txt,unsigned int txt_len,unsigned char *digest);

#endif
