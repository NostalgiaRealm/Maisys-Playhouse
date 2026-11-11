
/* ==== FUN_12009210 @ 12009210 ==== 
 * signature: undefined4 __cdecl FUN_12009210(int param_1, int param_2)
 * body: 12009210-1200934c
 */

undefined4 __cdecl FUN_12009210(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 local_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  undefined2 auStack_c [3];
  undefined4 uStack_6;
  
  if ((*(int *)(param_1 + 2) == *(int *)(param_2 + 0xc)) &&
     (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    if (*(char *)(param_1 + 0x22) != '\0') {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_1c);
      DAT_12039a9c = (*pcVar1)(local_1c,&local_20,*(int *)(param_1 + 0x14) + 0x100);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,10,&iStack_18);
      DAT_12039a9c = (*pcVar1)(iStack_18,param_1,*(undefined4 *)(param_1 + 0x18),local_20);
      uStack_6 = local_20;
      auStack_c[0] = 0;
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,0xc,&iStack_14);
      DAT_12039a9c = (*pcVar1)(iStack_14,param_1,auStack_c,*(undefined4 *)(param_1 + 0x1e));
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_10);
      DAT_12039a9c = (*pcVar1)(iStack_10,local_20);
    }
    return 0;
  }
  return 0x10000;
}


