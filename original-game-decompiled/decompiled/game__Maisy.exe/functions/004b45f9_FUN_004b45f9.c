
/* ==== FUN_004b45f9 @ 004b45f9 ==== 
 * signature: undefined __thiscall FUN_004b45f9(void * this, LPCSTR param_1, LPCSTR param_2, UINT param_3)
 * body: 004b45f9-004b4632
 */

void __thiscall FUN_004b45f9(void *this,LPCSTR param_1,LPCSTR param_2,UINT param_3)

{
  int iVar1;
  HWND hWnd;
  
  if (param_2 == (LPCSTR)0x0) {
    iVar1 = FUN_004bafca();
    param_2 = *(LPCSTR *)(iVar1 + 0x10);
  }
  AfxGetThreadState();
  hWnd = (HWND)0x0;
  if (this != (void *)0x0) {
    hWnd = *(HWND *)((int)this + 0x1c);
  }
  MessageBoxA(hWnd,param_1,param_2,param_3);
  return;
}


