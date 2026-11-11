
/* ==== setSBCS @ 1401b840 ==== 
 * signature: undefined __cdecl setSBCS(void)
 * body: 1401b840-1401b86b
 * note: Library Function - Single Match  _setSBCS  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _setSBCS
   
   Library: Visual Studio 1998 Release */

void __cdecl setSBCS(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_14027350;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_14027460 = 0;
  DAT_14027454 = 0;
  DAT_14027458 = 0;
  DAT_14027464 = 0;
  DAT_14027468 = 0;
  return;
}


