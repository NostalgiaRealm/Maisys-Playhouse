
/* ==== FUN_004b8a01 @ 004b8a01 ==== 
 * signature: undefined __thiscall FUN_004b8a01(void * this, undefined4 param_1)
 * body: 004b8a01-004b8a37
 */

void __thiscall FUN_004b8a01(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(byte *)((int)this + 0x24) & 0x20) == 0) {
    uVar2 = param_1;
  }
  iVar1 = CWnd::IsWindowEnabled(this);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  (**(code **)(*(int *)this + 0xa4))(0x86,uVar2,0);
  return;
}


