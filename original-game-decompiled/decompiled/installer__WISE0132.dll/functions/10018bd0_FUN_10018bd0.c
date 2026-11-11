
/* ==== FUN_10018bd0 @ 10018bd0 ==== 
 * signature: undefined __stdcall FUN_10018bd0(void)
 * body: 10018bd0-10018c01
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018bd0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10023528;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10023730 = 0;
  _DAT_10025204 = 0;
  DAT_10023734 = 0;
  _DAT_10023738 = 0;
  _DAT_1002373c = 0;
  _DAT_10023740 = 0;
  return;
}


