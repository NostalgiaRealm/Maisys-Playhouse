
/* ==== FUN_12005e70 @ 12005e70 ==== 
 * signature: uint __cdecl FUN_12005e70(int param_1, int param_2)
 * body: 12005e70-120060fd
 */

uint __cdecl FUN_12005e70(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined1 *puStack_84;
  undefined1 *local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  int iStack_70;
  int iStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined4 uStack_62;
  int local_54 [21];
  
  uVar3 = 0;
  if ((*(int *)(param_1 + 2) == *(int *)(param_2 + 0xc)) &&
     (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    if ((*(uint *)(param_1 + 0x2e) & 2) != 0) {
      return 0x10000;
    }
    if ((*(char *)(param_1 + 0x1c) != '\0') && (*(int *)(param_1 + 0x14) < 0x100)) {
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,local_54);
      DAT_12039a9c = (*pcVar1)(local_54[0],&local_80,0xff);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,(int *)&uStack_68);
      DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_66,uStack_68),&puStack_84,0xff);
      *local_80 = 0;
      *puStack_84 = 0;
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,10,(int *)&uStack_7c);
      DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_7a,uStack_7c),param_1,*(undefined4 *)(param_1 + 0x18)
                               ,local_80);
      FUN_120069a0(local_80,puStack_84);
      uVar3 = FUN_12006600(param_1,puStack_84);
      if ((*(short *)(param_1 + 0x2c) == 1) && (uVar3 == 0)) {
        FUN_12006800(param_1);
      }
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,local_54);
      DAT_12039a9c = (*pcVar1)(local_54[0],local_80);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,(int *)&uStack_68);
      DAT_12039a9c = (*pcVar1)(CONCAT22(uStack_66,uStack_68),puStack_84);
      if (uVar3 != 0) {
        uStack_7c = 0x17;
        uStack_7a = 0x9c5;
        uStack_78 = 0;
        uStack_76 = 0;
        uStack_68 = 100;
        uStack_66 = 0x6a;
        uStack_64 = 0;
        uStack_62 = 5;
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x15,&iStack_70);
        piVar6 = local_54;
        puVar4 = &uStack_68;
        puVar5 = &uStack_7c;
        uVar2 = FUN_12027340(param_1);
        DAT_12039a9c = (*pcVar1)(iStack_70,uVar2,puVar4,puVar5,piVar6);
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x17,&iStack_6c);
        piVar6 = local_54;
        uVar2 = FUN_12027340(param_1);
        DAT_12039a9c = (*pcVar1)(iStack_6c,uVar2,piVar6);
      }
    }
  }
  else {
    uVar3 = 0x10000;
  }
  return uVar3;
}


