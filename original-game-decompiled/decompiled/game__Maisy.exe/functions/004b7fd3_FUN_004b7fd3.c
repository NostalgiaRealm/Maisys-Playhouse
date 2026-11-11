
/* ==== FUN_004b7fd3 @ 004b7fd3 ==== 
 * signature: undefined __thiscall FUN_004b7fd3(void * this, int param_1)
 * body: 004b7fd3-004b806f
 */

void __thiscall FUN_004b7fd3(void *this,int param_1)

{
  HWND hWnd;
  HWND__ *hWnd_00;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  UINT uCmd;
  
  uCmd = 5;
  hWnd = GetDesktopWindow();
  for (hWnd_00 = GetWindow(hWnd,uCmd); hWnd_00 != (HWND__ *)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
    pvVar1 = FUN_004a8970(hWnd_00);
    if (((pvVar1 != (void *)0x0) && (*(HWND__ **)((int)this + 0x1c) != hWnd_00)) &&
       (iVar2 = AfxIsDescendant(*(HWND__ **)((int)this + 0x1c),hWnd_00), iVar2 != 0)) {
      uVar3 = GetWindowLongA(hWnd_00,-0x10);
      if (param_1 == 0) {
        if ((uVar3 & 0x18000000) == 0x10000000) {
          ShowWindow(hWnd_00,0);
          *(byte *)((int)pvVar1 + 0x24) = *(byte *)((int)pvVar1 + 0x24) | 2;
        }
      }
      else if (((uVar3 & 0x18000000) == 0) && ((*(byte *)((int)pvVar1 + 0x24) & 2) != 0)) {
        ShowWindow(hWnd_00,4);
        *(byte *)((int)pvVar1 + 0x24) = *(byte *)((int)pvVar1 + 0x24) & 0xfd;
      }
    }
  }
  return;
}


