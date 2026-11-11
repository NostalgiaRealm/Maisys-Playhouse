
/* ==== xcptlookup @ 1202c790 ==== 
 * signature: uint __cdecl xcptlookup(int param_1, int * param_2)
 * body: 1202c790-1202c7be
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
  } while (piVar1 < param_2 + DAT_1203854c * 3);
  return -(uint)(*piVar1 == param_1) & (uint)piVar1;
}


