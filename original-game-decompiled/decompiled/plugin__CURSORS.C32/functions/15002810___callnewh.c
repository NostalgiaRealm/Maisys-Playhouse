
/* ==== __callnewh @ 15002810 ==== 
 * signature: int __cdecl __callnewh(size_t _Size)
 * body: 15002810-1500284d
 * note: Library Function - Single Match  __callnewh  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 1998 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_15005a38 != (code *)0x0) {
    iVar1 = (*DAT_15005a38)(_Size);
    if (iVar1 != 0) {
      FUN_15002380(9);
      return 1;
    }
  }
  FUN_15002380(9);
  return 0;
}


