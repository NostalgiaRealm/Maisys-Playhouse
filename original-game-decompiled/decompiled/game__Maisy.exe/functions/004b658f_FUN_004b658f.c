
/* ==== FUN_004b658f @ 004b658f ==== 
 * signature: undefined __thiscall FUN_004b658f(void * this, WPARAM param_1, CString * param_2)
 * body: 004b658f-004b65d1
 */

void __thiscall FUN_004b658f(void *this,WPARAM param_1,CString *param_2)

{
  LRESULT LVar1;
  char *lParam;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 0x1c),0x18a,param_1,0);
  lParam = CString::GetBufferSetLength(param_2,LVar1);
  SendMessageA(*(HWND *)((int)this + 0x1c),0x189,param_1,(LPARAM)lParam);
  CString::ReleaseBuffer(param_2,-1);
  return;
}


