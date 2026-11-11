
/* ==== siglookup @ 1401ec10 ==== 
 * signature: uint __cdecl siglookup(int param_1, uint param_2)
 * body: 1401ec10-1401ec40
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
  } while (uVar1 < param_2 + DAT_1402818c * 0xc);
  return -(uint)(*(int *)(uVar1 + 4) == param_1) & uVar1;
}


