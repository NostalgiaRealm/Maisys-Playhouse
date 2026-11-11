
/* ==== FUN_00474f90 @ 00474f90 ==== 
 * signature: HWND __thiscall FUN_00474f90(void * this, undefined4 param_1)
 * body: 00474f90-00474fff
 */

HWND __thiscall FUN_00474f90(void *this,undefined4 param_1)

{
  int iVar1;
  HWND hWnd;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_104 [256];
  
  if (DAT_004d99b8 == '\0') {
    return (HWND)0x0;
  }
  (**(code **)(*(int *)this + 0x1d0))(local_104,1,1);
  uVar3 = 0;
  uVar2 = 0x48004002;
  iVar1 = FUN_004bafca();
  hWnd = (HWND)(*DAT_004e01bc)(param_1,*(undefined4 *)(iVar1 + 8),uVar2,uVar3);
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x499,0,(LPARAM)local_104);
  }
  return hWnd;
}


