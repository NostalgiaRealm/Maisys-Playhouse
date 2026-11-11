
/* ==== __callnewh @ 00494840 ==== 
 * signature: int __cdecl __callnewh(size_t _Size)
 * body: 00494840-0049487d
 * note: Library Function - Single Match  __callnewh  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 1998 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_004e54a0 != (code *)0x0) {
    iVar1 = (*DAT_004e54a0)(_Size);
    if (iVar1 != 0) {
      FUN_00493e20(9);
      return 1;
    }
  }
  FUN_00493e20(9);
  return 0;
}


