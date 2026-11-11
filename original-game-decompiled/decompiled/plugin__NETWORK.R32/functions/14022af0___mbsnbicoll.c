
/* ==== __mbsnbicoll @ 14022af0 ==== 
 * signature: int __cdecl __mbsnbicoll(uchar * _Str1, uchar * _Str2, size_t _MaxCount)
 * body: 14022af0-14022b2a
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
  iVar1 = FUN_14022e40(DAT_14027458,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_14027454);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}


