
/* ==== FUN_004721c0 @ 004721c0 ==== 
 * signature: undefined __thiscall FUN_004721c0(void * this, undefined4 param_1)
 * body: 004721c0-004721f8
 */

void __thiscall FUN_004721c0(void *this,undefined4 param_1)

{
  code *pcVar1;
  int local_8;
  
  if (*(int *)((int)this + 0x15e) != 0) {
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x15e),1,9,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8,param_1);
  }
  return;
}


