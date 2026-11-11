
/* ==== FUN_0047a960 @ 0047a960 ==== 
 * signature: undefined __thiscall FUN_0047a960(void * this, int * param_1, short * param_2, undefined4 * param_3)
 * body: 0047a960-0047a9f6
 */

void __thiscall FUN_0047a960(void *this,int *param_1,short *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = (int)(short)DAT_004e1c40;
  iVar4 = (int)DAT_004e1c44._2_2_;
  iVar5 = (int)DAT_004e1c40._2_2_;
  uVar3 = (uint)DAT_004e1c4a;
  if (param_2 != (short *)0x0) {
    *param_2 = DAT_004e1c4a;
  }
  uVar1 = DAT_004e1c44;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = DAT_004e1c40;
    param_3[1] = uVar1;
  }
  if ((int)uVar3 < 0) {
    iVar4 = (((iVar4 - iVar5) + -1) * ((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) -
            uVar3 * iVar5) + *(int *)((int)this + 0x8a0);
  }
  else {
    iVar4 = *(int *)((int)this + 0x8a0) - uVar3 * iVar5;
  }
  *param_1 = iVar4 - iVar2;
  return;
}


