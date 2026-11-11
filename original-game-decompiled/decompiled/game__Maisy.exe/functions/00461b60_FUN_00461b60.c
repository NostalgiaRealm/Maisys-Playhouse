
/* ==== FUN_00461b60 @ 00461b60 ==== 
 * signature: undefined __thiscall FUN_00461b60(void * this, short param_1)
 * body: 00461b60-00461c80
 */

void __thiscall FUN_00461b60(void *this,short param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int **)((int)this + 0x52) == (int *)0x0) {
    local_10 = *(undefined4 *)((int)this + 0xbe);
    local_14 = *(undefined4 *)((int)this + 0xba);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x52) + 0x1dc))(&local_14);
  }
  if (param_1 == 0) {
    iVar1 = *(int *)this;
    (**(code **)(iVar1 + 0x39c))(&local_14);
    (**(code **)(iVar1 + 0x3a4))(&local_14);
    return;
  }
  if (param_1 == 1) {
    iVar1 = *(int *)this;
    (**(code **)(iVar1 + 0x3a0))(&local_c,0);
    local_8 = CONCAT22((local_c._2_2_ - local_14._2_2_) + local_10._2_2_,
                       ((short)local_c - (short)local_14) + (short)local_10);
    (**(code **)(iVar1 + 0x39c))(&local_c);
    (**(code **)(iVar1 + 0x3a4))(&local_c);
    return;
  }
  if (param_1 != 2) {
    return;
  }
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x398))(&local_c,0);
  if (*(int *)((int)this + 0x52) == 0) {
    local_14 = local_c;
    local_10 = local_8;
  }
  local_8 = CONCAT22((local_c._2_2_ - local_14._2_2_) + local_10._2_2_,
                     ((short)local_c - (short)local_14) + (short)local_10);
  (**(code **)(iVar1 + 0x39c))(&local_c);
  (**(code **)(iVar1 + 0x3a4))(&local_c);
  return;
}


