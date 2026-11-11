
/* ==== FUN_12014e10 @ 12014e10 ==== 
 * signature: undefined __cdecl FUN_12014e10(int param_1, undefined2 * param_2)
 * body: 12014e10-12014e54
 */

void __cdecl FUN_12014e10(int param_1,undefined2 *param_2)

{
  uint uVar1;
  DWORD local_4;
  
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    uVar1 = FUN_12004820(param_1,&local_4);
  }
  else {
    uVar1 = 0xa0003;
  }
  *param_2 = 1;
  if (uVar1 == 0) {
    *(DWORD *)(param_2 + 1) = local_4;
    return;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  return;
}


