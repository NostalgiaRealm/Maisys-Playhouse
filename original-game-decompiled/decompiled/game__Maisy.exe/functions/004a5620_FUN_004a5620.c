
/* ==== FUN_004a5620 @ 004a5620 ==== 
 * signature: undefined __thiscall FUN_004a5620(void * this, undefined4 param_1)
 * body: 004a5620-004a564b
 */

void __thiscall FUN_004a5620(void *this,undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + 4);
  iVar2 = NewNode(this,0,*piVar1);
  *(undefined4 *)(iVar2 + 8) = param_1;
  if (*piVar1 == 0) {
    *(int *)((int)this + 8) = iVar2;
  }
  else {
    *(int *)(*piVar1 + 4) = iVar2;
  }
  *piVar1 = iVar2;
  return;
}


