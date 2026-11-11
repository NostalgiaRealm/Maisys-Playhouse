
/* ==== FUN_1000f4c0 @ 1000f4c0 ==== 
 * signature: undefined __cdecl FUN_1000f4c0(uint param_1)
 * body: 1000f4c0-1000f532
 */

void __cdecl FUN_1000f4c0(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000f550();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10016480;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000f540();
      *pDVar1 = *(DWORD *)(&DAT_10016484 + iVar3 * 8);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar2 < &DAT_100165e8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000f540();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000f540();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000f540();
  *pDVar1 = 0x16;
  return;
}


