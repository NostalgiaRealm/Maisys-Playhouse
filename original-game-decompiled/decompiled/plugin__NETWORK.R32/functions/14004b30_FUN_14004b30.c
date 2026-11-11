
/* ==== FUN_14004b30 @ 14004b30 ==== 
 * signature: int __cdecl FUN_14004b30(int * param_1)
 * body: 14004b30-140055c5
 */

int __cdecl FUN_14004b30(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  short local_82e;
  int iStack_82c;
  uint local_828;
  int local_824;
  uint local_820;
  int iStack_81c;
  uint uStack_818;
  int iStack_814;
  int iStack_810;
  int iStack_80c;
  int iStack_808;
  int iStack_804;
  int iStack_800;
  int iStack_7fc;
  uint local_7f8;
  undefined1 auStack_7f4 [64];
  uint uStack_7b4;
  undefined1 auStack_7b0 [4];
  char acStack_7ac [64];
  int iStack_76c;
  undefined1 auStack_764 [68];
  undefined4 uStack_720;
  char cStack_71c;
  int iStack_71a;
  undefined1 auStack_714 [4];
  undefined1 uStack_710;
  undefined1 uStack_70f;
  undefined1 uStack_70e;
  undefined1 auStack_6de [72];
  undefined1 auStack_696 [118];
  undefined1 local_620 [244];
  undefined1 auStack_52c [146];
  int iStack_49a;
  int iStack_126;
  short sStack_100;
  uint uStack_fe;
  int iStack_fa;
  undefined4 local_f4 [61];
  
  iVar3 = *(int *)((int)param_1 + 0x516);
  if (*(short *)(iVar3 + 2) == 0) {
    *(undefined2 *)(iVar3 + 2) = 0xb;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,(int *)&local_7f8);
    DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),1,
                             local_620);
    iVar3 = FUN_1400d280();
    if (iVar3 != 0) {
      if (iVar3 == -2) {
        FUN_14007300((int)param_1,*param_1,0x835,0);
      }
      return 0x10000;
    }
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,(int *)&local_7f8);
    DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),1,
                             local_620);
    return 0;
  }
  if (0 < *(short *)(iVar3 + 0xe)) {
    local_82e = 0;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&local_824);
    iVar3 = 1;
    DAT_14028e48 = (*pcVar2)(local_824,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x20),
                             &local_828);
    if (0 < *(short *)(*(int *)((int)param_1 + 0x516) + 0xe)) {
      do {
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&local_824);
        DAT_14028e48 = (*pcVar2)(local_824,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x20),
                                 iVar3,&uStack_7b4);
        iVar5 = iVar3;
        if (cStack_71c != '\0') {
          local_82e = local_82e + 1;
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_82c);
          DAT_14028e48 = (*pcVar2)(iStack_82c,*(undefined4 *)((int)param_1 + 0x6a),uStack_7b4,
                                   auStack_52c);
          iStack_81c = DAT_14028e48;
          if ((DAT_14028e48 != 0) || (uVar9 = 0, iStack_49a != iStack_71a)) {
            pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,&iStack_814);
            DAT_14028e48 = (*pcVar2)(iStack_814,*(undefined4 *)((int)param_1 + 0x6a),&uStack_818);
            uVar8 = 1;
            uVar9 = DAT_14028e48;
            if (uStack_818 != 0) {
              do {
                pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,&iStack_810);
                DAT_14028e48 = (*pcVar2)(iStack_810,*(undefined4 *)((int)param_1 + 0x6a),uVar8,
                                         auStack_52c);
                uVar9 = DAT_14028e48;
                if (iStack_49a == iStack_71a) {
                  iStack_81c = 0;
                  uStack_7b4 = uVar8;
                  break;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 <= uStack_818);
            }
          }
          DAT_14028e48 = uVar9;
          if ((iStack_76c == 0) && (acStack_7ac[0] == '\0')) {
            local_820 = 0;
            FUN_14007300((int)param_1,*(int *)(iStack_126 + 2),0x89b,(int)auStack_764);
          }
          else {
            iStack_81c = FUN_14006490(param_1,*(int *)((int)param_1 + 0x516),(int)auStack_7b0,
                                      local_f4,&local_820,iStack_126,(int)auStack_764,0);
          }
          if (iStack_81c == 0) {
            if (iStack_fa == 0) {
              uStack_fe = local_820;
              if (local_820 != 0) {
                FUN_14007300((int)param_1,*(int *)(iStack_126 + 2),0x89a,(int)acStack_7ac);
              }
            }
            else {
              local_7f8 = local_820;
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&iStack_80c);
              DAT_14028e48 = (*pcVar2)(iStack_80c,auStack_7f4,auStack_764);
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_808);
              DAT_14028e48 = (*pcVar2)(iStack_808,iStack_fa,&local_7f8);
            }
            sStack_100 = sStack_100 + -1;
            pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,&iStack_804);
            DAT_14028e48 = (*pcVar2)(iStack_804,*(undefined4 *)((int)param_1 + 0x6a),uStack_7b4,
                                     auStack_52c);
          }
          else {
            pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&iStack_800);
            DAT_14028e48 = (*pcVar2)(iStack_800,*(undefined4 *)((int)param_1 + 0x6a),uStack_7b4);
          }
          FUN_1400d5d0(CONCAT31(SUB43(auStack_764._64_4_,1),
                                *(undefined1 *)(*(int *)((int)param_1 + 0x516) + 0x72)),uStack_720);
          pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,5,&iStack_7fc);
          iVar5 = iVar3 + -1;
          DAT_14028e48 = (*pcVar2)(iStack_7fc,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x20)
                                   ,iVar3);
          local_828 = local_828 - 1;
        }
        iVar3 = iVar5 + 1;
      } while (local_82e < *(short *)(*(int *)((int)param_1 + 0x516) + 0xe));
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 0xe) = 0;
  }
  sVar7 = *(short *)(*(int *)((int)param_1 + 0x516) + 4);
  if (0 < sVar7) {
    uVar8 = 0;
    if (sVar7 != 0) {
      do {
        iVar3 = FUN_14006490(param_1,*(int *)((int)param_1 + 0x516),0,local_f4,&local_820,0,0,0);
        if (iVar3 != 0) {
          *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 4) = 0;
          return iVar3;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (uint)(int)*(short *)(*(int *)((int)param_1 + 0x516) + 4));
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 4) = 0;
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 2) = 1;
  }
  if (0 < *(short *)(*(int *)((int)param_1 + 0x516) + 8)) {
    *(undefined1 *)(*(int *)((int)param_1 + 0x516) + 0x19) = 1;
    iVar3 = *(int *)((int)param_1 + 0x516);
    FUN_14006cf0(param_1,iVar3,*(short *)(iVar3 + 8),iVar3 + 0x74);
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 8) = 0;
    *(undefined1 *)(*(int *)((int)param_1 + 0x516) + 0x19) = 0;
  }
  iVar3 = *(int *)((int)param_1 + 0x516);
  if (0 < *(short *)(iVar3 + 10)) {
    FUN_14006cf0(param_1,iVar3,*(short *)(iVar3 + 10),iVar3 + 0xc4);
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 10) = 0;
  }
  sVar7 = *(short *)(*(int *)((int)param_1 + 0x516) + 0xc);
  if (0 < sVar7) {
    iStack_82c = 0x30;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,(int *)&local_7f8);
    uVar8 = 2;
    DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                             &local_828);
    if (1 < local_828) {
      do {
        if (sVar7 < 1) break;
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_82c),1,6,(int *)&local_7f8);
        sVar6 = 0;
        DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                                 uVar8,auStack_714);
        if (0 < *(short *)(*(int *)((int)param_1 + 0x516) + 0xc)) {
          do {
            bVar1 = FUN_1400d520((int)auStack_696,
                                 (int *)(sVar6 * 4 + *(int *)((int)param_1 + 0x516) + 0x18c));
            if (bVar1) {
              sVar7 = sVar7 + -1;
              uStack_70e = 1;
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_82c),1,7,&local_824);
              DAT_14028e48 = (*pcVar2)(local_824,
                                       *(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),uVar8,
                                       auStack_714);
              break;
            }
            sVar6 = sVar6 + 1;
          } while (sVar6 < *(short *)(*(int *)((int)param_1 + 0x516) + 0xc));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 <= local_828);
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 0xc) = 0;
  }
  sVar7 = *(short *)(*(int *)((int)param_1 + 0x516) + 6);
  if (0 < sVar7) {
    iStack_82c = 0x30;
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,(int *)&local_7f8);
    uVar8 = 2;
    DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                             &local_828);
    if (1 < local_828) {
      do {
        if (sVar7 < 1) break;
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_82c),1,6,(int *)&local_7f8);
        sVar6 = 0;
        DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                                 uVar8,auStack_714);
        if (0 < *(short *)(*(int *)((int)param_1 + 0x516) + 6)) {
          do {
            bVar1 = FUN_1400d520((int)auStack_696,
                                 (int *)(sVar6 * 4 + *(int *)((int)param_1 + 0x516) + 0x13c));
            if (bVar1) {
              sVar7 = sVar7 + -1;
              uStack_70f = 1;
              uStack_710 = 1;
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + iStack_82c),1,7,&local_824);
              DAT_14028e48 = (*pcVar2)(local_824,
                                       *(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),uVar8,
                                       auStack_714);
              puVar10 = auStack_6de;
              uVar9 = 0x89c;
              iVar3 = FUN_14008a80((int)param_1);
              FUN_14007300((int)param_1,iVar3,uVar9,(int)puVar10);
              break;
            }
            sVar6 = sVar6 + 1;
          } while (sVar6 < *(short *)(*(int *)((int)param_1 + 0x516) + 6));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 <= local_828);
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 6) = 0;
  }
  sVar7 = *(short *)(*(int *)((int)param_1 + 0x516) + 0x1a);
  if (0 < sVar7) {
    iStack_82c = CONCAT22(iStack_82c._2_2_,sVar7);
    pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,9,(int *)&local_7f8);
    uVar8 = 2;
    DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                             &local_828);
    if (1 < local_828) {
      do {
        if ((short)iStack_82c < 1) break;
        pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,6,(int *)&local_7f8);
        sVar7 = 0;
        DAT_14028e48 = (*pcVar2)(local_7f8,*(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),
                                 uVar8,auStack_714);
        if (0 < *(short *)(*(int *)((int)param_1 + 0x516) + 0x1a)) {
          do {
            bVar1 = FUN_1400d520((int)auStack_696,
                                 (int *)(sVar7 * 4 + *(int *)((int)param_1 + 0x516) + 0xec));
            if (bVar1) {
              iStack_82c = CONCAT22(iStack_82c._2_2_,(short)iStack_82c + -1);
              uStack_710 = 0;
              FUN_1400d500((int)auStack_696);
              FUN_140074e0(param_1,(int)auStack_714);
              pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,7,&local_824);
              DAT_14028e48 = (*pcVar2)(local_824,
                                       *(undefined4 *)(*(int *)((int)param_1 + 0x516) + 0x1c),uVar8,
                                       auStack_714);
              puVar10 = auStack_6de;
              uVar9 = 0x89f;
              iVar3 = FUN_14008a80((int)param_1);
              FUN_14007300((int)param_1,iVar3,uVar9,(int)puVar10);
              break;
            }
            sVar7 = sVar7 + 1;
          } while (sVar7 < *(short *)(*(int *)((int)param_1 + 0x516) + 0x1a));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 <= local_828);
    }
    *(undefined2 *)(*(int *)((int)param_1 + 0x516) + 0x1a) = 0;
  }
  pcVar4 = (char *)(*(int *)((int)param_1 + 0x516) + 0x18);
  if (*pcVar4 != '\0') {
    *pcVar4 = '\0';
    FUN_14005dd0(param_1,*(int *)((int)param_1 + 0x516));
  }
  return 0;
}


