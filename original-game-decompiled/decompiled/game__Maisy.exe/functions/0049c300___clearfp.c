
/* ==== __clearfp @ 0049c300 ==== 
 * signature: uint __cdecl __clearfp(void)
 * body: 0049c300-0049c316
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


