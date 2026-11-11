
/* ==== setSBCS @ 004925d0 ==== 
 * signature: undefined __cdecl setSBCS(void)
 * body: 004925d0-004925fb
 * note: Library Function - Single Match  _setSBCS  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 1998 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004de1f0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_004de300 = 0;
  DAT_004de2f4 = 0;
  DAT_004de2f8 = 0;
  DAT_004de304 = 0;
  DAT_004de308 = 0;
  return;
}


