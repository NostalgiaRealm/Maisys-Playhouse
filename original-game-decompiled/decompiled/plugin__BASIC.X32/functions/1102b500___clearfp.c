
/* ==== __clearfp @ 1102b500 ==== 
 * signature: uint __cdecl __clearfp(void)
 * body: 1102b500-1102b516
 * note: Library Function - Single Match  __clearfp  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __clearfp
   
   Library: Visual Studio 1998 Release */

uint __cdecl __clearfp(void)

{
  uint uVar1;
  ushort in_FPUStatusWord;
  
  uVar1 = __abstract_sw(in_FPUStatusWord);
  return uVar1;
}


