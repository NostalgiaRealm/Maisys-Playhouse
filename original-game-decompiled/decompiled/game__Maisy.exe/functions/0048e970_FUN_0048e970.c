
/* ==== FUN_0048e970 @ 0048e970 ==== 
 * signature: undefined4 __cdecl FUN_0048e970(undefined4 param_1)
 * body: 0048e970-0048e9fb
 */

undefined4 __cdecl FUN_0048e970(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  LPVOID pvVar3;
  
  FUN_00491d10();
  uVar1 = FUN_00492660(DAT_004e67a4);
  if (uVar1 < (uint)((int)DAT_004e67a0 + (4 - (int)DAT_004e67a4))) {
    iVar2 = FUN_00492660(DAT_004e67a4);
    pvVar3 = FUN_00494790(DAT_004e67a4,iVar2 + 0x10);
    if (pvVar3 == (LPVOID)0x0) {
      FUN_00491d20();
      return 0;
    }
    DAT_004e67a0 = (undefined4 *)
                   (((int)DAT_004e67a0 - (int)DAT_004e67a4 & 0xfffffffcU) + (int)pvVar3);
    DAT_004e67a4 = pvVar3;
  }
  *DAT_004e67a0 = param_1;
  DAT_004e67a0 = DAT_004e67a0 + 1;
  FUN_00491d20();
  return param_1;
}


