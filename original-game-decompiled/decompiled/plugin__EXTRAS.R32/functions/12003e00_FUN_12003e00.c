
/* ==== FUN_12003e00 @ 12003e00 ==== 
 * signature: undefined __thiscall FUN_12003e00(void * this, int param_1)
 * body: 12003e00-12003e18
 */

void __thiscall FUN_12003e00(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + *(int *)((int)this + 4);
  FUN_12004580((void *)((int)this + 0xc),iVar1,*(int *)((int)this + 8) + iVar1);
  return;
}


