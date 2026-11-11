
/* ==== FUN_14013e30 @ 14013e30 ==== 
 * signature: undefined4 __cdecl FUN_14013e30(undefined4 param_1, int param_2, short * param_3, uint param_4, int * param_5, undefined4 * param_6, uint * param_7)
 * body: 14013e30-140144cf
 */

undefined4 __cdecl
FUN_14013e30(undefined4 param_1,int param_2,short *param_3,uint param_4,int *param_5,
            undefined4 *param_6,uint *param_7)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int local_424;
  undefined4 uStack_420;
  int iStack_41c;
  int local_418;
  undefined1 auStack_414 [8];
  int iStack_40c;
  int iStack_408;
  int iStack_404;
  undefined1 local_400 [2];
  undefined1 auStack_3fe [254];
  undefined1 local_300 [256];
  undefined1 auStack_200 [512];
  
  iVar4 = 0;
  if (*(int *)(param_2 + 2) == 900) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_424);
    DAT_14028e48 = (*pcVar2)(local_424,local_400,&DAT_14026be0);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x38),1,3,&iStack_41c);
    DAT_14028e48 = (*pcVar2)(iStack_41c,param_1,param_2,auStack_3fe);
  }
  else {
    FUN_14008990(local_400,&DAT_14026398);
    if (*(int *)(param_2 + 6) != 0) {
      FUN_14008990(local_300,&DAT_14026398);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_424);
      DAT_14028e48 = (*pcVar2)(local_424,&local_418,local_300);
      iVar4 = local_418 + 1;
    }
  }
  FUN_140124c0((int)local_400);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_424);
  DAT_14028e48 = (*pcVar2)(local_424,&local_418,local_400);
  bVar1 = false;
  iVar4 = iVar4 + local_418;
  auStack_200[0] = 0;
  uVar3 = FUN_14013900(param_1,auStack_200,param_3);
  if (uVar3 != 0) goto LAB_140144c3;
  FUN_140124c0((int)auStack_200);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_424);
  DAT_14028e48 = (*pcVar2)(local_424,&local_418,auStack_200);
  iVar4 = iVar4 + local_418;
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_41c);
  DAT_14028e48 = (*pcVar2)(iStack_41c,&local_418,"mMsg/1.1");
  uVar5 = iVar4 + local_418 + 5;
  if (param_4 != 0) {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_424);
    DAT_14028e48 = (*pcVar2)(local_424,auStack_414,&DAT_14026bdc);
    if ((((param_4 & 0x80000000) == 0) || ((param_4 & 0x40000000) == 0)) ||
       ((param_4 & 0x20000000) == 0)) {
      bVar1 = true;
    }
    if (bVar1) {
      if ((param_4 & 0x80000000) == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
        DAT_14028e48 = (*pcVar2)(local_424,auStack_414,&DAT_14026bd4);
      }
      if ((param_4 & 0x40000000) == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
        DAT_14028e48 = (*pcVar2)(local_424,auStack_414,&DAT_14026bd0);
      }
      if ((param_4 & 0x20000000) == 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
        puVar6 = &DAT_14026bcc;
        goto LAB_14014191;
      }
    }
    else {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
      puVar6 = &DAT_14026bd8;
LAB_14014191:
      DAT_14028e48 = (*pcVar2)(local_424,auStack_414,puVar6);
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_424);
    DAT_14028e48 = (*pcVar2)(local_424,&local_418,auStack_414);
    uVar5 = uVar5 + local_418 + 2;
  }
  uVar3 = FUN_14012ae0(uVar5,param_6,param_7);
  if ((char)uVar3 != '\0') {
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_424);
    uVar3 = (*pcVar2)(local_424,*param_6,&uStack_420);
    DAT_14028e48 = uVar3;
    if (uVar3 == 0) {
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&local_424);
      DAT_14028e48 = (*pcVar2)(local_424,uStack_420,local_400);
      if ((*(int *)(param_2 + 6) != 0) && (*(int *)(param_2 + 2) != 900)) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
        DAT_14028e48 = (*pcVar2)(local_424,uStack_420,&DAT_140265e0);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_41c);
        DAT_14028e48 = (*pcVar2)(iStack_41c,uStack_420,local_300);
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
      DAT_14028e48 = (*pcVar2)(local_424,uStack_420,&DAT_14026b7c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_41c);
      DAT_14028e48 = (*pcVar2)(iStack_41c,uStack_420,auStack_200);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_40c);
      DAT_14028e48 = (*pcVar2)(iStack_40c,uStack_420,&DAT_14026b7c);
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_408);
      DAT_14028e48 = (*pcVar2)(iStack_408,uStack_420,"mMsg/1.1");
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_404);
      DAT_14028e48 = (*pcVar2)(iStack_404,uStack_420,&DAT_14026b18);
      if (param_4 != 0) {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&local_424);
        DAT_14028e48 = (*pcVar2)(local_424,uStack_420,auStack_414);
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_41c);
        DAT_14028e48 = (*pcVar2)(iStack_41c,uStack_420,&DAT_14026b18);
      }
      pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_424);
      DAT_14028e48 = (*pcVar2)(local_424,*param_6);
      uVar3 = DAT_14028e48 >> 8;
      *param_7 = *param_7 - uVar5;
      *param_5 = *param_5 + (uVar5 - 1);
      return CONCAT31((int3)uVar3,1);
    }
  }
LAB_140144c3:
  return uVar3 & 0xffffff00;
}


