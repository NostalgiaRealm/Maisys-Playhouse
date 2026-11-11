
/* ==== _atoi @ 00490a70 ==== 
 * signature: int __cdecl _atoi(char * _Str)
 * body: 00490a70-00490a7d
 * note: Library Function - Single Match  _atoi  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _atoi
   
   Library: Visual Studio 1998 Release */

int __cdecl _atoi(char *_Str)

{
  long lVar1;
  
  lVar1 = _atol(_Str);
  return lVar1;
}


