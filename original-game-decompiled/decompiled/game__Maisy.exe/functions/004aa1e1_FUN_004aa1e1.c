
/* ==== FUN_004aa1e1 @ 004aa1e1 ==== 
 * signature: undefined4 __thiscall FUN_004aa1e1(void * this, uint param_1, int param_2)
 * body: 004aa1e1-004aa280
 */

undefined4 __thiscall FUN_004aa1e1(void *this,uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  _AFX_THREAD_STATE *p_Var3;
  int iVar4;
  uint uVar5;
  CTestCmdUI local_30 [4];
  uint local_2c;
  int local_8;
  
  local_8 = param_2;
  uVar5 = param_1 & 0xffff;
  uVar1 = param_1 >> 0x10;
  if (param_2 == 0) {
    if (uVar5 == 0) {
      return 0;
    }
    CTestCmdUI::CTestCmdUI(local_30);
    local_2c = uVar5;
    (**(code **)(*(int *)this + 0x14))(uVar5,0xffffffff,local_30,0);
    if (local_8 == 0) {
      return 1;
    }
    uVar1 = 0;
  }
  else {
    p_Var3 = AfxGetThreadState();
    if (*(int *)(p_Var3 + 0xbc) == *(int *)((int)this + 0x1c)) {
      return 1;
    }
    iVar4 = FUN_004aac76();
    if (iVar4 != 0) {
      return 1;
    }
    if (uVar5 == 0) {
      return 0;
    }
  }
  uVar2 = (**(code **)(*(int *)this + 0x14))(uVar5,uVar1,0,0);
  return uVar2;
}


