
/* ==== FUN_00472550 @ 00472550 ==== 
 * signature: undefined4 __thiscall FUN_00472550(void * this, undefined4 param_1, undefined4 param_2)
 * body: 00472550-0047259a
 */

undefined4 __thiscall FUN_00472550(void *this,undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)((int)this + 0x15e) != 0) {
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x15e),1,0,&local_c);
    DAT_004e34cc = (*pcVar1)(local_c,param_1,param_2,&local_8);
  }
  return local_8;
}


