
/* ==== FUN_0042b250 @ 0042b250 ==== 
 * signature: undefined __thiscall FUN_0042b250(void * this, short param_1)
 * body: 0042b250-0042b355
 */

void __thiscall FUN_0042b250(void *this,short param_1)

{
  int iVar1;
  code *pcVar2;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  iVar1 = *(int *)this;
  pcVar2 = *(code **)(iVar1 + 0x1f8);
  (*pcVar2)();
  if (*(int **)((int)this + 0x3a) == (int *)0x0) {
    (**(code **)(iVar1 + 700))(&local_c);
    local_8 = (*(short *)((int)this + 0x5c) - *(short *)((int)this + 0x58)) + local_c;
    local_6 = (*(short *)((int)this + 0x5e) - *(short *)((int)this + 0x5a)) + local_a;
    (**(code **)(iVar1 + 0x2ac))(&local_c,0);
    (**(code **)(iVar1 + 0x2b0))(&local_c,0);
    (*pcVar2)();
    return;
  }
  (**(code **)(**(int **)((int)this + 0x3a) + 0x1dc))(&local_14);
  if (param_1 == 0) {
    (**(code **)(iVar1 + 0x2ac))(&local_14,0);
    (**(code **)(iVar1 + 0x2b0))(&local_14,0);
    (*pcVar2)();
    return;
  }
  (**(code **)(iVar1 + 700))(&local_c);
  local_8 = (local_c - local_14) + local_10;
  local_6 = (local_a - local_12) + local_e;
  (**(code **)(iVar1 + 0x2ac))(&local_c,0);
  (**(code **)(iVar1 + 0x2b0))(&local_c,0);
  (*pcVar2)();
  return;
}


