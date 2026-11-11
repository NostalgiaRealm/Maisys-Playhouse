
/* ==== FUN_0040d1c0 @ 0040d1c0 ==== 
 * signature: undefined __stdcall FUN_0040d1c0(void)
 * body: 0040d1c0-0040d1f1
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d1c0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004135d8;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_004137e0 = 0;
  _DAT_00413ce0 = 0;
  DAT_004137e4 = 0;
  _DAT_004137e8 = 0;
  _DAT_004137ec = 0;
  _DAT_004137f0 = 0;
  return;
}


