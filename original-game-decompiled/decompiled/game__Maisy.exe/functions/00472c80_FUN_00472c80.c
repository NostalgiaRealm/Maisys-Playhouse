
/* ==== FUN_00472c80 @ 00472c80 ==== 
 * signature: undefined __thiscall FUN_00472c80(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 00472c80-00472d01
 */

void __thiscall
FUN_00472c80(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  int *piVar2;
  uint local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  piVar2 = (int *)(*(int *)((int)this + 0x3e) + 0x15e);
  if (*piVar2 != 0) {
    local_28 = 0;
    if (DAT_004e1c4a < 0) {
      local_28 = 2;
    }
    local_24 = 0;
    local_20 = param_2;
    local_28 = local_28 | 1;
    local_22 = 0;
    local_1c = param_4;
    local_18 = 0;
    local_10 = 0;
    local_14 = param_5;
    pcVar1 = (code *)FUN_0048b580(*piVar2,1,0x16,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8,&local_28,&DAT_004e1c30);
  }
  return;
}


