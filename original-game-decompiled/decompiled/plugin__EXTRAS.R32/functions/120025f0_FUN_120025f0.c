
/* ==== FUN_120025f0 @ 120025f0 ==== 
 * signature: undefined4 __cdecl FUN_120025f0(int param_1, int param_2)
 * body: 120025f0-12002715
 */

undefined4 __cdecl FUN_120025f0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_1c;
  int local_1a;
  int local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_1c = 1;
  local_1a = 0;
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&local_14);
  DAT_12039a9c = (*pcVar1)(local_14,2,param_1);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,3,param_1 + 10);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&iStack_c);
  DAT_12039a9c = (*pcVar1)(iStack_c,0xe,&local_1c);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&iStack_8);
  DAT_12039a9c = (*pcVar1)(iStack_8,5,param_1 + 0x1a);
  pcVar1 = (code *)FUN_12027370(param_2,1,1,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,6,param_1 + 0x54);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x56) / *(int *)(param_1 + 0x5a);
  if (local_1a != 0) {
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 2;
    return 0;
  }
  if ((*(uint *)(param_1 + 0x16) & 2) != 0) {
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) ^ 2;
  }
  if (100 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1c) = 100;
  }
  return 0;
}


