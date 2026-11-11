
/* ==== setSBCS @ 1102aa90 ==== 
 * signature: undefined __cdecl setSBCS(void)
 * body: 1102aa90-1102aabb
 * note: Library Function - Single Match  _setSBCS  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 1998 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_11036630;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_11036740 = 0;
  DAT_11036734 = 0;
  DAT_11036738 = 0;
  DAT_11036744 = 0;
  DAT_11036748 = 0;
  return;
}


