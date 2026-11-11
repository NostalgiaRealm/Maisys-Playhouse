
/* ==== FUN_00474750 @ 00474750 ==== 
 * signature: undefined4 __thiscall FUN_00474750(void * this, int param_1, short * param_2)
 * body: 00474750-004747bb
 */

undefined4 __thiscall FUN_00474750(void *this,int param_1,short *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  short local_34 [24];
  
  uVar1 = FUN_0046b690(this,param_1,param_2);
  if (param_1 != 0xd) {
    return uVar1 & 0xffffff00;
  }
  if (*param_2 != 0) {
    psVar4 = local_34;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)psVar4 = *(undefined4 *)param_2;
      param_2 = param_2 + 2;
      psVar4 = psVar4 + 2;
    }
    *psVar4 = *param_2;
    uVar1 = FUN_00414340(this,local_34,1);
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_00473660(this,local_34[1]);
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


