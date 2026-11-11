
/* ==== xcptlookup @ 1102b4b0 ==== 
 * signature: uint __cdecl xcptlookup(int param_1, int * param_2)
 * body: 1102b4b0-1102b4de
 * note: Library Function - Single Match  _xcptlookup  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _xcptlookup
   
   Library: Visual Studio 1998 Release */

uint __cdecl xcptlookup(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  do {
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 3;
  } while (piVar1 < param_2 + DAT_11036a24 * 3);
  return -(uint)(*piVar1 == param_1) & (uint)piVar1;
}


