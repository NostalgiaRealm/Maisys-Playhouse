
/* ==== FUN_1201aab0 @ 1201aab0 ==== 
 * signature: undefined4 __cdecl FUN_1201aab0(int param_1, int param_2)
 * body: 1201aab0-1201abbe
 */

undefined4 __cdecl FUN_1201aab0(int param_1,int param_2)

{
  code *pcVar1;
  int local_14;
  int iStack_10;
  undefined2 local_c;
  int local_a;
  int iStack_4;
  
  local_c = 1;
  local_a = 0;
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,4,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,6,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,0xc,&local_c);
  if (local_a != 0) {
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 2;
    return 0;
  }
  if ((*(uint *)(param_1 + 0x16) & 2) != 0) {
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) ^ 2;
  }
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,9,param_1 + 0x1a);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,0xb,param_1 + 0x52);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x54) / *(int *)(param_1 + 0x58);
  return 0;
}


