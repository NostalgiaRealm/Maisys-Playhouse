
/* ==== FUN_004a5daa @ 004a5daa ==== 
 * signature: undefined __thiscall FUN_004a5daa(void * this, undefined4 * param_1)
 * body: 004a5daa-004a5dd6
 */

void __thiscall FUN_004a5daa(void *this,undefined4 *param_1)

{
  int iVar1;
  
  FUN_004abc24((CString *)(param_1 + 2));
  *param_1 = *(undefined4 *)((int)this + 0x10);
  iVar1 = *(int *)((int)this + 0xc) + -1;
  *(undefined4 **)((int)this + 0x10) = param_1;
  *(int *)((int)this + 0xc) = iVar1;
  if (iVar1 == 0) {
    FUN_004a5c9a((int)this);
  }
  return;
}


