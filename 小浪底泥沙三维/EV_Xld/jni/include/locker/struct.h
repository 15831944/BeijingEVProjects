#ifndef _ENCRYPTION_STRUCT_H_
#define _ENCRYPTION_STRUCT_H_

/*
��ȡ������ָ��
����ֵΪ ��ȷ��������
*/
typedef int (*read_io)(char* buffer,size_t size,size_t count,void* obj);
/*
д��������ָ��
����ֵΪ ��ȷд�����
*/
typedef int (*write_io)(char* buffer,size_t size,size_t count,void* obj);

#endif