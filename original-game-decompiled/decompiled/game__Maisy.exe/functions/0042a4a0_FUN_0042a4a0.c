
/* ==== FUN_0042a4a0 @ 0042a4a0 ==== 
 * signature: undefined __thiscall FUN_0042a4a0(void * this, int param_1, int param_2)
 * body: 0042a4a0-0042a4e3
 */

void __thiscall FUN_0042a4a0(void *this,int param_1,int param_2)

{
  code *pcVar1;
  undefined2 extraout_var;
  int local_8;
  
  pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x12,&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_2 + 0xe),
                           CONCAT22(extraout_var,*(undefined2 *)(param_2 + 0xc)));
  return;
}


