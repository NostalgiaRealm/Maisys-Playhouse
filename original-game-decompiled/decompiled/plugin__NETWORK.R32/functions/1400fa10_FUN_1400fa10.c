
/* ==== FUN_1400fa10 @ 1400fa10 ==== 
 * signature: undefined FUN_1400fa10(void)
 * body: 1400fa10-140101a2
 */

int FUN_1400fa10(int param_1,int param_2,int *param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  short sVar7;
  size_t sVar8;
  int *piVar9;
  char cVar10;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  int iStack_4c;
  int iStack_48;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  size_t sStack_40;
  undefined1 *puStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  size_t sStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined1 auStack_8 [8];
  
  iStack_34 = 8;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&iStack_48);
  DAT_14028e48 = (*pcVar3)(iStack_48,param_4,&iStack_38);
  uStack_50 = 0xd;
  uStack_4f = 10;
  uStack_4e = 0;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&iStack_30);
  DAT_14028e48 = (*pcVar3)(iStack_30,iStack_38,s_MfMp_TCP_1_1_140267cc);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_2c);
  DAT_14028e48 = (*pcVar3)(iStack_2c,iStack_38,&uStack_50);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_28);
  DAT_14028e48 = (*pcVar3)(iStack_28,iStack_38,s_Content_length__140267b8);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,(int *)&sStack_24);
  DAT_14028e48 = (*pcVar3)(sStack_24,&iStack_c,iStack_38);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_20);
  DAT_14028e48 = (*pcVar3)(iStack_20,iStack_38,s__140267b0);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_18);
  DAT_14028e48 = (*pcVar3)(iStack_18,iStack_38,&uStack_50);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,2,&iStack_14);
  DAT_14028e48 = (*pcVar3)(iStack_14,iStack_38,&uStack_50);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_10);
  DAT_14028e48 = (*pcVar3)(iStack_10,&sStack_40,iStack_38);
  puVar6 = (undefined1 *)(iStack_38 + 0x29);
  sStack_24 = sStack_40;
  iStack_4c = 0;
  puStack_3c = puVar6;
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 8)) {
    iStack_4c = 10;
    FUN_140101b0(param_1,puVar6,10,4,(int *)(param_2 + 8),0,(void *)0x0,'\x01');
    puVar6 = puStack_3c + iStack_4c;
  }
  iVar4 = *(int *)(param_2 + 0x30);
  if (iVar4 == 0) {
    cVar10 = '\x01';
    piVar9 = (int *)(param_2 + 0x2c);
    iStack_4c = iStack_4c + 10;
    sVar8 = 4;
    sVar7 = 0x28;
LAB_1400fd6f:
    FUN_140101b0(param_1,puVar6,sVar7,sVar8,piVar9,0,(void *)0x0,cVar10);
    puVar6 = puStack_3c + iStack_4c;
  }
  else {
    if (*(int *)(param_2 + 0x2c) == 0x4b0) {
      iStack_48 = -0x4ffc0000;
      uStack_41 = (undefined1)iVar4;
      uStack_42 = (undefined1)((uint)iVar4 >> 8);
      cVar10 = '\0';
      uStack_43 = (undefined1)((uint)iVar4 >> 0x10);
      piVar9 = &iStack_48;
      uStack_44 = (undefined1)((uint)iVar4 >> 0x18);
      iStack_4c = iStack_4c + 0xe;
      sVar8 = 8;
      sVar7 = 0x2a;
      goto LAB_1400fd6f;
    }
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&iStack_48);
    DAT_14028e48 = (*pcVar3)(iStack_48,&iStack_1c,param_2 + 0xc,*(undefined4 *)(param_1 + 0x50));
    if (iStack_1c != 0) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_48);
      DAT_14028e48 = (*pcVar3)(iStack_48,&sStack_40,param_2 + 0xc);
      sVar8 = sStack_40 + 1;
      cVar10 = '\0';
      piVar9 = (int *)(param_2 + 0xc);
      iStack_4c = iStack_4c + sStack_40 + 7;
      sVar7 = 0x29;
      sStack_40 = sVar8;
      goto LAB_1400fd6f;
    }
  }
  uVar1 = *(uint *)(param_2 + 0x138);
  if ((uVar1 & 0x40000) == 0) {
    pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,4,&iStack_48);
    DAT_14028e48 = (*pcVar3)(iStack_48,&iStack_1c,param_2 + 0x34,*(undefined4 *)(param_1 + 0x3e));
    if (iStack_1c != 0) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_48);
      DAT_14028e48 = (*pcVar3)(iStack_48,&sStack_40,param_2 + 0x34);
      sVar8 = sStack_40 + 1;
      piVar9 = (int *)(param_2 + 0x34);
      iStack_4c = iStack_4c + sStack_40 + 7;
      sVar7 = 0x1f;
      sStack_40 = sVar8;
      goto LAB_1400fe73;
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x134);
    iStack_48 = CONCAT31(CONCAT21(CONCAT11((char)uVar2,(char)((uint)uVar2 >> 8)),
                                  (char)((uint)uVar2 >> 0x10)),(char)((uint)uVar2 >> 0x18));
    uStack_41 = (undefined1)uVar1;
    iStack_4c = iStack_4c + 0xe;
    uStack_42 = (undefined1)(uVar1 >> 8);
    uStack_43 = (undefined1)(uVar1 >> 0x10);
    piVar9 = &iStack_48;
    uStack_44 = (undefined1)(uVar1 >> 0x18);
    sVar8 = 8;
    sVar7 = 0x1e;
LAB_1400fe73:
    FUN_140101b0(param_1,puVar6,sVar7,sVar8,piVar9,0,(void *)0x0,'\0');
    puVar6 = puStack_3c + iStack_4c;
  }
  if (*(short *)(param_2 + 0x23c) == 0x75) {
    iVar4 = FUN_140113c0(param_1,param_2 + 0x23c,&DAT_140267ac,puVar6,&iStack_4c,param_4,param_5,
                         (int *)&puStack_3c);
    if (iVar4 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,7,&iStack_48);
LAB_1401000a:
      DAT_14028e48 = (*pcVar3)(iStack_48,param_4);
      return iVar4;
    }
  }
  else if ((*(uint *)(param_2 + 0x268) & 0x200000) == 0) {
    if (*(short *)(param_2 + 0x23c) == 0) goto LAB_14010027;
    iVar4 = FUN_140104c0(param_1,(short *)(param_2 + 0x23c),&DAT_140267ac,puVar6,&iStack_4c,
                         *(uint *)(param_2 + 0x268),param_4,param_5,(int *)&puStack_3c);
    if (iVar4 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,7,&iStack_48);
      goto LAB_1401000a;
    }
  }
  else {
    puVar5 = (undefined4 *)FUN_14008a90(0,*(int *)(param_2 + 0x23e));
    uVar2 = *puVar5;
    *(undefined4 *)(param_2 + 0x242) = 0;
    *(undefined4 *)(param_2 + 0x23e) = uVar2;
    *(undefined4 *)(param_2 + 0x246) = 0;
    *(undefined4 *)(param_2 + 0x24a) = 0;
    *(undefined2 *)(param_2 + 0x23c) = 0x69;
    iVar4 = FUN_14010ee0(param_1,param_2 + 0x23c,&DAT_140267ac,puVar6,&iStack_4c,param_4,param_5,
                         (int *)&puStack_3c);
    if (iVar4 != 0) {
      pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,7,&iStack_48);
      goto LAB_1401000a;
    }
  }
  puVar6 = puStack_3c + iStack_4c;
LAB_14010027:
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_48);
  DAT_14028e48 = (*pcVar3)(iStack_48,&sStack_40,(undefined4 *)(param_2 + 0x26c));
  sVar8 = sStack_40 + 1;
  iStack_4c = iStack_4c + sStack_40 + 7;
  sStack_40 = sVar8;
  FUN_140101b0(param_1,puVar6,0x15,sVar8,(undefined4 *)(param_2 + 0x26c),0,(void *)0x0,'\0');
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,7,&iStack_30);
  DAT_14028e48 = (*pcVar3)(iStack_30,param_4);
  FUN_14012010(iStack_4c,(int)auStack_8);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&iStack_2c);
  DAT_14028e48 = (*pcVar3)(iStack_2c,&sStack_40,auStack_8);
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,6,&iStack_28);
  DAT_14028e48 = (*pcVar3)(iStack_28,param_4,&iStack_38);
  FID_conflict__memcpy((void *)(iStack_c + iStack_38),auStack_8,sStack_40);
  *param_3 = iStack_4c + sStack_24;
  pcVar3 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_34),1,7,&iStack_20);
  DAT_14028e48 = (*pcVar3)(iStack_20,param_4);
  return 0;
}


