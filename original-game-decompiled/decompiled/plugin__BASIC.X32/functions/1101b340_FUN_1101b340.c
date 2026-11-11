
/* ==== FUN_1101b340 @ 1101b340 ==== 
 * signature: undefined4 __fastcall FUN_1101b340(undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined2 * param_4, short * param_5, short * param_6)
 * body: 1101b340-1101b39e
 */

undefined4 __fastcall
FUN_1101b340(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined2 *param_4,
            short *param_5,short *param_6)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 extraout_ECX;
  ulonglong uVar4;
  
  uVar4 = FUN_11019c00(param_1,param_2,param_3,param_5);
  uVar4 = FUN_11019c00(extraout_ECX,(int)(uVar4 >> 0x20),param_3,param_6);
  uVar3 = (undefined2)(uVar4 >> 0x10);
  if ((*param_5 == 1) && (*param_6 == 1)) {
    if (*(int *)(param_6 + 1) == 0) {
      return CONCAT22(uVar3,0xffee);
    }
    *param_4 = 1;
    iVar1 = *(int *)(param_5 + 1);
    iVar2 = *(int *)(param_6 + 1);
    *(int *)(param_4 + 1) = iVar1 / iVar2;
    return iVar1 / iVar2 & 0xffff0000;
  }
  return CONCAT22(uVar3,0xffef);
}


