#ifndef EV_CORE_CHAR_H
#define EV_CORE_CHAR_H
#pragma once

#include "core/global.h"
#include "core/name_value_pair.h"
#include "core/memoryallocatedobject.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class ITextCodec;
            class EV_CORE_DLL CChar:public CBaseObject
            {
ev_private:
                   CChar(CNameValuePairList *pList);
            public:

                /// <summary>
                /// ���캯��
                /// </summary>
                /// <param name="asciiChar">Ascii�ַ�</param>
                /// <param name="*pAsciiStr">ָ��</param>
                /// <param name="unicodeChar">Unicode�ַ�</param>
                /// <returns></returns>
                CChar();
                CChar(_in const ev_char &asciiChar);
                CChar(_in const ev_char *pAsciiStr);
                CChar(_in const ev_wchar &unicodeChar);
				inline void fromuint(ev_uint32 rc) {m_charData=ev_uint16(rc & 0xffff);}
				inline void fromuint(ev_uint16 rc) { m_charData=rc;}
				inline bool isHighSurrogate() const {
					return ((m_charData & 0xfc00) == 0xd800);
				}
				inline bool isLowSurrogate() const {
					return ((m_charData & 0xfc00) == 0xdc00);
				}
				static inline ev_uint32 surrogateToUcs4(ev_uint16 high, ev_uint16 low) {
					return (ev_uint32(high)<<10) + low - 0x35fdc00;
				}
                /// <summary>
                /// �õ���ǰ�ַ��İ�����������ʽ
                /// </summary>
                /// <param name=""></param>
                /// <returns>����ת���ɹ��򷵻�0~9֮������֣����򷵻�-1</returns>
                ev_int32 getDigit() const;
                /// <summary>
                /// �õ���ǰ�ַ���ASCII���ַ���ʽ
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>����ת������ַ�������ǰ�ַ�ֵ����ASCII��ķ�Χ�ڣ��򷵻�ֵΪ��ǰ�ַ��ĵ��ֽڵ�ASCII���ַ�</returns>
                ev_char getAscii() const;

                /// <summary>
                /// �õ���ǰ�ַ���Сд��ĸ��ʽ
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>�����Ѿ�ת��ΪСд�ַ����ַ�������ǰ����Ϊ��ĸ����ֱ�ӷ��ص�ǰ�ַ�</returns>
                CChar toLower() const;
                /// <summary>
                /// �õ���ǰ�ַ��Ĵ�д�ַ���ʽ
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>�����Ѿ�ת��Ϊ��д�ַ����ַ�������ǰ����Ϊ��ĸ����ֱ�ӷ��ص�ǰ�ַ�</returns>
                CChar toUpper() const;
                /// <summary>
                /// ����ǰ�ַ�ת��ΪСд�ַ�
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>����ת����ǰ�ַ�������</returns>
                CChar &makeLower();
                /// <summary>
                /// ����ǰ�ַ�ת��Ϊ��д�ַ�
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>����ת����ǰ�ַ�������</returns>
                CChar &makeUpper();
                /// <summary>
                /// �õ���ǰ�ַ���Unicode�ַ���ʽ
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>�����Ѿ�ת����Unicode�ַ�</returns>
                ev_wchar getUnicode() const;

                /// <summary>
                /// �жϵ�ǰ�ַ��Ƿ�Ϊ���ֽڵ��ַ�����ʹ�õ������ֽ������ַ���ʼ�����ַ�
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>���Ϊ���ֽ��ַ��򷵻�true�����򷵻�false</returns>
                ev_bool isSingleByte() const;
                /// <summary>
                /// �жϵ�ǰ�ַ��Ƿ�Ϊ�����������ַ�
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>���Ϊ�����������ַ��򷵻�true�����򷵻�false</returns>
                ev_bool isDigit() const;
                /// <summary>
                /// �жϵ�ǰ�ַ��Ƿ�Ϊ��ĸ�ַ�
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>���Ϊ��ĸ�ַ��򷵻�true�����򷵻�false</returns>
                ev_bool isLetter() const;
                /// <summary>
                /// �жϵ�ǰ�ַ��Ƿ�ΪASCII�ַ�
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>���ΪASCII�ַ��򷵻�true�����򷵻�false</returns>
                ev_bool isAscii() const;
                /// <summary>
                /// �жϵ�ǰ�ַ��Ƿ�ΪСд�ַ�
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>���ΪСд�ַ��򷵻�true�����򷵻�false</returns>
                ev_bool isLower() const;
                /// <summary>
                /// �жϵ�ǰ�ַ��Ƿ�Ϊ��д�ַ�
                /// </summary>
                /// <param name=""></param>
                /// <param name=""></param>
                /// <returns>���Ϊ��д�ַ��򷵻�true�����򷵻�false</returns>
                ev_bool isUpper() const;
                /// <summary>
                /// ʹ��ǰ���ܽ���=������
                /// </summary>
                /// <param name="cchar">��ǰ�ַ�</param>
                /// <param name="asciiChar">Ascii�ַ�</param>
                /// <param name="unicodeChar">Unicode�ַ�</param>
                /// <returns>���ص�ǰ���󱻸�ֵ�Ķ�������</returns>
                CChar &operator= (_in const CChar &cchar);
                CChar &operator= (_in const ev_char asciiChar);
                CChar &operator= (_in const ev_wchar unicodeChar);
                /// <summary>
                /// ʹ��ǰ���ܽ���==������
                /// </summary>
                /// <param name="cchar">��ǰ�ַ�</param>
                /// <param name="asciiChar">Ascii�ַ�</param>
                /// <param name="unicodeChar">Unicode�ַ�</param>
                /// <returns>��ȷ���true�����򷵻�false</returns>
                ev_bool operator== (_in const CChar &cchar);
                ev_bool operator== (_in const ev_char asciiChar);
                ev_bool operator== (_in const ev_wchar unicodeChar);
                friend ev_bool operator== (_in const ev_char asciiChar, _in const CChar &cchar);
                friend ev_bool operator== (_in const ev_wchar unicodeChar, _in const CChar &cchar);
                /// <summary>
                /// ʹ��ǰ���ܽ���!=������
                /// </summary>
                /// <param name="cchar">��ǰ�ַ�</param>
                /// <param name="asciiChar">Ascii�ַ�</param>
                /// <param name="unicodeChar">Unicode�ַ�</param>
                /// <returns>����ȷ���true�����򷵻�false</returns>
                ev_bool operator!= (_in const CChar &cchar);
                ev_bool operator!= (_in const ev_char asciiChar);
                ev_bool operator!= (_in const ev_wchar unicodeChar);
                friend ev_bool operator!= (_in const ev_char asciiChar, _in const CChar &cchar);
                friend ev_bool operator!= (_in const ev_wchar unicodeChar, _in const CChar &cchar);

				static inline ev_int16 highSurrogate(ev_int32 ucs4) { return ev_int16((ucs4>>10) + 0xd7c0);}
				static inline ev_int16 lowSurrogate(ev_int32 ucs4) {return ev_int16(ucs4%0x400 + 0xdc00);}
            protected:
                ///�ַ�����
                ev_wchar m_charData;
                ///��ʶ��ǰ�ַ��Ƿ�Ϊ�ɶ��ֽ������ַ���ʼ�����ַ�
                ev_bool m_bIsMultiByte;
            protected:
                static ITextCodec *m_pTextCodec;
            };
            inline ev_bool operator== (_in const ev_char asciiChar, _in const CChar &cchar)
            {
                return cchar.m_charData == asciiChar;
            }
            inline ev_bool operator== (_in const ev_wchar unicodeChar, _in const CChar &cchar)
            {
                return cchar.m_charData == unicodeChar;
            }
            inline ev_bool operator!= (_in const ev_char asciiChar, _in const CChar &cchar)
            {
                return cchar.m_charData != asciiChar;
            }
            inline ev_bool operator!= (_in const ev_wchar unicodeChar, _in const CChar &cchar)
            {
                return cchar.m_charData != unicodeChar;
            }
        }
    }
}

#endif
