
/* ==== FUN_0046cef0 @ 0046cef0 ==== 
 * signature: int * __thiscall FUN_0046cef0(void * this, int param_1)
 * body: 0046cef0-0046cf30
 */

int * __thiscall FUN_0046cef0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)((int)this + 0x4e);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (((*(uint *)((int)piVar1 + 0x1e) & 0x10) != 0) &&
       (iVar2 = (**(code **)(*piVar1 + 0x244))(), iVar2 == param_1)) break;
    piVar1 = *(int **)((int)piVar1 + 0x3e);
  }
  return piVar1;
}


