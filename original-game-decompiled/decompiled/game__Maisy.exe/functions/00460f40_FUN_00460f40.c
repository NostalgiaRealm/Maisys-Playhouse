
/* ==== FUN_00460f40 @ 00460f40 ==== 
 * signature: undefined __thiscall FUN_00460f40(void * this, undefined4 param_1)
 * body: 00460f40-00460fa2
 */

void __thiscall FUN_00460f40(void *this,undefined4 param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined2 local_10;
  undefined4 *local_e;
  undefined4 local_8;
  
  local_e = &param_1;
  local_10 = 1;
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x290))(&local_10);
  sVar2 = (short)param_1 - *(short *)((int)this + 0xa2);
  sVar3 = param_1._2_2_ - *(short *)((int)this + 0xa4);
  local_8 = CONCAT22(sVar3,sVar2);
  if ((sVar2 != 0) || (sVar3 != 0)) {
    (**(code **)(iVar1 + 0x3f4))(local_8);
  }
  return;
}


