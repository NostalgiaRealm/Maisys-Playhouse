
/* ==== FUN_00486dd0 @ 00486dd0 ==== 
 * signature: undefined __thiscall FUN_00486dd0(void * this, undefined4 * param_1, undefined4 * param_2, uint param_3)
 * body: 00486dd0-00486e2d
 */

void __thiscall FUN_00486dd0(void *this,undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  if ((0 < (int)(param_3 - 0xe)) && (param_3 <= *(uint *)((int)param_1 + 10))) {
    FUN_00486d60(this,(int)param_1 + 0xe,param_3 - 0xe);
    return;
  }
  iVar1 = *(int *)((int)param_1 + 10) + -0xe;
  if (iVar1 != 0) {
    FUN_00486d60(this,(int)param_1 + 0xe,iVar1);
  }
  return;
}


