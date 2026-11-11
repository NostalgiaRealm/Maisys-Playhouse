
/* ==== FUN_0042a180 @ 0042a180 ==== 
 * signature: undefined __thiscall FUN_0042a180(void * this, uint * param_1)
 * body: 0042a180-0042a27a
 */

void __thiscall FUN_0042a180(void *this,uint *param_1)

{
  code *pcVar1;
  uint *puVar2;
  uint local_5c [2];
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined2 local_36 [23];
  int local_8;
  
  if (param_1[3] == 0x7d1) {
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0xd,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8);
  }
  if (param_1[3] == 0x7d2) {
    pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0xe,&local_8);
    DAT_004e34cc = (*pcVar1)(local_8);
  }
  local_50 = param_1[3];
  if (local_50 != 3) {
    local_4c = param_1[4];
    if (param_1[1] == 0xaa55a5a5) {
      pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x19,&local_8);
      puVar2 = param_1;
    }
    else {
      local_54 = param_1[2];
      FUN_004169e0((short *)(param_1 + 9),local_36,0);
      pcVar1 = (code *)FUN_0048b580(*(int *)((int)this + 0x50),0,0x19,&local_8);
      puVar2 = local_5c;
    }
    DAT_004e34cc = (*pcVar1)(local_8,puVar2);
    if ((DAT_004e34cc == 0) && ((*param_1 & 0x20000000) != 0)) {
      *param_1 = *param_1 | 0x10000000;
    }
  }
  return;
}


