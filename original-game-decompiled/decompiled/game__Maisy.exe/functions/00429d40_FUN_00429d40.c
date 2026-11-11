
/* ==== FUN_00429d40 @ 00429d40 ==== 
 * signature: undefined __thiscall FUN_00429d40(void * this, int param_1, uint param_2, uint param_3)
 * body: 00429d40-00429dc9
 */

void __thiscall FUN_00429d40(void *this,int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined2 local_60;
  uint local_5e;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 local_2e;
  int local_8;
  
  local_34 = 0x17;
  local_60 = 1;
  local_5e = param_3 | param_2;
  pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x16,&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,s_events_004da3ec,&local_60,&local_34);
  if (DAT_004e34cc == 0) {
    *(undefined4 *)(param_1 + 6) = local_32;
    *(undefined4 *)(param_1 + 10) = local_2e;
    bVar2 = *(byte *)(param_1 + 2) | 2;
    *(byte *)(param_1 + 2) = bVar2;
    *(byte *)(param_1 + 2) = (param_2 == 0x20000000 ^ bVar2) & 1 ^ bVar2;
  }
  return;
}


