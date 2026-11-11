
/* ==== FUN_004726b0 @ 004726b0 ==== 
 * signature: undefined4 __thiscall FUN_004726b0(void * this, undefined4 param_1, short param_2, undefined2 param_3)
 * body: 004726b0-00472727
 */

undefined4 __thiscall FUN_004726b0(void *this,undefined4 param_1,short param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined2 extraout_var;
  int local_8;
  
  DAT_004dc9b0 = 0;
  if (*(int *)((int)this + 0x3a) != 0) {
    FUN_00408460(*(int *)((int)this + 0x3a));
    if (*(int *)((int)this + 0x15e) != 0) {
      pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x15e),1,0x21,&local_8);
      DAT_004e34cc = (*pcVar1)(local_8,param_1,(int)param_2,CONCAT22(extraout_var,param_3),1,
                               CONCAT31((int3)((uint)(DAT_004e0200 + -0x3ed) >> 8),
                                        DAT_004e0200 + -0x3ed == 0));
    }
  }
  return DAT_004dc9b0;
}


