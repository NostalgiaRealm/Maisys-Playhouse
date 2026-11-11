
/* ==== FUN_004b6af1 @ 004b6af1 ==== 
 * signature: undefined __thiscall FUN_004b6af1(void * this, undefined4 param_1)
 * body: 004b6af1-004b6b3c
 */

void __thiscall FUN_004b6af1(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  HMENU pHVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x44) == 0) {
    pHVar2 = GetMenu(*(HWND *)((int)this + 0x1c));
    iVar3 = FromHandle(pHVar2);
    iVar4 = GetMenuItemCount(*(HMENU *)(iVar3 + 4));
    pHVar2 = GetSubMenu(*(HMENU *)(iVar3 + 4),iVar4 + -2);
    uVar1 = FromHandle(pHVar2);
  }
  (**(code **)(*(int *)this + 0xf8))(param_1,uVar1);
  return;
}


