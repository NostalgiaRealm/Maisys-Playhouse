
/* ==== FUN_0045c2a0 @ 0045c2a0 ==== 
 * signature: undefined __thiscall FUN_0045c2a0(void * this, int * param_1)
 * body: 0045c2a0-0045c398
 */

void __thiscall FUN_0045c2a0(void *this,int *param_1)

{
  uint uVar1;
  
  if ((*(byte *)((int)this + 5) & 8) != 0) {
    (**(code **)(*param_1 + 0x164))(1,1);
  }
  if ((*(byte *)((int)this + 9) & 8) != 0) {
    (**(code **)(*param_1 + 0x164))(0,1);
  }
  if ((*(byte *)((int)this + 0xd) & 8) != 0) {
    uVar1 = *(uint *)((int)param_1 + 0x26) & 0x800;
    (**(code **)(*param_1 + 0x164))(CONCAT31((int3)(uVar1 >> 8),uVar1 == 0),1);
  }
  if ((*(byte *)((int)this + 7) & 0x80) != 0) {
    (**(code **)(*param_1 + 0x144))(1);
  }
  if ((*(byte *)((int)this + 0xb) & 0x80) != 0) {
    (**(code **)(*param_1 + 0x144))(0);
  }
  if ((*(byte *)((int)this + 0xf) & 0x80) != 0) {
    uVar1 = *(uint *)((int)param_1 + 0x26) & 0x80000000;
    (**(code **)(*param_1 + 0x144))(CONCAT31((int3)(uVar1 >> 8),uVar1 == 0));
  }
  if ((*(byte *)((int)this + 7) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x120))(1);
  }
  if ((*(byte *)((int)this + 0xb) & 0x10) != 0) {
    (**(code **)(*param_1 + 0x120))(0);
  }
  if ((*(byte *)((int)this + 0xf) & 0x10) != 0) {
    uVar1 = *(uint *)((int)param_1 + 0x26) & 0x10000000;
    (**(code **)(*param_1 + 0x120))(CONCAT31((int3)(uVar1 >> 8),uVar1 == 0));
  }
  return;
}


