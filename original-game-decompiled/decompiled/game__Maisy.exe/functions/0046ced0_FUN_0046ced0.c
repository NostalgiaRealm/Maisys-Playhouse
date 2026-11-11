
/* ==== FUN_0046ced0 @ 0046ced0 ==== 
 * signature: int __thiscall FUN_0046ced0(void * this, int param_1)
 * body: 0046ced0-0046ceed
 */

int __thiscall FUN_0046ced0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x4e);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x3e);
  }
  return iVar1;
}


