
/* ==== FUN_0042ac10 @ 0042ac10 ==== 
 * signature: undefined __thiscall FUN_0042ac10(void * this, undefined4 param_1)
 * body: 0042ac10-0042ac7c
 */

void __thiscall FUN_0042ac10(void *this,undefined4 param_1)

{
  code *pcVar1;
  undefined2 local_38;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined2 local_24;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined2 *local_10;
  undefined2 *local_c;
  int local_8;
  
  local_38 = 0x69;
  local_24 = 0x69;
  local_22 = *(undefined4 *)((int)this + 4);
  local_36 = param_1;
  local_32 = 0;
  local_2e = 0;
  local_2a = 0;
  local_10 = &local_38;
  local_c = &local_24;
  local_1e = 0;
  local_1a = 0;
  local_16 = 0;
  pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x25,&local_8);
  DAT_004e34cc = (*pcVar1)(local_8,0,&local_10);
  return;
}


