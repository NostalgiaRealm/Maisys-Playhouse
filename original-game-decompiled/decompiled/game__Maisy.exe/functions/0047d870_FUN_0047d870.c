
/* ==== FUN_0047d870 @ 0047d870 ==== 
 * signature: undefined __thiscall FUN_0047d870(void * this, int * param_1, int param_2)
 * body: 0047d870-0047d8cd
 */

void __thiscall FUN_0047d870(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  if (*(int *)(param_2 + 0x24) != 0) {
    (**(code **)(*param_1 + 0x144))(&local_8);
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    uVar1 = FUN_00486c30(param_1);
    uVar2 = (**(code **)(*param_1 + 0x110))(uVar1,local_8,uVar2);
    (**(code **)(*(int *)this + 0x138))(uVar2);
    FUN_00486d40(param_1,*(undefined4 *)(param_2 + 0x24));
  }
  return;
}


