
/* ==== __control87 @ 1202b350 ==== 
 * signature: uint __cdecl __control87(uint _NewValue, uint _Mask)
 * body: 1202b350-1202b38e
 * note: Library Function - Single Match  __control87  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __control87
   
   Library: Visual Studio 1998 Release */

uint __cdecl __control87(uint _NewValue,uint _Mask)

{
  uint uVar1;
  ushort in_FPUControlWord;
  
  uVar1 = __abstract_cw(in_FPUControlWord);
  __hw_cw();
  return ~_Mask & uVar1 | _Mask & _NewValue;
}


