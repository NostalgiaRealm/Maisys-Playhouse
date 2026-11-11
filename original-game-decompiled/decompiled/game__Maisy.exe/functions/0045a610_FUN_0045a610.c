
/* ==== FUN_0045a610 @ 0045a610 ==== 
 * signature: undefined4 __thiscall FUN_0045a610(void * this, int param_1, short * param_2)
 * body: 0045a610-0045a6c5
 */

undefined4 __thiscall FUN_0045a610(void *this,int param_1,short *param_2)

{
  uint3 extraout_var;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  short local_34;
  int local_32;
  
  FUN_004142b0();
  uVar1 = (uint)extraout_var << 8;
  if (param_1 != 0x12) {
    if (param_1 != 0x13) {
      return (uint)extraout_var << 8;
    }
    if (*param_2 != 0) {
      psVar4 = &local_34;
      for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)psVar4 = *(undefined4 *)param_2;
        param_2 = param_2 + 2;
        psVar4 = psVar4 + 2;
      }
      *psVar4 = *param_2;
      uVar1 = FUN_00414340(this,&local_34,1);
      if ((char)uVar1 != '\0') {
        uVar2 = FUN_0045a220(this,local_32);
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
    }
    return uVar1 & 0xffffff00;
  }
  if (*param_2 != 0) {
    psVar4 = &local_34;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)psVar4 = *(undefined4 *)param_2;
      param_2 = param_2 + 2;
      psVar4 = psVar4 + 2;
    }
    *psVar4 = *param_2;
    uVar1 = FUN_00414340(this,&local_34,1);
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_0043ed40(local_32);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


