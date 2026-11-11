
/* ==== FUN_004a2e9c @ 004a2e9c ==== 
 * signature: bool __thiscall FUN_004a2e9c(void * this, int param_1, undefined4 param_2, undefined4 param_3, void * param_4)
 * body: 004a2e9c-004a2f0f
 */

bool __thiscall
FUN_004a2e9c(void *this,int param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  LRESULT LVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [40];
  
  _memset(&local_38,0,0x34);
  if (param_1 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined4 *)(param_1 + 0x1c);
  }
  local_34 = param_2;
  local_30 = param_3;
  LVar1 = SendMessageA(*(HWND *)((int)this + 0x1c),0x40a,0,(LPARAM)&local_38);
  if (LVar1 != 0) {
    FID_conflict__memcpy(param_4,local_2c,0x28);
  }
  return LVar1 != 0;
}


