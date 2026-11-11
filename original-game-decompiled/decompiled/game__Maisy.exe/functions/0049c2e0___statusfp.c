
/* ==== __statusfp @ 0049c2e0 ==== 
 * signature: uint __cdecl __statusfp(void)
 * body: 0049c2e0-0049c2f5
 * note: Library Function - Single Match  __statusfp  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __statusfp
   
   Library: Visual Studio 1998 Release */

uint __cdecl __statusfp(void)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  uVar1 = __abstract_sw(in_FPUStatusWord);
  return uVar1;
}


