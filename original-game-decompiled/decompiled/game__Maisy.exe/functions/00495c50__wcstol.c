
/* ==== _wcstol @ 00495c50 ==== 
 * signature: long __cdecl _wcstol(wchar_t * _Str, wchar_t * * _EndPtr, int _Radix)
 * body: 00495c50-00495c69
 * note: Library Function - Single Match  _wcstol  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _wcstol
   
   Library: Visual Studio 1998 Release */

long __cdecl _wcstol(wchar_t *_Str,wchar_t **_EndPtr,int _Radix)

{
  uint uVar1;
  
  uVar1 = FUN_00495c70((wint_t *)_Str,_EndPtr,_Radix,0);
  return uVar1;
}


