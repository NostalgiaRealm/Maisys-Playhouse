
/* ==== FUN_100181a0 @ 100181a0 ==== 
 * signature: undefined __cdecl FUN_100181a0(uint param_1)
 * body: 100181a0-10018212
 */

void __cdecl FUN_100181a0(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10018230();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10022340;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10018220();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10022344);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (puVar2 < &DAT_100224a8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10018220();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10018220();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10018220();
  *pDVar1 = 0x16;
  return;
}


