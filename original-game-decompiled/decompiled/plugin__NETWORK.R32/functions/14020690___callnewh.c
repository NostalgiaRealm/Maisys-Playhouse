
/* ==== __callnewh @ 14020690 ==== 
 * signature: int __cdecl __callnewh(size_t _Size)
 * body: 14020690-140206cd
 * note: Library Function - Single Match  __callnewh  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 1998 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_14028980 != (code *)0x0) {
    iVar1 = (*DAT_14028980)(_Size);
    if (iVar1 != 0) {
      FUN_1401a650(9);
      return 1;
    }
  }
  FUN_1401a650(9);
  return 0;
}


