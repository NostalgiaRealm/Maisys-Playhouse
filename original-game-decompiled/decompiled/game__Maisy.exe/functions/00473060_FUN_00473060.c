
/* ==== FUN_00473060 @ 00473060 ==== 
 * signature: undefined __thiscall FUN_00473060(void * this, undefined4 param_1)
 * body: 00473060-00473090
 */

void __thiscall FUN_00473060(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  HMENU pHVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x44) == 0) {
    pHVar2 = GetMenu(*(HWND *)((int)this + 0x1c));
    uVar1 = FromHandle(pHVar2);
  }
  (**(code **)(*(int *)this + 0xf8))(param_1,uVar1);
  return;
}


