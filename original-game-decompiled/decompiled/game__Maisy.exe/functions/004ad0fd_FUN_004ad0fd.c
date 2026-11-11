
/* ==== FUN_004ad0fd @ 004ad0fd ==== 
 * signature: undefined __thiscall FUN_004ad0fd(void * this, int param_1)
 * body: 004ad0fd-004ad14f
 */

void __thiscall FUN_004ad0fd(void *this,int param_1)

{
  int *piVar1;
  CString *this_00;
  int iVar2;
  
  piVar1 = (int *)((int)this + 8);
  iVar2 = param_1 * 4;
  FUN_004abc24((CString *)(*piVar1 + iVar2));
  if (param_1 < *(int *)((int)this + 4) + -1) {
    do {
      param_1 = param_1 + 1;
      this_00 = (CString *)(*piVar1 + iVar2);
      iVar2 = iVar2 + 4;
      CString::operator=(this_00,this_00 + 4);
    } while (param_1 < *(int *)((int)this + 4) + -1);
  }
  FUN_004abc24((CString *)(param_1 * 4 + *piVar1));
  return;
}


