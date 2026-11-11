
/* ==== FUN_004730a0 @ 004730a0 ==== 
 * signature: undefined4 __thiscall FUN_004730a0(void * this, int param_1, int param_2)
 * body: 004730a0-00473147
 */

undefined4 __thiscall FUN_004730a0(void *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  HWND hWnd;
  DWORD dwStyle;
  undefined4 *lpParam;
  undefined4 local_c;
  undefined4 local_8;
  
  dwStyle = 0x56000001;
  if (param_2 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(param_2 + 4);
  }
  local_8 = 0xff00;
  uVar1 = *(uint *)(param_1 + 0x20) & 0x300000;
  if (uVar1 != 0) {
    dwStyle = uVar1 | 0x56000001;
    FUN_004a812e(this,0x300000,0,0x28);
  }
  lpParam = &local_c;
  iVar2 = FUN_004bafca();
  hWnd = CreateWindowExA(0,s_mdiclient_004dc9f8,(LPCSTR)0x0,dwStyle,0,0,0,0,
                         *(HWND *)((int)this + 0x1c),(HMENU)0xe900,*(HINSTANCE *)(iVar2 + 8),lpParam
                        );
  *(HWND *)((int)this + 0xbc) = hWnd;
  if (hWnd == (HWND)0x0) {
    return 0;
  }
  BringWindowToTop(hWnd);
  return 1;
}


