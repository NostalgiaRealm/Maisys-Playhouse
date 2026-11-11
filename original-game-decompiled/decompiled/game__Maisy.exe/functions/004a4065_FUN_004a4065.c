
/* ==== FUN_004a4065 @ 004a4065 ==== 
 * signature: undefined4 __thiscall FUN_004a4065(void * this, undefined4 param_1, undefined4 * param_2, undefined4 * param_3)
 * body: 004a4065-004a4148
 */

undefined4 __thiscall
FUN_004a4065(void *this,undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004aa281(this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = param_2[2];
    if (iVar1 == -0x25f) {
      (**(code **)(*(int *)this + 0xec))();
    }
    else if (iVar1 == -0x25e) {
      uVar3 = (**(code **)(*(int *)this + 0xd8))();
      *param_3 = uVar3;
    }
    else if (iVar1 == -0x25d) {
      LVar2 = SendMessageA(*(HWND *)((int)this + 0x1c),0x111,0xe146,0);
      if (LVar2 == 0) {
        SendMessageA(*(HWND *)((int)this + 0x1c),0x365,0,0);
      }
    }
    else if (iVar1 == -0x25c) {
      uVar3 = (**(code **)(*(int *)this + 0xd4))(param_2[4]);
      *param_3 = uVar3;
    }
    else if (iVar1 == -0x25b) {
      (**(code **)(*(int *)this + 0xe8))();
    }
    else if (iVar1 == -0x25a) {
      (**(code **)(*(int *)this + 0xe4))();
    }
    else {
      if (iVar1 != -0x259) {
        return 0;
      }
      (**(code **)(*(int *)this + 0xe0))();
    }
  }
  return 1;
}


