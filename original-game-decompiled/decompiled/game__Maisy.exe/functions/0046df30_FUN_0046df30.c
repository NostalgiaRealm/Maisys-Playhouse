
/* ==== FUN_0046df30 @ 0046df30 ==== 
 * signature: int __thiscall FUN_0046df30(void * this, undefined4 param_1)
 * body: 0046df30-0046df56
 */

int __thiscall FUN_0046df30(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x6a);
  if (iVar1 == 0) {
    if (*(int **)((int)this + 0x62) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)((int)this + 0x62) + 0x1b8))(param_1);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


