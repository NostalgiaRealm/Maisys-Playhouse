
/* ==== FUN_0046cf50 @ 0046cf50 ==== 
 * signature: undefined __thiscall FUN_0046cf50(void * this, undefined * param_1, undefined4 param_2)
 * body: 0046cf50-0046cf7d
 */

void __thiscall FUN_0046cf50(void *this,undefined *param_1,undefined4 param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)((int)this + 0x4e); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3e)) {
    if ((*(byte *)(iVar1 + 0x29) & 0x80) == 0) {
      (*(code *)param_1)(iVar1,param_2);
    }
  }
  return;
}


