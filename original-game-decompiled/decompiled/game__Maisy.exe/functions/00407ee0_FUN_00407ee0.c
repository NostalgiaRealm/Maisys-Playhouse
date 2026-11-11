
/* ==== FUN_00407ee0 @ 00407ee0 ==== 
 * signature: undefined __thiscall FUN_00407ee0(void * this, int * param_1)
 * body: 00407ee0-00407f92
 */

void __thiscall FUN_00407ee0(void *this,int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 local_58 [21];
  
  if (param_1 != (int *)0x0) {
    *(int **)((int)this + 0x92) = param_1;
    *(int **)((int)this + 0x9e) = param_1;
    iVar1 = *param_1;
    uVar2 = (**(code **)(iVar1 + 0x274))();
    *(undefined2 *)((int)this + 0x36) = uVar2;
    FUN_004106a0(*(int *)((int)this + 0x8e));
    FUN_00407ca0((int)this);
    (**(code **)(iVar1 + 0x268))(this);
    (**(code **)(iVar1 + 0x230))();
    FUN_004142c0(local_58,0x7d1,0,0,0);
    FUN_0046b730(param_1,(int)local_58);
    FUN_004142c0(local_58,0x65,0,param_1,0);
    FUN_0046b730(param_1,(int)local_58);
    return;
  }
  *(undefined4 *)((int)this + 0x9e) = 0;
  *(undefined2 *)((int)this + 0x36) = 0xffff;
  return;
}


