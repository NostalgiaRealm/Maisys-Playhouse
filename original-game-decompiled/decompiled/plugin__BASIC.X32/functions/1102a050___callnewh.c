
/* ==== __callnewh @ 1102a050 ==== 
 * signature: int __cdecl __callnewh(size_t _Size)
 * body: 1102a050-1102a08d
 * note: Library Function - Single Match  __callnewh  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __callnewh
   
   Library: Visual Studio 1998 Release */

int __cdecl __callnewh(size_t _Size)

{
  int iVar1;
  
  __lock(9);
  if (DAT_110397ec != (code *)0x0) {
    iVar1 = (*DAT_110397ec)(_Size);
    if (iVar1 != 0) {
      FUN_1102b240(9);
      return 1;
    }
  }
  FUN_1102b240(9);
  return 0;
}


