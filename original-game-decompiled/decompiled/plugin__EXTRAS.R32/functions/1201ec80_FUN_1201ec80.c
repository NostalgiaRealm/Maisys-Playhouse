
/* ==== FUN_1201ec80 @ 1201ec80 ==== 
 * signature: undefined4 __cdecl FUN_1201ec80(int param_1, int param_2)
 * body: 1201ec80-1201eff4
 */

undefined4 __cdecl FUN_1201ec80(int param_1,int param_2)

{
  bool bVar1;
  code *pcVar2;
  int iStack_74;
  int iStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined2 uStack_54;
  int iStack_52;
  undefined2 local_2c;
  int iStack_2a;
  int iStack_26;
  
  bVar1 = false;
  local_2c = 0;
  pcVar2 = (code *)FUN_12027370(param_2,1,1,&local_58);
  DAT_12039a9c = (*pcVar2)(CONCAT22(local_58._2_2_,(short)local_58),7,&local_2c);
  switch(local_2c) {
  case 0xb:
    if (iStack_2a != iStack_26) break;
  case 0:
  case 1:
    bVar1 = true;
    break;
  case 100:
    local_58._0_2_ = 0x6a;
    pcVar2 = (code *)FUN_12027370(param_1,0,0x20,&iStack_74);
    DAT_12039a9c = (*pcVar2)(iStack_74,&uStack_68);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_70);
    DAT_12039a9c = (*pcVar2)(iStack_70,uStack_68,s_rangesymbol_12037aa0,&local_2c,&local_58);
    if (DAT_12039a9c != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_74);
      DAT_12039a9c = (*pcVar2)(iStack_74,0,&local_2c);
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_70);
      DAT_12039a9c = (*pcVar2)(iStack_70,0,&local_58);
      return 0x10000;
    }
    if ((((short)local_58 == 0xb) && (CONCAT22(uStack_54,local_58._2_2_) == iStack_52)) ||
       ((short)local_58 == 1)) {
      bVar1 = true;
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_74);
    DAT_12039a9c = (*pcVar2)(iStack_74,0,&local_58);
  }
  if (!bVar1) {
    pcVar2 = (code *)FUN_12027370(param_2,1,3,&local_58);
    DAT_12039a9c = (*pcVar2)(CONCAT22(local_58._2_2_,(short)local_58),9,0);
    pcVar2 = (code *)FUN_12027370(param_2,1,3,&iStack_74);
    DAT_12039a9c = (*pcVar2)(iStack_74,10,0);
    pcVar2 = (code *)FUN_12027370(param_2,1,3,&iStack_70);
    iStack_5c = iStack_70;
  }
  else {
    uStack_6c = 0x14;
    *(undefined4 *)(param_1 + 0x90) = 0;
    uStack_6a = 1;
    pcVar2 = (code *)FUN_12027370(param_2,1,0,&local_58);
    DAT_12039a9c = (*pcVar2)(CONCAT22(local_58._2_2_,(short)local_58),9,&uStack_6c);
    pcVar2 = (code *)FUN_12027370(param_2,1,3,&iStack_74);
    DAT_12039a9c = (*pcVar2)(iStack_74,9,1);
    uStack_6c = 0x14;
    uStack_6a = 0;
    pcVar2 = (code *)FUN_12027370(param_2,1,0,&iStack_70);
    DAT_12039a9c = (*pcVar2)(iStack_70,10,&uStack_6c);
    pcVar2 = (code *)FUN_12027370(param_2,1,3,&iStack_64);
    DAT_12039a9c = (*pcVar2)(iStack_64,10,1);
    pcVar2 = (code *)FUN_12027370(param_2,1,0,&iStack_60);
    DAT_12039a9c = (*pcVar2)(iStack_60,0xb,&uStack_6c);
    pcVar2 = (code *)FUN_12027370(param_2,1,3,&iStack_5c);
  }
  DAT_12039a9c = (*pcVar2)(iStack_5c,0xb,bVar1);
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_58);
  DAT_12039a9c = (*pcVar2)(CONCAT22(local_58._2_2_,(short)local_58),0,&local_2c);
  return 0;
}


