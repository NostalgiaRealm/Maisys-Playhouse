
/* ==== FUN_004b2775 @ 004b2775 ==== 
 * signature: undefined4 __thiscall FUN_004b2775(void * this, uint param_1, uint param_2, void * param_3, AFX_CMDHANDLERINFO * param_4)
 * body: 004b2775-004b27cb
 */

undefined4 __thiscall
FUN_004b2775(void *this,uint param_1,uint param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  _AFX_THREAD_STATE *p_Var4;
  
  iVar2 = FUN_004a79cb(this,param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    uVar3 = 0;
    if (*(int *)((int)this + 0x3c) != 0) {
      p_Var4 = AfxGetThreadState();
      p_Var4 = p_Var4 + 0xc4;
      uVar1 = *(undefined4 *)p_Var4;
      *(void **)p_Var4 = this;
      uVar3 = (**(code **)(**(int **)((int)this + 0x3c) + 0x14))(param_1,param_2,param_3,param_4);
      *(undefined4 *)p_Var4 = uVar1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}


