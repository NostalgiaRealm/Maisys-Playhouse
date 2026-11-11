
/* ==== FUN_00429cc0 @ 00429cc0 ==== 
 * signature: undefined __thiscall FUN_00429cc0(void * this, int param_1, short param_2)
 * body: 00429cc0-00429d30
 */

void __thiscall FUN_00429cc0(void *this,int param_1,short param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined2 local_60;
  int local_5e;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 local_2e;
  int local_8;
  
  local_5e = (int)param_2;
  local_34 = 0x17;
  local_60 = 1;
  pcVar2 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x16,&local_8);
  DAT_004e34cc = (*pcVar2)(local_8,s_events_004da3ec,&local_60,&local_34);
  if (DAT_004e34cc == 0) {
    *(undefined4 *)(param_1 + 6) = local_32;
    *(undefined4 *)(param_1 + 10) = local_2e;
    bVar1 = *(byte *)(param_1 + 2);
    *(byte *)(param_1 + 2) = bVar1 | 2;
    *(byte *)(param_1 + 2) = bVar1 & 0xfe | 2;
  }
  return;
}


