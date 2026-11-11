
/* ==== __controlfp @ 1202b390 ==== 
 * signature: uint __cdecl __controlfp(uint _NewValue, uint _Mask)
 * body: 1202b390-1202b3a7
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


