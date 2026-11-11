
/* ==== FUN_004aa281 @ 004aa281 ==== 
 * signature: undefined4 __thiscall FUN_004aa281(void * this, undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * body: 004aa281-004aa2f8
 */

undefined4 __thiscall
FUN_004aa281(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  _AFX_THREAD_STATE *p_Var1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = GetDlgCtrlID((HWND)*param_2);
  local_8 = local_8 & 0xffff;
  local_c = param_2[2];
  p_Var1 = AfxGetThreadState();
  if (*(int *)(p_Var1 + 0xbc) == *(int *)((int)this + 0x1c)) {
    uVar2 = 1;
  }
  else {
    iVar3 = FUN_004aac76();
    uVar2 = 1;
    if (iVar3 == 0) {
      local_14 = param_3;
      local_10 = param_2;
      uVar2 = (**(code **)(*(int *)this + 0x14))(local_8,local_c & 0xffff | 0x4e0000,&local_14,0);
    }
  }
  return uVar2;
}


