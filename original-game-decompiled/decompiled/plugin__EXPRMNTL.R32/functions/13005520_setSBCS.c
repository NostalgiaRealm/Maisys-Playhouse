
/* ==== setSBCS @ 13005520 ==== 
 * signature: undefined __cdecl setSBCS(void)
 * body: 13005520-1300554b
 * note: Library Function - Single Match  _setSBCS  Library: Visual Studio 1998 Release
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 1998 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_130083b0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_130084c0 = 0;
  DAT_130084b4 = 0;
  _DAT_130084b8 = 0;
  DAT_130084c4 = 0;
  DAT_130084c8 = 0;
  return;
}


