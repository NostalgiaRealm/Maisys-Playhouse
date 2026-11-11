
/* ==== _sprintf @ 0048f8e0 ==== 
 * signature: int __cdecl _sprintf(char * _Dest, char * _Format, ...)
 * body: 0048f8e0-0048f946
 * note: Library Function - Single Match  _sprintf  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 1998 Release */

int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  FILE local_20;
  
  local_20._flag = 0x42;
  local_20._base = _Dest;
  local_20._ptr = _Dest;
  local_20._cnt = 0x7fffffff;
  iVar1 = FUN_00496260(&local_20,(byte *)_Format,(undefined4 *)&stack0x0000000c);
  local_20._cnt = local_20._cnt + -1;
  if (-1 < local_20._cnt) {
    *local_20._ptr = '\0';
    return iVar1;
  }
  FUN_00496110(0,&local_20);
  return iVar1;
}


