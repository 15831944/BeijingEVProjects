#ifndef EV_CORE_GBKSTRING_H
#define EV_CORE_GBKSTRING_H
#pragma once

#include "core/multibytestring.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{

			class EV_CORE_DLL CGBKString : public CMultiByteString
			{
			public:
				// <summary>
				// ���캯��
				// </summary>
				// <param name="&ch">��ʼ����ǰ�����CChar�ַ�</param>
				// <param name="*pMultiByteStr">��ʼ����ǰ����Ķ��ֽ��ַ���</param>
				// <param name="*pUnicodeStr">��ʼ����ǰ�����Unicode�ַ���</param>
				// <param name="&str">��ʼ����ǰ�����CMultiByteString����</param>
				// <param name="&wstr">��ʼ����ǰ�����CUnicodeString����</param>
				// <returns></returns>
				CGBKString();
				CGBKString(_in const ev_char &ch);
				CGBKString(_in const CChar  &ch);        
				CGBKString(_in const ev_char  *pMultiByteStr);
				CGBKString(_in const ev_char  *pMultiByteStr, CharSet cs);
				CGBKString(_in const ev_wchar *pUnicodeStr);
				CGBKString(const CGBKString &str);
				CGBKString(const CUnicodeString &wstr);
				CGBKString(const CMultiByteString &strMultiByte);


				CGBKString& assign(const ev_char* ptr,size_type offset,size_type count)
				{
#ifdef EV_OS_WIN
					m_strDataBuffer.assign(CGBKString(ptr).c_str(),offset,count);
#else
					m_strDataBuffer.assign(ptr,offset,count);
#endif
					return *this;
				}

				CGBKString& assign(const ev_char* ptr,size_type count)
				{
#ifdef EV_OS_WIN
					m_strDataBuffer.assign(CGBKString(ptr).c_str(),count);
#else
					m_strDataBuffer.assign(ptr,count);
#endif
					return *this;
				}

				// <summary>
				// �ڵ�ǰ�ַ�������ĩβ׷������
				// </summary>
				// <param name="ch">׷��CChar�ַ�</param>
				// <param name="pMultiByteStr">׷��char*���ַ���</param>
				// <param name="pUnicodeStr">׷��Unicode�ַ���</param>
				// <param name="nCount">�ӻ�������ָ�����ַ���Ŀ</param>
				// <param name="strMultiByte">char*���ַ���</param>
				// <param name="strUnicode">Unicode���ַ���</param>
				// <returns>����׷�Ӻ�ĵ�ǰ�ַ������������</returns>
				CGBKString&  append(_in const CChar  &ch);
				CGBKString&  append(_in const ev_char  *pMultiByteStr);
				CGBKString&  append(_in const ev_wchar *pUnicodeStr);
				CGBKString&  append(_in const ev_char  *pMultiByteStr, _in ev_size_t nCount);
				CGBKString&  append(_in const ev_wchar *pUnicodeStr, _in ev_size_t nCount);
				CGBKString&  append(_in const CMultiByteString  &strMultiByte);
				CGBKString&  append(_in const CUnicodeString    &strUnicode);
				CGBKString&  append(_in const ev_char ch);
				CGBKString&  append(_in const CGBKString &ch);

				// <summary>
				// �ڵ�ǰ�ַ��������ָ��λ�ò�������
				// </summary>
				// <param name="nIndexOfPos">�����ַ�����λ��</param>
				// <param name="ch">����CChar�ַ�</param>
				// <param name="pMultiByteStr">����char*���ַ���</param>
				// <param name="pUnicodeStr">����Unicode�ַ���</param>
				// <returns>���ز��������ݺ�ĵ�ǰ�ַ������������</returns>
				virtual CGBKString&  insert(_in ev_size_t nIndexOfPos, _in const CChar  &ch);
				virtual CGBKString&  insert(_in ev_size_t nIndexOfPos, _in const ev_char  *pMultiByteStr);
				virtual CGBKString&  insert(_in ev_size_t nIndexOfPos, _in const ev_wchar *pUnicodeStr);

				// <summary>
				// ��ʽ����ǰ�ַ���
				// </summary>
				// <param name="pFormatStr">��ʽ���������ַ���</param>
				// <param name="pFormatWStr">��ʽ���������ַ���</param>
				// <returns>���ظ�ʽ����ɺ�ĵ�ǰ�ַ������������</returns>
				virtual CGBKString&  format(_in const ev_char  *pFormatStr, _in ...); 
				virtual CGBKString&  format(_in const ev_wchar *pFormatWStr, _in ...);

				// <summary>
				// ����ָ���ĸ�ʽ���ַ�����׷�ӵ���ǰ�ַ���ĩβ
				// </summary>
				// <param name="pFormatStr">��ʽ���������ַ���</param>
				// <param name="pFormatWStr">��ʽ���������ַ���</param>
				// <returns>���ظ�ʽ����ɺ�ĵ�ǰ�ַ������������</returns>
				virtual CGBKString&  formatAppend(_in const ev_char  *pFormatStr, ...); 
				virtual CGBKString&  formatAppend(_in const ev_wchar *pFormatWStr, ...);

				// <summary>
				// ��ֵ����������
				// </summary>
				// <param name="ch">����CChar�ַ�</param>
				// <param name="pMultiByteStr">ev_char���ַ���</param>
				// <param name="pUnicodeStr">ev_wchar���ַ���</param>
				// <param name="strMultiByte">���ֽ��ַ�������</param>
				// <param name="strUnicode">Unicode�ַ�������</param>
				// <returns>���ص�ǰ���������</returns>
				CGBKString&  operator=(_in const CChar  &ch);
				CGBKString&  operator=(_in const ev_char  *pMultiByteStr);
				CGBKString&  operator=(_in const ev_wchar *pUnicodeStr);
				CGBKString&  operator=(_in const CMultiByteString &strMultiByte);
				CGBKString&  operator=(_in const CUnicodeString &strUnicode);
				CGBKString&  operator=(_in const std::string    &strMultiByte);
				CGBKString&  operator=(_in const wchar_string   &strUnicode);
				CGBKString&  operator=(_in const CGBKString   &strUtf);

				// <summary>
				// +�Ų���������
				// </summary>
				// <param name="ch">����CChar�ַ�</param>
				// <param name="strMultiByte">CMultiByteString����</param>
				// <param name="strUnicode">CUnicodeString����</param>
				// <param name="pMultiByteStr">ev_char���ַ���</param>
				// <param name="pUnicodeStr">ev_wchar���ַ���</param>
				// <returns>������Ӻ��CMultiByteString����</returns>
				friend EV_CORE_DLL CGBKString  operator+(_in const CGBKString &strGBKL, _in const CGBKString &strGBKR); 
				//friend EV_CORE_DLL CGBKString  operator+(_in const CGBKString &strUtf, _in const CUnicodeString strUnicode);
				//friend EV_CORE_DLL CGBKString  operator+(_in const CChar  &ch, _in const CGBKString &strUtf);
				//friend EV_CORE_DLL CGBKString  operator+(_in const CGBKString &strUtf, _in const CChar  &ch);
				//friend EV_CORE_DLL CGBKString  operator+(_in const ev_char* pMultiByteStr, _in const CGBKString &strUtf);
				//friend EV_CORE_DLL CGBKString  operator+(_in const CGBKString &strUtf, _in const ev_char* pMultiByteStr);
				//friend EV_CORE_DLL CGBKString  operator+(_in const ev_wchar* pUnicodeStr, _in const CGBKString &strUtf);
				//friend EV_CORE_DLL CGBKString  operator+(_in const CGBKString &strUtf, _in const ev_wchar* pUnicodeStr);
				//friend EV_CORE_DLL CGBKString  operator+(_in const ev_char* pMultiByteStr, _in const CChar  &ch);
				//friend EV_CORE_DLL CGBKString  operator+(_in const CChar  &ch, _in const ev_char* pMultiByteStr);

				// <summary>
				// +=���������
				// </summary>
				// <param name="ch">����CChar�ַ�</param>
				// <param name="strMultiByte">CMultiByteString����</param>
				// <param name="strUnicode">CUnicodeString����</param>
				// <param name="pMultiByteStr">ev_char���ַ���</param>
				// <param name="pUnicodeStr">ev_wchar���ַ���</param>
				// <returns>������Ӻ��CMultiByteString����</returns>
				CGBKString&  operator+=(_in const CGBKString  &strGBK);
				//CGBKString&  operator+=(_in const CChar  &ch);
				//CGBKString&  operator+=(_in const ev_char  *pMultiByteStr);
				//CGBKString&  operator+=(_in const ev_wchar *pUnicodeStr);
				//CGBKString&  operator+=(_in const CMultiByteString &strMultiByte);
				//CGBKString&  operator+=(_in const CUnicodeString &strUnicode);
				//CGBKString&  operator+=(_in const ev_char &ch);

				// <summary>
				// ���ڲ���������
				// </summary>
				// <param name="ch">����CChar�ַ�</param>
				// <param name="strMultiByte">CMultiByteString����</param>
				// <param name="strUnicode">CUnicodeString����</param>
				// <param name="pMultiByteStr">ev_char���ַ���</param>
				// <param name="pUnicodeStr">ev_wchar���ַ���</param>
				// <returns>���������ȷ���true�����򷵻�false</returns>
				ev_bool operator==(_in const CChar  &ch) const;
				ev_bool operator==(_in const ev_char  *pMultiByteStr) const;
				ev_bool operator==(_in const ev_wchar *pUnicodeStr) const;
				ev_bool operator==(_in const CMultiByteString &strMultiByte) const;
				ev_bool operator==(_in const CUnicodeString &strUnicode) const;
				ev_bool operator==(_in const CGBKString  &strUtf) const;

			};
		}
	}
}
#endif