
/* ==== FUN_12016cb0 @ 12016cb0 ==== 
 * signature: undefined4 __cdecl FUN_12016cb0(int param_1, int param_2)
 * body: 12016cb0-12016e46
 */

undefined4 __cdecl FUN_12016cb0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_12;
  int iStack_10;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_4;
  
  local_12 = 3;
  pcVar1 = (code *)FUN_12027370(param_2,1,7,(int *)&local_c);
  DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_a,local_c),&local_12,1);
  pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_10);
  DAT_12039a9c = (*pcVar1)(iStack_10,param_1);
  if ((*(uint *)(param_1 + 0x58) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 0x58) & 1) != 0) {
      pcVar1 = (code *)FUN_12027370(param_2,1,5,(int *)&local_c);
      DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_a,local_c),param_1 + 0x56);
      pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_10);
      DAT_12039a9c = (*pcVar1)(iStack_10,param_1 + 0x20);
      return 0;
    }
    pcVar1 = (code *)FUN_12027370(param_2,1,5,(int *)&local_c);
    DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_a,local_c),param_1 + 0x56);
  }
  else {
    local_c = 1;
    uStack_a = 5;
    uStack_8 = 0;
    pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_10);
    DAT_12039a9c = (*pcVar1)(iStack_10,&local_c);
    pcVar1 = (code *)FUN_12027370(param_2,1,5,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x5c);
    if (*(int *)(param_1 + 0x6a) != 0) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&iStack_10);
      DAT_12039a9c = (*pcVar1)(iStack_10,*(undefined4 *)(param_1 + 0x6a));
      *(undefined4 *)(param_1 + 0x6a) = 0;
      *(undefined4 *)(param_1 + 0x62) = 0;
      *(undefined4 *)(param_1 + 0x66) = 0;
      return 0;
    }
  }
  return 0;
}


