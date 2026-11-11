
/* ==== FUN_0042a280 @ 0042a280 ==== 
 * signature: undefined __thiscall FUN_0042a280(void * this, uint * param_1)
 * body: 0042a280-0042a321
 */

void __thiscall FUN_0042a280(void *this,uint *param_1)

{
  code *pcVar1;
  int local_8;
  
  if (param_1[3] == 0x7d1) {
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0xd,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8);
  }
  if (param_1[3] == 0x7d2) {
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0xe,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8);
  }
  pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x19,&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,param_1);
  if ((DAT_004e34cc == 0) && ((*param_1 & 0x20000000) != 0)) {
    *param_1 = *param_1 | 0x10000000;
  }
  return;
}


