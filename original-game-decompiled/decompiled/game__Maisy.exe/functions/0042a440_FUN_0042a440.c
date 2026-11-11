
/* ==== FUN_0042a440 @ 0042a440 ==== 
 * signature: undefined __thiscall FUN_0042a440(void * this, int param_1, int param_2)
 * body: 0042a440-0042a493
 */

void __thiscall FUN_0042a440(void *this,int param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  int local_8;
  
  uVar1 = FUN_00429b00((int)this);
  FUN_00438850(DAT_004dae3c,uVar1);
  pcVar2 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x13,&local_8);
  DAT_004e34cc = (*pcVar2)(local_8,*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_2 + 0xe));
  return;
}


