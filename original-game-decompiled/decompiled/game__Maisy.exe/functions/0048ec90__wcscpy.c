
/* ==== _wcscpy @ 0048ec90 ==== 
 * signature: wchar_t * __cdecl _wcscpy(wchar_t * _Dest, wchar_t * _Source)
 * body: 0048ec90-0048ecb1
 * note: Library Function - Single Match  _wcscpy  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _wcscpy
   
   Library: Visual Studio 1998 Release */

wchar_t * __cdecl _wcscpy(wchar_t *_Dest,wchar_t *_Source)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  pwVar2 = _Dest;
  do {
    wVar1 = *_Source;
    *_Dest = wVar1;
    _Dest = _Dest + 1;
    _Source = _Source + 1;
  } while (wVar1 != L'\0');
  return pwVar2;
}


