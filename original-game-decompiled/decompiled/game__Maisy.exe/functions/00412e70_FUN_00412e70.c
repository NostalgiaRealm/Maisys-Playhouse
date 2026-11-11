
/* ==== FUN_00412e70 @ 00412e70 ==== 
 * signature: uint __fastcall FUN_00412e70(uint param_1)
 * body: 00412e70-00412e8c
 */

uint __fastcall FUN_00412e70(uint param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x22) != 1)) {
    uVar1 = -(uint)(*(short *)(param_1 + 0x22) == 1) & param_1;
  }
  return uVar1;
}


