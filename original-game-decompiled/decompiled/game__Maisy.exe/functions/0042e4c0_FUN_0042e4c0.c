
/* ==== FUN_0042e4c0 @ 0042e4c0 ==== 
 * signature: undefined __thiscall FUN_0042e4c0(void * this, int * param_1, undefined4 param_2, undefined4 * param_3)
 * body: 0042e4c0-0042e58a
 */

void __thiscall FUN_0042e4c0(void *this,int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  void *this_00;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  char local_11c [256];
  undefined1 local_1c [6];
  undefined2 uStack_16;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 uStack_a;
  short local_6;
  
  iVar1 = *(int *)this;
  iVar2 = (int)*(short *)(param_3 + 1);
  this_00 = (void *)(**(code **)(iVar1 + 0x10))();
  FUN_00466600(this_00,iVar2);
  if (*(short *)(param_3 + 1) == 0) {
    FUN_00486dd0(param_1,(undefined4 *)(local_1c + 2),param_3,0x16);
    uVar5 = CONCAT22(uStack_12,local_14);
    uVar4 = CONCAT22(uStack_a,local_c);
  }
  else {
    FUN_00486dd0(param_1,(undefined4 *)local_1c,param_3,0x18);
    if (*(LPVOID *)((int)this + 0x2e) != (LPVOID)0x0) {
      FUN_0043f6d0(*(LPVOID *)((int)this + 0x2e));
    }
    *(undefined4 *)((int)this + 0x2e) = 0;
    if (local_6 != 0) {
      FUN_00486d60(param_1,local_11c,(int)local_6);
      pcVar3 = FUN_0043f650(local_11c);
      *(char **)((int)this + 0x2e) = pcVar3;
    }
    uVar5 = CONCAT22(local_14,uStack_16);
    uVar4 = CONCAT22(local_c,uStack_e);
  }
  *(undefined4 *)((int)this + 0xc) = uVar4;
  (**(code **)(iVar1 + 0x124))(uVar5,1);
  if ((uVar5 & 1) != 0) {
    FUN_0046dd60(this,param_1,param_2);
  }
  (**(code **)(iVar1 + 0x1c))(0);
  return;
}


