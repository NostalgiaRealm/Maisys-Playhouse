
/* ==== __callnewh @ 1202edf0 ==== 
 * signature: int __cdecl __callnewh(size_t _Size)
 * body: 1202edf0-1202ee2d
 * note: Library Function - Single Match  __callnewh  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 1998 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_120399d0 != (code *)0x0) {
    iVar1 = (*DAT_120399d0)(_Size);
    if (iVar1 != 0) {
      FUN_1202c520(9);
      return 1;
    }
  }
  FUN_1202c520(9);
  return 0;
}


