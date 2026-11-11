
/* ==== __isindst @ 004998e0 ==== 
 * signature: int __cdecl __isindst(tm * _Time)
 * body: 004998e0-00499907
 * note: Library Function - Single Match  __isindst  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __isindst
   
   Library: Visual Studio 1998 Release */

int __cdecl __isindst(tm *_Time)

{
  int iVar1;
  
  __lock(0xb);
  iVar1 = __isindst_lk(&_Time->tm_sec);
  FUN_00493e20(0xb);
  return iVar1;
}


