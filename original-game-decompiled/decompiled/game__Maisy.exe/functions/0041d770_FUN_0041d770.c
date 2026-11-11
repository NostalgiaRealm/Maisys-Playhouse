
/* ==== FUN_0041d770 @ 0041d770 ==== 
 * signature: undefined1 __thiscall FUN_0041d770(void * this, undefined4 * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int * param_5)
 * body: 0041d770-0041d820
 */

undefined1 __thiscall
FUN_0041d770(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            ,int *param_5)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_14;
  short local_10;
  short sStack_e;
  undefined4 local_c;
  short local_8;
  short sStack_6;
  
  iVar2 = *(int *)this;
  (**(code **)(iVar2 + 0x114))();
  if (*(char *)((int)this + 0x116) == '\0') {
    local_14._2_2_ = (short)((uint)*(undefined4 *)((int)this + 0xb8) >> 0x10);
    sVar1 = local_14._2_2_;
    local_14._0_2_ = (short)*(undefined4 *)((int)this + 0xb8);
    local_10 = (short)*(undefined4 *)((int)this + 0xbc);
    local_10 = local_10 - (short)local_14;
    sStack_e = (short)((uint)*(undefined4 *)((int)this + 0xbc) >> 0x10);
    local_14 = 0;
    _local_10 = CONCAT22(sStack_e - sVar1,local_10);
    local_c._2_2_ = (short)((uint)*param_1 >> 0x10);
    local_c._0_2_ = (short)*param_1;
    sVar1 = (short)local_c;
    sStack_6 = (short)((uint)param_1[1] >> 0x10);
    sStack_6 = sStack_6 - local_c._2_2_;
    local_8 = (short)param_1[1];
    local_c = 0;
    _local_8 = CONCAT22(sStack_6,local_8 - sVar1);
    (**(code **)(iVar2 + 0x210))(&local_c,&local_14,param_3,param_4,(int)this + 0x114);
  }
  piVar3 = (int *)((int)this + 0x114);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_5 = *piVar3;
    piVar3 = piVar3 + 1;
    param_5 = param_5 + 1;
  }
  return *(undefined1 *)((int)this + 0x116);
}


