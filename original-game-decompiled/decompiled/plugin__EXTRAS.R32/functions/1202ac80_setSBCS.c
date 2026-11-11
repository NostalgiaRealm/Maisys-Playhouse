
/* ==== setSBCS @ 1202ac80 ==== 
 * signature: undefined __cdecl setSBCS(void)
 * body: 1202ac80-1202acab
 * note: Library Function - Single Match  _setSBCS  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 1998 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_12037f08;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_12038018 = 0;
  DAT_1203800c = 0;
  DAT_12038010 = 0;
  DAT_1203801c = 0;
  DAT_12038020 = 0;
  return;
}


