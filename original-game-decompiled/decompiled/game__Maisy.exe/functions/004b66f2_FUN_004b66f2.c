
/* ==== FUN_004b66f2 @ 004b66f2 ==== 
 * signature: undefined __thiscall FUN_004b66f2(void * this, WPARAM param_1, CString * param_2)
 * body: 004b66f2-004b6734
 */

void __thiscall FUN_004b66f2(void *this,WPARAM param_1,CString *param_2)

{
  LRESULT LVar1;
  char *lParam;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 0x1c),0x149,param_1,0);
  lParam = CString::GetBufferSetLength(param_2,LVar1);
  SendMessageA(*(HWND *)((int)this + 0x1c),0x148,param_1,(LPARAM)lParam);
  CString::ReleaseBuffer(param_2,-1);
  return;
}


