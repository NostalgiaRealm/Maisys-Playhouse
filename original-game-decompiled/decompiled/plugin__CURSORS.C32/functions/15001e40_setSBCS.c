
/* ==== setSBCS @ 15001e40 ==== 
 * signature: undefined __cdecl setSBCS(void)
 * body: 15001e40-15001e6b
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
  
  puVar2 = &DAT_150050c0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_150051d0 = 0;
  DAT_150051c4 = 0;
  _DAT_150051c8 = 0;
  DAT_150051d4 = 0;
  DAT_150051d8 = 0;
  return;
}


