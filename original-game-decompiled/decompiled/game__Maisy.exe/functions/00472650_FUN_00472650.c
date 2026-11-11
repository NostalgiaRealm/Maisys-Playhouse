
/* ==== FUN_00472650 @ 00472650 ==== 
 * signature: undefined __thiscall FUN_00472650(void * this, undefined4 param_1, short param_2, undefined2 param_3, undefined1 param_4)
 * body: 00472650-004726a8
 */

void __thiscall
FUN_00472650(void *this,undefined4 param_1,short param_2,undefined2 param_3,undefined1 param_4)

{
  code *pcVar1;
  undefined2 extraout_var;
  int local_8;
  
  if (*(int *)((int)this + 0x3a) != 0) {
    FUN_00408460(*(int *)((int)this + 0x3a));
    if (*(int *)((int)this + 0x15e) != 0) {
      pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x15e),1,0x21,&local_8);
      DAT_004e34cc = (*pcVar1)(local_8,param_1,(int)param_2,CONCAT22(extraout_var,param_3),param_4,0
                              );
    }
  }
  return;
}


