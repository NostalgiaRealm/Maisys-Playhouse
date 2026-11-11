
/* ==== FUN_00429dd0 @ 00429dd0 ==== 
 * signature: undefined __thiscall FUN_00429dd0(void * this, int param_1, short param_2)
 * body: 00429dd0-00429e2d
 */

void __thiscall FUN_00429dd0(void *this,int param_1,short param_2)

{
  code *pcVar1;
  undefined2 local_60;
  int local_5e;
  undefined2 local_34;
  undefined4 local_32;
  undefined4 local_2e;
  int local_8;
  
  local_34 = 0x17;
  local_60 = 1;
  local_32 = *(undefined4 *)(param_1 + 6);
  local_2e = *(undefined4 *)(param_1 + 10);
  local_5e = (int)param_2;
  pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x17,&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,s_events_004da3ec,&local_60,&local_34);
  return;
}


