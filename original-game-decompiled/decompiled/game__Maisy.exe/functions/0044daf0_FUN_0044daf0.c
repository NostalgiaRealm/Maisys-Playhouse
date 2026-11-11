
/* ==== FUN_0044daf0 @ 0044daf0 ==== 
 * signature: undefined __thiscall FUN_0044daf0(void * this, int * param_1)
 * body: 0044daf0-0044db11
 */

void __thiscall FUN_0044daf0(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x150))();
    FUN_0044da60(this,iVar1);
  }
  return;
}


