
/* ==== __hextodec @ 0049aa90 ==== 
 * signature: uint __cdecl __hextodec(uint param_1)
 * body: 0049aa90-0049aacd
 * note: Library Function - Single Match  __hextodec  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __hextodec
   
   Library: Visual Studio 1998 Release */

uint __cdecl __hextodec(uint param_1)

{
  uint uVar1;
  
  if (DAT_004de8cc < 2) {
    uVar1 = *(ushort *)(PTR_DAT_004de6c0 + param_1 * 2) & 4;
  }
  else {
    uVar1 = __isctype(param_1,4);
  }
  if (uVar1 != 0) {
    return param_1;
  }
  return (param_1 & 0xffffffdf) - 7;
}


