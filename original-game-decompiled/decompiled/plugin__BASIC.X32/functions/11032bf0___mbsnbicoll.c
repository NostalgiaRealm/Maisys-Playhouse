
/* ==== __mbsnbicoll @ 11032bf0 ==== 
 * signature: int __cdecl __mbsnbicoll(uchar * _Str1, uchar * _Str2, size_t _MaxCount)
 * body: 11032bf0-11032c2a
 * note: Library Function - Single Match  __mbsnbicoll  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 1998 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_11032f40(DAT_11036738,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_11036734);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


