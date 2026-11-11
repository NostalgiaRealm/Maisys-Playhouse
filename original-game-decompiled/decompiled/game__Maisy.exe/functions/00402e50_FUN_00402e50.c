
/* ==== FUN_00402e50 @ 00402e50 ==== 
 * signature: undefined __thiscall FUN_00402e50(void * this, int param_1, char param_2, undefined4 * param_3)
 * body: 00402e50-00402f4d
 */

void __thiscall FUN_00402e50(void *this,int param_1,char param_2,undefined4 *param_3)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  puVar3 = (undefined4 *)FUN_0045aa40(*(void **)((int)this + 0x2a),&local_10);
  local_10 = *puVar3;
  FUN_0043c710();
  sVar1 = (short)param_1;
  if (-1 < (short)param_1) {
    sVar1 = 0;
  }
  sVar2 = param_1._2_2_;
  if (-1 < param_1) {
    sVar2 = 0;
  }
  local_18 = CONCAT22(sVar2 + local_a,sVar1 + local_c);
  if ((short)param_1 < 0) {
    iVar4 = (int)(short)param_1;
  }
  else {
    iVar4 = (short)param_1 * 2;
  }
  iVar6 = (int)local_8 - (int)local_c;
  if ((int)local_8 - (int)local_c <= (short)local_10 + iVar4) {
    iVar6 = (short)local_10 + iVar4;
  }
  if (param_1 < 0) {
    iVar4 = (int)param_1._2_2_;
  }
  else {
    iVar4 = param_1._2_2_ * 2;
  }
  iVar5 = (int)local_6 - (int)local_a;
  if ((int)local_6 - (int)local_a <= local_10._2_2_ + iVar4) {
    iVar5 = local_10._2_2_ + iVar4;
  }
  local_14 = CONCAT22((short)iVar5 + local_a,(short)iVar6 + local_c);
  FUN_00410790(*(int *)((int)this + 0x8e));
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_18;
    param_3[1] = local_14;
  }
  if (param_2 != '\0') {
    FUN_004105b0(*(int *)((int)this + 0x8e));
  }
  return;
}


