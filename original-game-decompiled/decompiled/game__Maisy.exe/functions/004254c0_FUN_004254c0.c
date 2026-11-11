
/* ==== FUN_004254c0 @ 004254c0 ==== 
 * signature: undefined __thiscall FUN_004254c0(void * this, int * param_1, short * param_2, short * param_3)
 * body: 004254c0-00425524
 */

void __thiscall FUN_004254c0(void *this,int *param_1,short *param_2,short *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined3 extraout_var;
  
  bVar1 = FUN_00437430(param_1,(int *)&DAT_004da0b0);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_0042ca70(this,param_1,param_2,param_3);
    return;
  }
  bVar2 = FUN_00425460((int)this);
  if (bVar2 != 0) {
    bVar2 = FUN_00425490((int)this);
    bVar3 = 0;
    if (bVar2 == 0) goto LAB_004254fc;
  }
  bVar3 = 1;
LAB_004254fc:
  FUN_00454c50(param_3,bVar3);
  return;
}


