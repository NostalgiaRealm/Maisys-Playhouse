
/* ==== FUN_120153f0 @ 120153f0 ==== 
 * signature: undefined4 __cdecl FUN_120153f0(int param_1, undefined4 param_2)
 * body: 120153f0-1201548c
 */

undefined4 __cdecl FUN_120153f0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined2 local_10;
  int local_e;
  int local_8;
  DWORD DStack_4;
  
  local_10 = 1;
  local_e = 0;
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,param_1,param_2,&local_10);
  if (DAT_12039a9c != 0) {
    return 0x10000;
  }
  local_e = local_e + -1;
  if (local_e < 0) {
    return 0x10000;
  }
  FUN_12004820(param_1,&DStack_4);
  if (local_e <= (int)DStack_4) {
    *(int *)(param_1 + 0x68) = local_e;
    return 0;
  }
  return 0xa0006;
}


