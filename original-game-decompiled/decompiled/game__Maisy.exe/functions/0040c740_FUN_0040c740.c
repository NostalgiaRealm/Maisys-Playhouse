
/* ==== FUN_0040c740 @ 0040c740 ==== 
 * signature: undefined4 __fastcall FUN_0040c740(int * param_1)
 * body: 0040c740-0040c7cc
 */

uint __fastcall FUN_0040c740(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined2 local_8c;
  int local_8a;
  undefined2 local_60;
  int *local_5e;
  undefined2 local_34;
  int local_32;
  int *local_8;
  
  iVar3 = 1;
  local_8 = (int *)FUN_0040c620(param_1);
  local_8c = 1;
  uVar2 = 0;
  local_60 = 0x6a;
  local_34 = 0x6a;
  if (local_8 != (int *)0x0) {
    pcVar1 = *(code **)(*local_8 + 0x98);
    uVar2 = (*pcVar1)(s_sharedelemcount_004d92f4,0,&local_34);
    if (0 < local_32) {
      do {
        local_8a = iVar3;
        uVar2 = (*pcVar1)(s_sharedelement_004d9308,&local_8c,&local_60);
        if (local_5e == param_1) {
          return CONCAT31((int3)(uVar2 >> 8),1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= local_32);
    }
  }
  return uVar2 & 0xffffff00;
}


