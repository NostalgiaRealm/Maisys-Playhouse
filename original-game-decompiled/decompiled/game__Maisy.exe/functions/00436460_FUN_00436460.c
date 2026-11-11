
/* ==== FUN_00436460 @ 00436460 ==== 
 * signature: undefined __thiscall FUN_00436460(void * this, int param_1, undefined4 param_2)
 * body: 00436460-0043647c
 */

void __thiscall FUN_00436460(void *this,int param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_00436200(this,param_1);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2);
  }
  return;
}


