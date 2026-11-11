
/* ==== _vsprintf @ 0048f870 ==== 
 * signature: int __cdecl _vsprintf(char * _Dest, char * _Format, va_list _Args)
 * body: 0048f870-0048f8d6
 * note: Library Function - Single Match  _vsprintf  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _vsprintf
   
   Library: Visual Studio 1998 Release */

int __cdecl _vsprintf(char *_Dest,char *_Format,va_list _Args)

{
  int iVar1;
  FILE local_20;
  
  local_20._flag = 0x42;
  local_20._base = _Dest;
  local_20._ptr = _Dest;
  local_20._cnt = 0x7fffffff;
  iVar1 = FUN_00496260(&local_20,(byte *)_Format,(undefined4 *)_Args);
  local_20._cnt = local_20._cnt + -1;
  if (-1 < local_20._cnt) {
    *local_20._ptr = '\0';
    return iVar1;
  }
  FUN_00496110(0,&local_20);
  return iVar1;
}


