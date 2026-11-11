
/* ==== FUN_004aad59 @ 004aad59 ==== 
 * signature: int __thiscall FUN_004aad59(void * this, uint param_1, uint param_2, long param_3, long * param_4)
 * body: 004aad59-004aadea
 */

int __thiscall FUN_004aad59(void *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x38) == 0) {
    iVar2 = CWnd::ReflectChildNotify(this,param_1,param_2,param_3,param_4);
  }
  else {
    if (DAT_004e5204 == 0) {
      iVar2 = SendMessageA(*(HWND *)((int)this + 0x1c),param_1 + 0x2000,param_2,param_3);
    }
    else {
      pcVar1 = (code *)GetWindowLongA(*(HWND *)((int)this + 0x1c),-4);
      iVar2 = (*pcVar1)(*(undefined4 *)((int)this + 0x1c),param_1 + 0x2000,param_2,param_3);
    }
    if (((param_1 < 0x132) || (0x138 < param_1)) || (iVar2 != 0)) {
      if (param_4 != (long *)0x0) {
        *param_4 = iVar2;
      }
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}


