
/* ==== FUN_0042c4b0 @ 0042c4b0 ==== 
 * signature: undefined __thiscall FUN_0042c4b0(void * this, int param_1, int param_2)
 * body: 0042c4b0-0042c539
 */

void __thiscall FUN_0042c4b0(void *this,int param_1,int param_2)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  undefined2 local_c;
  short local_a;
  int local_8;
  
  local_c = 0;
  local_a = 0;
  pcVar1 = *(code **)(*(int *)this + 600);
  (*pcVar1)(0x22,&local_c,8);
  sVar2 = local_a;
  if ((local_a != 0) && (sVar3 = 1, 0 < local_a)) {
    do {
      local_c = 1;
      local_a = sVar3;
      (*pcVar1)(0x22,&local_c,8);
      if (local_8 == param_1) {
        local_8 = param_2;
        local_c = 2;
        (*pcVar1)(0x22,&local_c,8);
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 <= sVar2);
  }
  return;
}


