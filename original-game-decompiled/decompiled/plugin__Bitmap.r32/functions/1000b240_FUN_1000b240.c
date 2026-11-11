
/* ==== FUN_1000b240 @ 1000b240 ==== 
 * signature: undefined __stdcall FUN_1000b240(void)
 * body: 1000b240-1000b26c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000b240(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10017120;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10017224 = 0;
  _DAT_10017228 = 0;
  _DAT_10017230 = 0;
  _DAT_10017234 = 0;
  _DAT_10017238 = 0;
  return;
}


