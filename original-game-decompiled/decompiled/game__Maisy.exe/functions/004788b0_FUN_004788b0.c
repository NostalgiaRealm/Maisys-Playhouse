
/* ==== FUN_004788b0 @ 004788b0 ==== 
 * signature: undefined __thiscall FUN_004788b0(void * this, short param_1, char param_2, undefined4 param_3)
 * body: 004788b0-004788f5
 */

void __thiscall FUN_004788b0(void *this,short param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_20 [16];
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = (int)param_1;
  if (iVar1 <= *(int *)((int)*(void **)((int)this + 0x54) + 0x26)) {
    FUN_00430370(*(void **)((int)this + 0x54),iVar1,local_20);
    if (param_2 == '\0') {
      local_10 = param_3;
    }
    else {
      local_c = param_3;
    }
    FUN_0042ff10(*(void **)((int)this + 0x54),iVar1,local_20);
  }
  return;
}


