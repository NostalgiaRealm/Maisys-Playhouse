
/* ==== FUN_1200b8a0 @ 1200b8a0 ==== 
 * signature: undefined4 __cdecl FUN_1200b8a0(int param_1, int param_2)
 * body: 1200b8a0-1200bb74
 */

undefined4 __cdecl FUN_1200b8a0(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  code *pcVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int local_8c;
  int iStack_88;
  undefined2 uStack_84;
  undefined4 uStack_82;
  undefined4 uStack_7e;
  int local_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined4 uStack_62;
  undefined1 auStack_54 [84];
  
  iVar1 = *(int *)(param_2 + 0xc);
  if ((*(int *)(param_1 + 2) == iVar1) && (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    if (*(char *)(param_1 + 0x9c) == '\0') {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,0xe,&local_8c);
      DAT_12039a9c = (*pcVar3)(local_8c,&local_78);
      dVar2 = (double)CONCAT44(uStack_74,local_78) * 0.001;
      *(undefined4 *)(param_1 + 0xa6) = 0;
      *(double *)(param_1 + 0x9e) = dVar2;
      *(double *)(param_1 + 0xae) = dVar2;
      *(undefined4 *)(param_1 + 0xaa) = 0;
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,0,&iStack_88);
      uVar8 = 0;
      uVar6 = 1;
      lVar4 = __ftol();
      DAT_12039a9c = (*pcVar3)(iStack_88,param_1,0,(int)lVar4,uVar6,uVar8);
      *(undefined1 *)(param_1 + 0x9c) = 1;
      uStack_68 = 100;
      uStack_66 = 0xc9;
      uStack_62 = 5;
      uStack_84 = 0x17;
      uStack_82 = 0x1f5;
      uStack_7e = 0;
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x15,&iStack_70);
      puVar9 = auStack_54;
      puVar5 = &uStack_68;
      puVar7 = &uStack_84;
      uVar6 = FUN_12027340(param_1);
      DAT_12039a9c = (*pcVar3)(iStack_70,uVar6,puVar5,puVar7,puVar9);
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x17,&iStack_6c);
      puVar9 = auStack_54;
      uVar6 = FUN_12027340(param_1);
      DAT_12039a9c = (*pcVar3)(iStack_6c,uVar6,puVar9);
    }
    return 0;
  }
  if (((*(int *)(param_1 + 0xc) != iVar1) || (*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x10)))
     && (iVar1 != 0x7d2)) {
    return 0x10000;
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x14),1,1,&local_78);
    DAT_12039a9c = (*pcVar3)(local_78,param_1,0);
    *(undefined1 *)(param_1 + 0x9c) = 0;
    uStack_68 = 100;
    uStack_66 = 0xc9;
    uStack_62 = 5;
    uStack_84 = 0x17;
    uStack_82 = 0x1f6;
    uStack_7e = 0;
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x15,&local_8c);
    puVar9 = auStack_54;
    puVar5 = &uStack_68;
    puVar7 = &uStack_84;
    uVar6 = FUN_12027340(param_1);
    DAT_12039a9c = (*pcVar3)(local_8c,uVar6,puVar5,puVar7,puVar9);
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x17,&iStack_88);
    puVar9 = auStack_54;
    uVar6 = FUN_12027340(param_1);
    DAT_12039a9c = (*pcVar3)(iStack_88,uVar6,puVar9);
  }
  return 0;
}


