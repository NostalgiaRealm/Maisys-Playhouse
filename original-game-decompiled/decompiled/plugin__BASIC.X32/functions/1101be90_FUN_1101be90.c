
/* ==== FUN_1101be90 @ 1101be90 ==== 
 * signature: ulonglong __fastcall FUN_1101be90(undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined2 * param_4, short * param_5, short * param_6, int param_7)
 * body: 1101be90-1101bf68
 */

ulonglong __fastcall
FUN_1101be90(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined2 *param_4,
            short *param_5,short *param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar4;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  ulonglong uVar5;
  
  if (param_7 == 0x131) {
    uVar3 = FUN_11019b70(param_5);
    uVar5 = CONCAT44(extraout_EDX,uVar3);
    if ((short)uVar3 == 0) {
      uVar3 = FUN_11019b70(param_6);
      uVar5 = CONCAT44(extraout_EDX_00,uVar3);
      if ((short)uVar3 == 0) {
        *param_4 = 0x16;
        *(double *)(param_4 + 1) = *(double *)(param_5 + 1) * 0.017453292519943295;
        uVar1 = *(undefined4 *)(param_6 + 3);
        *(undefined4 *)(param_4 + 7) = uVar1;
        uVar5 = (ulonglong)CONCAT42(param_4,(short)((uint)uVar1 >> 0x10)) << 0x10;
        *(undefined4 *)(param_4 + 5) = *(undefined4 *)(param_6 + 1);
      }
    }
  }
  else {
    uVar5 = FUN_11019c00(param_1,param_2,param_3,param_5);
    if ((short)uVar5 == 0) {
      uVar5 = FUN_11019c00(extraout_ECX,(int)(uVar5 >> 0x20),param_3,param_6);
      if ((short)uVar5 == 0) {
        uVar1 = *(undefined4 *)(param_5 + 1);
        uVar2 = *(undefined4 *)(param_6 + 1);
        uVar4 = (undefined2)((uint)uVar1 >> 0x10);
        if (param_7 == 0x12f) {
          *param_4 = 0x10;
          param_4[1] = (short)uVar1;
          param_4[2] = (short)uVar2;
          return (ulonglong)CONCAT42(param_4,uVar4) << 0x10;
        }
        if (param_7 != 0x130) {
          return CONCAT44((int)(uVar5 >> 0x20),CONCAT22(uVar4,0xffff));
        }
        *param_4 = 0x11;
        *(undefined4 *)(param_4 + 1) = uVar1;
        *(undefined4 *)(param_4 + 3) = uVar2;
        return (ulonglong)CONCAT42(param_4,uVar4) << 0x10;
      }
    }
  }
  return uVar5;
}


