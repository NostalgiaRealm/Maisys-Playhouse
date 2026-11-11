
/* ==== FUN_00441690 @ 00441690 ==== 
 * signature: undefined __thiscall FUN_00441690(void * this, uint param_1, uint param_2)
 * body: 00441690-0044175a
 */

void __thiscall FUN_00441690(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint local_14 [4];
  
  *(undefined1 *)((int)this + 0xb0) = 0;
  FUN_004414c0(this,(int)local_14);
  local_14[0] = param_1;
  local_14[1] = 0;
  FUN_00440140((int)this);
  local_14[0] = param_2;
  local_14[1] = 0;
  FUN_00440140((int)this);
  FUN_00440140((int)this);
  uVar1 = FUN_004414c0(this,0);
  if (uVar1 < param_1) {
LAB_00441707:
    FUN_00441460(this,param_1);
  }
  else {
    uVar1 = FUN_004414c0(this,0);
    if (param_1 + param_2 < uVar1) goto LAB_00441707;
  }
  FUN_00440140((int)this);
  *(undefined1 *)((int)this + 0xb0) = 1;
  if (param_2 != 0) {
    uVar1 = FUN_00441a90(this);
    if (param_2 + param_1 <= uVar1) {
      *(uint *)((int)this + 0xb2) = param_2 + param_1;
      goto LAB_0044174c;
    }
  }
  uVar2 = FUN_00441a90(this);
  *(undefined4 *)((int)this + 0xb2) = uVar2;
LAB_0044174c:
  *(uint *)((int)this + 0xb6) = param_1;
  return;
}


