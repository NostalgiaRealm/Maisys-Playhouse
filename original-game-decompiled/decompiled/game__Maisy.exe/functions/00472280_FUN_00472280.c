
/* ==== FUN_00472280 @ 00472280 ==== 
 * signature: undefined __thiscall FUN_00472280(void * this, undefined4 param_1, undefined1 param_2)
 * body: 00472280-004722bc
 */

void __thiscall FUN_00472280(void *this,undefined4 param_1,undefined1 param_2)

{
  code *pcVar1;
  int local_8;
  
  if (*(int *)((int)this + 0x15e) != 0) {
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x15e),1,0xb,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8,param_1,param_2);
  }
  return;
}


