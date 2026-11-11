
/* ==== FUN_0045f960 @ 0045f960 ==== 
 * signature: undefined __thiscall FUN_0045f960(void * this, uint param_1, long param_2)
 * body: 0045f960-0045f98a
 */

void __thiscall FUN_0045f960(void *this,uint param_1,long param_2)

{
  if (param_1 == 0xf020) {
    FUN_0045f880(this,'\0');
  }
  CFrameWnd::OnSysCommand(this,param_1,param_2);
  return;
}


