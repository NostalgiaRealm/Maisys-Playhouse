
/* ==== __dosmaperr @ 0048f950 ==== 
 * signature: void __cdecl __dosmaperr(ulong param_1)
 * body: 0048f950-0048f9c2
 * note: Library Function - Single Match  __dosmaperr  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __dosmaperr
   
   Library: Visual Studio 1998 Release */

void __cdecl __dosmaperr(ulong param_1)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = FUN_0048f9e0();
  iVar3 = 0;
  *puVar1 = param_1;
  puVar1 = &DAT_004ddef0;
  do {
    if (*puVar1 == param_1) {
      piVar2 = FUN_0048f9d0();
      *piVar2 = *(int *)(iVar3 * 8 + 0x4ddef4);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar1 < &DAT_004de058);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    piVar2 = FUN_0048f9d0();
    *piVar2 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    piVar2 = FUN_0048f9d0();
    *piVar2 = 8;
    return;
  }
  piVar2 = FUN_0048f9d0();
  *piVar2 = 0x16;
  return;
}


