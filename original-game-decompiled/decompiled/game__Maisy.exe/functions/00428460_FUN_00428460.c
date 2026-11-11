
/* ==== FUN_00428460 @ 00428460 ==== 
 * signature: undefined __thiscall FUN_00428460(void * this, int * param_1, int param_2)
 * body: 00428460-00428527
 */

void __thiscall FUN_00428460(void *this,int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  if (*(int *)(param_2 + 0x4c) == 0) {
    *(undefined2 *)((int)this + 0xde) = 0;
  }
  else {
    if (*(LPVOID *)((int)this + 0xd6) != (LPVOID)0x0) {
      FUN_00434950(*(LPVOID *)((int)this + 0xd6));
      *(undefined4 *)((int)this + 0xd6) = 0;
    }
    iVar1 = FUN_00434920(DAT_004d99ac,*(SIZE_T *)(param_2 + 0x4c),0);
    *(int *)((int)this + 0xd6) = iVar1;
    *(undefined4 *)((int)this + 0xda) = *(undefined4 *)(param_2 + 0x4c);
    if (iVar1 == 0) {
      FUN_004a3538();
    }
    FUN_00486d60(param_1,*(undefined4 *)((int)this + 0xd6),*(undefined4 *)(param_2 + 0x4c));
  }
  if (*(int *)(param_2 + 0x52) != 0) {
    (**(code **)(*param_1 + 0x144))(&local_8);
    uVar3 = *(undefined4 *)(param_2 + 0x52);
    uVar2 = FUN_00486c30(param_1);
    uVar3 = (**(code **)(*param_1 + 0x110))(uVar2,local_8,uVar3);
    (**(code **)(*(int *)this + 0x138))(uVar3);
    FUN_00486d40(param_1,*(undefined4 *)(param_2 + 0x52));
  }
  return;
}


