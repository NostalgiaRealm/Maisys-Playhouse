
/* ==== FUN_004aa6ca @ 004aa6ca ==== 
 * signature: undefined __thiscall FUN_004aa6ca(void * this, undefined4 param_1)
 * body: 004aa6ca-004aa6f1
 */

void __thiscall FUN_004aa6ca(void *this,undefined4 param_1)

{
  int iVar1;
  int unaff_retaddr;
  HWND hWnd;
  
  iVar1 = (**(code **)(*(int *)this + 0x6c))(param_1);
  if (iVar1 == 0) {
    hWnd = *(HWND *)((int)this + 0x1c);
  }
  else {
    unaff_retaddr = 2;
    hWnd = *(HWND *)(iVar1 + 0x1c);
  }
  GetScrollPos(hWnd,unaff_retaddr);
  return;
}


