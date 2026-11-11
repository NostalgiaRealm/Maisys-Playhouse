
/* ==== FUN_14012750 @ 14012750 ==== 
 * signature: bool __cdecl FUN_14012750(int param_1, short param_2, int param_3)
 * body: 14012750-14012ade
 */

bool __cdecl FUN_14012750(int param_1,short param_2,int param_3)

{
  code *pcVar1;
  undefined *puVar2;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
      DAT_14028e48 = (*pcVar1)(local_c,param_3,&DAT_14026b48);
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&iStack_4);
      DAT_14028e48 = (*pcVar1)(iStack_4,&iStack_8,param_1,&DAT_14026b44);
      if (iStack_8 != 0) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,param_3,param_1,iStack_8 - param_1);
        *(undefined1 *)((iStack_8 - param_1) + param_3) = 0;
      }
    }
    else {
      if (param_2 == 1) {
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,param_3,s_www_mfactory_com_14026b30);
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&iStack_4);
        DAT_14028e48 = (*pcVar1)(iStack_4,&iStack_8,param_1,&DAT_14026b44);
        if (iStack_8 != 0) {
          param_1 = iStack_8 + 3;
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,&iStack_8,param_1,&DAT_14026b2c);
        if (iStack_8 == 0) {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
          DAT_14028e48 = (*pcVar1)(local_c,param_3,param_1);
        }
        else {
          pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,1,&local_c);
          DAT_14028e48 = (*pcVar1)(local_c,param_3,param_1,iStack_8 - param_1);
          *(undefined1 *)((iStack_8 - param_1) + param_3) = 0;
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,&iStack_8,param_3,&DAT_140265e0);
        if (iStack_8 != 0) goto LAB_14012acd;
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_c);
        puVar2 = &DAT_14026b28;
      }
      else {
        if (param_2 != 2) goto LAB_14012acd;
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,param_3,&DAT_140267ac);
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&iStack_4);
        DAT_14028e48 = (*pcVar1)(iStack_4,&iStack_8,param_1,&DAT_14026b44);
        if (iStack_8 != 0) {
          param_1 = iStack_8 + 3;
        }
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xb,&local_c);
        DAT_14028e48 = (*pcVar1)(local_c,&iStack_8,param_1,&DAT_14026b2c);
        if (iStack_8 == 0) goto LAB_14012acd;
        puVar2 = (undefined *)(iStack_8 + 1);
        pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_c);
      }
      DAT_14028e48 = (*pcVar1)(local_c,param_3,puVar2);
    }
  }
LAB_14012acd:
  return DAT_14028e48 == 0;
}


