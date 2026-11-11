
/* ==== FUN_004725a0 @ 004725a0 ==== 
 * signature: undefined __thiscall FUN_004725a0(void * this, undefined4 * param_1)
 * body: 004725a0-00472640
 */

void __thiscall FUN_004725a0(void *this,undefined4 *param_1)

{
  code *pcVar1;
  undefined4 local_6c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_18;
  undefined2 local_14;
  undefined1 local_12;
  undefined1 local_11;
  undefined2 local_10;
  int local_e;
  undefined4 local_a;
  
  FUN_004142c0(&local_6c,0x134,0,this,0);
  local_48 = *param_1;
  local_44 = param_1[1];
  local_40 = param_1[2];
  FUN_0046b770(this,(int)&local_6c);
  if ((*(int *)((int)this + 0x15e) != 0) && ((local_6c._3_1_ & 0x10) == 0)) {
    local_e = (int)*(short *)((int)param_1 + 2);
    local_14 = *(undefined2 *)param_1;
    local_11 = *(undefined1 *)((int)param_1 + 5);
    local_12 = *(undefined1 *)(param_1 + 1);
    local_a = *(undefined4 *)((int)param_1 + 6);
    local_10 = *(undefined2 *)((int)param_1 + 10);
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x15e),1,0x22,&local_18);
    DAT_004e34cc = (*pcVar1)(local_18,&local_14);
  }
  return;
}


