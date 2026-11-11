
/* ==== __callnewh @ 13005ef0 ==== 
 * signature: int __cdecl __callnewh(size_t _Size)
 * body: 13005ef0-13005f2d
 * note: Library Function - Single Match  __callnewh  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 1998 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_13008d28 != (code *)0x0) {
    iVar1 = (*DAT_13008d28)(_Size);
    if (iVar1 != 0) {
      FUN_13005a60(9);
      return 1;
    }
  }
  FUN_13005a60(9);
  return 0;
}


