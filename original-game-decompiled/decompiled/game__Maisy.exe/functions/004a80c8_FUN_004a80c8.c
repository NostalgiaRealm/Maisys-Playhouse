
/* ==== FUN_004a80c8 @ 004a80c8 ==== 
 * signature: undefined __thiscall FUN_004a80c8(void * this, LPMSG param_1)
 * body: 004a80c8-004a80f5
 */

void __thiscall FUN_004a80c8(void *this,LPMSG param_1)

{
  int iVar1;
  
  if ((*(byte *)((int)this + 0x25) & 1) == 0) {
    IsDialogMessageA(*(HWND *)((int)this + 0x1c),param_1);
  }
  else {
    iVar1 = FUN_004bafe6();
    (**(code **)(**(int **)(iVar1 + 8) + 0x1c))(this,param_1);
  }
  return;
}


