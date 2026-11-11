
/* ==== FUN_12008b40 @ 12008b40 ==== 
 * signature: undefined4 __cdecl FUN_12008b40(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 12008b40-12008d90
 */

undefined4 __cdecl FUN_12008b40(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_1e;
  int local_1c;
  int iStack_18;
  undefined2 local_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined4 uStack_e;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  if (param_4 < 1) {
    if (param_4 == 0) {
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_1c);
      DAT_12039a9c = (*pcVar1)(local_1c,param_1);
      local_14 = 0x66;
      uStack_12 = 0xffff;
      uStack_10 = 0xffff;
      uStack_e = 0;
      uStack_a = 0;
      uStack_6 = 0;
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
      DAT_12039a9c = (*pcVar1)(iStack_18,&local_14);
      FUN_120273e0(0,(undefined2 *)(param_1 + 10),(int)&local_14);
      if (*(int *)(param_1 + 0x18) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18)) = 0;
      }
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_1c);
      DAT_12039a9c = (*pcVar1)(local_1c,uStack_6);
      *(undefined1 *)(param_1 + 0x22) = 1;
      pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
      DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x1c);
      return 0;
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_12027370(param_2,1,8,(int *)&local_14);
  DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_12,local_14),&local_1e,1);
  if (local_1e == 1) {
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_1c);
    DAT_12039a9c = (*pcVar1)(local_1c,param_1);
    local_14 = 0x66;
    uStack_12 = 0xffff;
    uStack_10 = 0xffff;
    uStack_e = 0;
    uStack_a = 0;
    uStack_6 = 0;
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
    DAT_12039a9c = (*pcVar1)(iStack_18,&local_14);
    FUN_120273e0(0,(undefined2 *)(param_1 + 10),(int)&local_14);
    if (*(int *)(param_1 + 0x18) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18)) = 0;
    }
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_1c);
    DAT_12039a9c = (*pcVar1)(local_1c,uStack_6);
    *(undefined1 *)(param_1 + 0x22) = 1;
    pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
    DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x1c);
    return 0;
  }
  return 0x10000;
}


