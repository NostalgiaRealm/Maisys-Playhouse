
/* ==== FUN_004137b0 @ 004137b0 ==== 
 * signature: undefined __thiscall FUN_004137b0(void * this, undefined4 param_1)
 * body: 004137b0-004137d1
 */

void __thiscall FUN_004137b0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x12) != 0) {
    iVar1 = *(int *)this;
    uVar2 = (**(code **)(iVar1 + 0x58))(param_1);
    (**(code **)(iVar1 + 0x50))(uVar2);
  }
  return;
}


