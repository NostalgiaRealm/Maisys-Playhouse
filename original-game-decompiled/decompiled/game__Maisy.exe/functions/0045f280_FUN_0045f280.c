
/* ==== FUN_0045f280 @ 0045f280 ==== 
 * signature: undefined __thiscall FUN_0045f280(void * this, char * param_1)
 * body: 0045f280-0045f2e6
 */

void __thiscall FUN_0045f280(void *this,char *param_1)

{
  ulong local_c;
  ulong local_8;
  
  FUN_0045ebf0(param_1,(undefined4 *)((int)this + 0xd2),(uint *)((int)this + 0xd6),
               (undefined4 *)((int)this + 0xce));
  local_8 = CWnd::GetExStyle(this);
  local_c = CWnd::GetExStyle(this);
  FUN_0045f320(this,&local_c,&local_8);
  CWnd::ModifyStyle(this,0x40,*(uint *)((int)this + 0xd6) | local_8,3);
  return;
}


