
/* ==== FUN_004a93fc @ 004a93fc ==== 
 * signature: uint __thiscall FUN_004a93fc(void * this, LONG param_1, LONG param_2, int param_3)
 * body: 004a93fc-004a946a
 */

uint __thiscall FUN_004a93fc(void *this,LONG param_1,LONG param_2,int param_3)

{
  tagPOINT tVar1;
  HWND__ *hWnd;
  uint uVar2;
  uint uVar3;
  
  tVar1.y = param_2;
  tVar1.x = param_1;
  hWnd = _AfxChildWindowFromPoint(*(HWND__ **)((int)this + 0x1c),tVar1);
  if (hWnd == (HWND__ *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = GetDlgCtrlID(hWnd);
    uVar2 = uVar2 & 0xffff;
    if (param_3 != 0) {
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)((int)this + 0x1c);
      *(HWND__ **)(param_3 + 0xc) = hWnd;
      *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 1;
      *(undefined4 *)(param_3 + 0x24) = 0xffffffff;
      uVar3 = SendMessageA(hWnd,0x87,0,0);
      if ((uVar3 & 0x2000) == 0) {
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 0x80000002;
      }
    }
  }
  return uVar2;
}


