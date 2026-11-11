
/* ==== __controlfp @ 1102b560 ==== 
 * signature: uint __cdecl __controlfp(uint _NewValue, uint _Mask)
 * body: 1102b560-1102b577
 * note: Library Function - Single Match  __controlfp  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __controlfp
   
   Library: Visual Studio 1998 Release */

uint __cdecl __controlfp(uint _NewValue,uint _Mask)

{
  uint uVar1;
  
  uVar1 = __control87(_NewValue,_Mask & 0xfff7ffff);
  return uVar1;
}


