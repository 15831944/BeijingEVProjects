#ifndef _ENCRYPTION_MD5_H_
#define _ENCRYPTION_MD5_H_

#include "config.h"
#include "struct.h"

ENCRYPTION_DECLARE

/*ͨ���������ĳ��ȣ�������ܺ�����ĳ���*/
ENCRYPTION_API 
int md5_get_length_after_encrypt(size_t len);

/*
���ܺ���,�û���Ҫ�ṩ��ȡ��д�뺯�����Լ���Ӧ��������.
Keyֵ����Ҫ��֤8���ֽڣ����С��8���ֽڣ��Զ�����8λ���������8���ֽڣ�ȥǰ8���ֽڡ�
��� func_read = 0,��Ĭ�ϲ�ȡchar* buffer��ȡ���ԣ�plain������char*����
��� func_write = 0,��Ĭ�ϲ�ȡchar* bufferд�����,cipher������char*����
*/
ENCRYPTION_API
int md5_encrypt(void* plain,size_t len,read_io func_read,void* cipher,write_io func_write);

ENCRYPTION_END

#endif