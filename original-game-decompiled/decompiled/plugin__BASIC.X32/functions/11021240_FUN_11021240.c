
/* ==== FUN_11021240 @ 11021240 ==== 
 * signature: undefined __fastcall FUN_11021240(undefined4 param_1, undefined4 param_2, undefined4 * param_3, int param_4, short * param_5, short * param_6, short * param_7, undefined2 * param_8)
 * body: 11021240-11021316
 */

void __fastcall
FUN_11021240(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,short *param_5,
            short *param_6,short *param_7,undefined2 *param_8)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  sVar2 = *param_6;
  sVar1 = *param_7;
  if (sVar1 != sVar2) {
    if ((sVar2 == 0) && ((sVar1 == 3 || (sVar1 == 0x19)))) {
      param_6[1] = 0;
      param_6[2] = 0;
      *param_6 = sVar1;
    }
    else {
      if (sVar1 == 0) {
        if ((sVar2 == 3) || (sVar2 == 0x19)) {
          param_7[1] = 0;
          param_7[2] = 0;
          *param_7 = sVar2;
          goto LAB_11021272;
        }
      }
      else if (sVar2 == 0x19) goto LAB_11021272;
      if ((sVar1 != 0x19) &&
         (uVar4 = FUN_11021120(CONCAT22((short)((uint)param_1 >> 0x10),sVar1),param_2,param_3,
                               param_7,sVar2), (short)uVar4 != 0)) {
        return;
      }
    }
  }
LAB_11021272:
  sVar2 = *param_6;
  uVar3 = FUN_11021320(sVar2);
  uVar4 = FUN_11020d50(param_3,param_5,sVar2,(short)uVar3);
  sVar2 = (short)uVar4;
  uVar3 = extraout_EDX;
  if (sVar2 == 0) {
    uVar4 = FUN_11020f90(param_3,extraout_EDX,param_3,param_5,param_6,param_4,param_8);
    sVar2 = (short)uVar4;
    uVar3 = extraout_EDX_00;
  }
  if (sVar2 == 0) {
    FUN_11020f90(param_3,uVar3,param_3,param_5,param_7,param_4,param_8);
  }
  return;
}


