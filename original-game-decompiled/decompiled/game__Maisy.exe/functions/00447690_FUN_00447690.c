
/* ==== FUN_00447690 @ 00447690 ==== 
 * signature: undefined __fastcall FUN_00447690(int * param_1)
 * body: 00447690-00447954
 */

void __fastcall FUN_00447690(int *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  undefined4 uVar6;
  HGLOBAL pvVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  short sVar12;
  short sVar13;
  short *psVar14;
  short *psVar15;
  int iVar16;
  byte local_814 [1024];
  char local_414 [1024];
  uint local_14;
  LPVOID local_10;
  short local_a;
  short sStack_8;
  char local_6;
  char local_5;
  
  if (*(short *)((int)param_1 + 0x152) == 0) {
    (**(code **)(*param_1 + 0x474))();
  }
  if (*(short *)((int)param_1 + 0x152) == 1) {
    sStack_8 = 0;
    piVar5 = FUN_0046da90(param_1,'\x01','\x01');
    uVar6 = FUN_00449950(piVar5);
    sVar4 = (short)uVar6;
    if (sVar4 != 0) {
      psVar15 = &local_a;
      psVar14 = &sStack_8;
      sVar12 = sVar4;
      piVar5 = FUN_0046da90(param_1,'\x01','\x01');
      pvVar7 = (HGLOBAL)FUN_00449900(piVar5);
      bVar2 = FUN_00447610(pvVar7,sVar12,psVar14,psVar15);
      if ((bVar2) && (cVar3 = (**(code **)(*param_1 + 0x464))(), cVar3 != '\0')) {
        local_6 = '\x01';
        iVar16 = 0x3ff;
        pcVar11 = local_414;
        local_10 = (LPVOID)0x0;
        local_14 = 0;
        local_5 = '\0';
        sVar12 = sStack_8;
        sVar13 = local_a;
        piVar5 = FUN_0046da90(param_1,'\x01','\x01');
        pvVar7 = (HGLOBAL)FUN_00449900(piVar5);
        FUN_004475a0(pvVar7,sVar4,sVar12,sVar13,(int)pcVar11,iVar16);
        bVar2 = FUN_0046d320(local_414,local_814,0x3ff,(int *)&local_10,&local_14,&local_5);
        uVar8 = local_14;
        if (bVar2) {
          if (local_10 == (LPVOID)0x0) {
            uVar8 = 0xffffffff;
            pbVar10 = local_814;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              bVar1 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar1 != 0);
            uVar8 = ~uVar8 - 1;
            cVar3 = (**(code **)(*param_1 + 0x46c))
                              (CONCAT13(local_5,CONCAT12(local_6,sStack_8)),
                               CONCAT22(sStack_8,local_a),local_814,uVar8);
            if (cVar3 == '\0') {
              local_6 = '\0';
            }
          }
          else {
            cVar3 = (**(code **)(*param_1 + 0x46c))
                              (CONCAT13(local_5,CONCAT12(local_6,sStack_8)),
                               CONCAT22(sStack_8,local_a),local_10,local_14);
            if (cVar3 == '\0') {
              local_6 = '\0';
            }
            if (local_5 != '\0') {
              FUN_0043ba20(local_10);
            }
          }
        }
        else {
          uVar8 = 0xffffffff;
          pcVar11 = local_414;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar3 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar3 != '\0');
          uVar8 = ~uVar8 - 1;
        }
        local_a = sStack_8 + (short)uVar8;
        if (local_6 != '\0') {
          do {
            sVar4 = *(short *)((int)param_1 + 0x15a);
            sStack_8 = local_a;
            bVar2 = FUN_00447610(*(HGLOBAL *)((int)param_1 + 0x14a),sVar4,&sStack_8,&local_a);
            if (bVar2) {
              FUN_004475a0(*(HGLOBAL *)((int)param_1 + 0x14a),sVar4,sStack_8,local_a,(int)local_414,
                           0x3ff);
              bVar2 = FUN_0046d320(local_414,local_814,0x3ff,(int *)&local_10,&local_14,&local_5);
              uVar8 = local_14;
              if (bVar2) {
                if (local_10 == (LPVOID)0x0) {
                  uVar8 = 0xffffffff;
                  pbVar10 = local_814;
                  do {
                    if (uVar8 == 0) break;
                    uVar8 = uVar8 - 1;
                    bVar1 = *pbVar10;
                    pbVar10 = pbVar10 + 1;
                  } while (bVar1 != 0);
                  cVar3 = (**(code **)(*param_1 + 0x46c))
                                    (CONCAT13(local_5,CONCAT12(local_6,sStack_8)),
                                     CONCAT22(sStack_8,local_a),local_814,~uVar8 - 1);
                  uVar8 = ~uVar8 - 1;
                  if (cVar3 == '\0') break;
                }
                else {
                  cVar3 = (**(code **)(*param_1 + 0x46c))
                                    (CONCAT13(local_5,CONCAT12(local_6,sStack_8)),
                                     CONCAT22(sStack_8,local_a),local_10,local_14);
                  if (cVar3 == '\0') break;
                  if (local_5 != '\0') {
                    FUN_0043ba20(local_10);
                  }
                }
              }
              else {
                uVar9 = 0xffffffff;
                pcVar11 = local_414;
                do {
                  if (uVar9 == 0) break;
                  uVar9 = uVar9 - 1;
                  cVar3 = *pcVar11;
                  pcVar11 = pcVar11 + 1;
                } while (cVar3 != '\0');
                uVar8 = ~uVar9 - 1;
                if (uVar8 == 0) {
                  uVar8 = ~uVar9;
                }
              }
              local_a = sStack_8 + (short)uVar8;
            }
          } while (sStack_8 < sVar4);
        }
        (**(code **)(*param_1 + 0x468))();
      }
    }
  }
  return;
}


