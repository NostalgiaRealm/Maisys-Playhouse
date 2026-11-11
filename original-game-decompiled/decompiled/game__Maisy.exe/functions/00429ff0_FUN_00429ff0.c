
/* ==== FUN_00429ff0 @ 00429ff0 ==== 
 * signature: undefined __thiscall FUN_00429ff0(void * this, short * param_1, short * param_2)
 * body: 00429ff0-0042a04e
 */

void __thiscall FUN_00429ff0(void *this,short *param_1,short *param_2)

{
  code *pcVar1;
  int local_8;
  
  pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x16,&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,s_value_004d9864,param_1,param_2);
  if ((DAT_004e34cc == 0x10000) || (DAT_004e34cc == 0x40001)) {
    FUN_0042ca70(this,(int *)s_value_004d9864,param_1,param_2);
  }
  return;
}


