
/* ==== FUN_14016320 @ 14016320 ==== 
 * signature: undefined4 __cdecl FUN_14016320(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 14016320-1401671c
 */

undefined4 __cdecl FUN_14016320(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  short local_56;
  int local_54;
  int iStack_50;
  int iStack_4c;
  undefined2 local_48;
  short local_46;
  undefined2 local_44;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  int local_36;
  int iStack_30;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  int iStack_26;
  
  local_48 = 0x14;
  local_42 = 0xffffffff;
  local_44 = 0x66;
  local_46 = 0;
  local_3e = 0;
  local_3a = 0;
  local_36 = 0;
  if (0 < param_4) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,8,&local_54);
    DAT_14028e48 = (*pcVar1)(local_54,&local_56,1);
    if (*(int *)(param_1 + 0x44) != 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_54);
      DAT_14028e48 = (*pcVar1)(local_54,*(undefined4 *)(param_1 + 0x44));
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (local_56 == 2) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
      DAT_14028e48 = (*pcVar1)(local_54,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_50);
      DAT_14028e48 = (*pcVar1)(iStack_50,param_1 + 10);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4c);
      DAT_14028e48 = (*pcVar1)(iStack_4c,param_1 + 0x36);
      return 0;
    }
    if (local_56 == 1) {
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
      DAT_14028e48 = (*pcVar1)(local_54,param_1);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_50);
      DAT_14028e48 = (*pcVar1)(iStack_50,param_1 + 10);
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_4c);
      DAT_14028e48 = (*pcVar1)(iStack_4c,&local_44);
      uStack_2a = 0;
      iStack_26 = 0;
      uStack_2c = 100;
      pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_30);
      DAT_14028e48 = (*pcVar1)(iStack_30,&uStack_2c);
      if (iStack_26 == 2) {
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
        DAT_14028e48 = (*pcVar1)(local_54,&local_44);
        FUN_14008b20(0,(undefined2 *)(param_1 + 0x36),(int)&local_44);
      }
      else {
        FUN_14008b20(0,(undefined2 *)(param_1 + 0x36),(int)&local_44);
        if (local_36 != 0) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_54);
          DAT_14028e48 = (*pcVar1)(local_54,local_36);
          local_36 = 0;
          local_3e = 0;
          local_3a = 0;
        }
        pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
        DAT_14028e48 = (*pcVar1)(local_54,&local_44);
      }
      if (local_36 != 0) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_54);
        DAT_14028e48 = (*pcVar1)(local_54,local_36);
      }
      return 0;
    }
    return 0x10000;
  }
  if (param_4 != 0) {
    return 0x10000;
  }
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
  DAT_14028e48 = (*pcVar1)(local_54,param_1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&iStack_50);
  DAT_14028e48 = (*pcVar1)(iStack_50,&local_48);
  if (local_46 == 1) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
    DAT_14028e48 = (*pcVar1)(local_54,param_1 + 10);
    return 0;
  }
  uStack_2c = 0;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,6,&local_54);
  DAT_14028e48 = (*pcVar1)(local_54,&uStack_2c);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x1a,&iStack_50);
  DAT_14028e48 = (*pcVar1)(iStack_50,param_1,&uStack_2c);
  return 0;
}


