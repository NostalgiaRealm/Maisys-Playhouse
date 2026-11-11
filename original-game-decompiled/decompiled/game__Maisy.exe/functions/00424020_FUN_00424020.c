
/* ==== FUN_00424020 @ 00424020 ==== 
 * signature: int __thiscall FUN_00424020(void * this, int param_1)
 * body: 00424020-0042403e
 */

int __thiscall FUN_00424020(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004246a0((int)this);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x3e);
  }
  return iVar1;
}


