
/* ==== FUN_00451cb0 @ 00451cb0 ==== 
 * signature: undefined __fastcall FUN_00451cb0(int param_1)
 * body: 00451cb0-00451cff
 */

void __fastcall FUN_00451cb0(int param_1)

{
  int iVar1;
  
  FUN_0040fa70(DAT_004d99a8,param_1);
  if ((DAT_004dc574 != 0) && (iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x82), iVar1 != 0)) {
    iVar1 = FUN_00409590(iVar1);
    if (iVar1 != 0) {
      iVar1 = FUN_00409590(*(int *)(*(int *)(param_1 + 0x50) + 0x82));
      if (*(int *)(iVar1 + 0x26) == DAT_004dc574) {
        *(undefined1 *)(param_1 + 0x84) = 1;
      }
    }
  }
  return;
}


