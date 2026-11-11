
/* ==== FUN_004a5738 @ 004a5738 ==== 
 * signature: undefined __thiscall FUN_004a5738(void * this, int param_1, undefined4 param_2)
 * body: 004a5738-004a5750
 */

void __thiscall FUN_004a5738(void *this,int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_004a5620(this,param_2);
  }
  else {
    piVar1 = (int *)(param_1 + 4);
    iVar2 = NewNode(this,*piVar1,param_1);
    *(undefined4 *)(iVar2 + 8) = param_2;
    if ((int *)*piVar1 == (int *)0x0) {
      *(int *)((int)this + 4) = iVar2;
    }
    else {
      *(int *)*piVar1 = iVar2;
    }
    *piVar1 = iVar2;
  }
  return;
}


