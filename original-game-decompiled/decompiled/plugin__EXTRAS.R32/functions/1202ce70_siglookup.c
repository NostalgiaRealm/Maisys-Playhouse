
/* ==== siglookup @ 1202ce70 ==== 
 * signature: uint __cdecl siglookup(int param_1, uint param_2)
 * body: 1202ce70-1202cea0
 * note: Library Function - Single Match  _siglookup  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _siglookup
   
   Library: Visual Studio 1998 Release */

uint __cdecl siglookup(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  do {
    if (*(int *)(uVar1 + 4) == param_1) break;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < param_2 + DAT_1203854c * 0xc);
  return -(uint)(*(int *)(uVar1 + 4) == param_1) & uVar1;
}


