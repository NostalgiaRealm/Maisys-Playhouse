
/* ==== FUN_00470ca0 @ 00470ca0 ==== 
 * signature: undefined __fastcall FUN_00470ca0(void * param_1)
 * body: 00470ca0-00470f69;00470f7e-00471054
 */

void __fastcall FUN_00470ca0(void *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  short sVar11;
  char *pcVar12;
  char *pcVar13;
  CDocument *this;
  undefined4 *unaff_FS_OFFSET;
  bool bVar14;
  short sVar15;
  undefined1 *puVar16;
  int *piVar17;
  int *piVar18;
  byte local_25c [256];
  byte local_15c [252];
  CDocument *local_60;
  int local_5c;
  undefined1 local_58 [16];
  int local_48;
  undefined1 local_44 [16];
  undefined1 local_34;
  char local_30 [2];
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  byte local_2a;
  char *local_26;
  int *local_20;
  int *local_1c;
  undefined1 local_18;
  code *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00470f6a;
  *unaff_FS_OFFSET = &local_10;
  if ((*(int *)((int)param_1 + 0x9a) != 0) && (*(int *)((int)param_1 + 0xa2) != 0)) {
    FUN_004705e0((int)param_1);
    if (*(LPVOID *)((int)param_1 + 0x9a) != (LPVOID)0x0) {
      FUN_0043ba20(*(LPVOID *)((int)param_1 + 0x9a));
      *(undefined4 *)((int)param_1 + 0x9a) = 0;
    }
  }
  if (*(char *)((int)param_1 + 0xac) != '\0') {
    iVar3 = FUN_00470c80((int)param_1);
    if ((char)iVar3 != '\0') {
      FUN_0042fe50(*(void **)((int)param_1 + 0x96),local_30);
      if (local_26 == (char *)0x0) {
        local_25c[0] = 0;
      }
      else {
        uVar8 = 0xffffffff;
        pcVar12 = local_26;
        do {
          pcVar13 = pcVar12;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar13 = pcVar12 + 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar13;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pbVar6 = (byte *)(pcVar13 + -uVar8);
        pbVar10 = local_25c;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pbVar10 = *(undefined4 *)pbVar6;
          pbVar6 = pbVar6 + 4;
          pbVar10 = pbVar10 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pbVar10 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          pbVar10 = pbVar10 + 1;
        }
        FUN_0043ba20(local_26);
      }
      if ((local_2a & 1) == 0) {
        sVar11 = 1;
        uVar5 = FUN_0046e970((int)param_1);
        if (0 < (short)uVar5) {
          do {
            iVar3 = FUN_0046e950(param_1,sVar11);
            if (iVar3 != 0) {
              piVar4 = (int *)FUN_00458a00(iVar3);
              (**(code **)(*piVar4 + 0x70))(local_15c);
              pbVar6 = local_15c;
              pbVar10 = local_25c;
              do {
                bVar2 = *pbVar6;
                bVar14 = bVar2 < *pbVar10;
                if (bVar2 != *pbVar10) {
LAB_00470fdd:
                  iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                  goto LAB_00470fe2;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar6[1];
                bVar14 = bVar2 < pbVar10[1];
                if (bVar2 != pbVar10[1]) goto LAB_00470fdd;
                pbVar6 = pbVar6 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_00470fe2:
              if (iVar7 == 0) {
                iVar3 = FUN_00409590(*(int *)(iVar3 + 0x82));
                FUN_00410700(iVar3);
              }
            }
            sVar11 = sVar11 + 1;
            uVar5 = FUN_0046e970((int)param_1);
          } while (sVar11 <= (short)uVar5);
        }
      }
      else {
        DAT_004dc57c = 1;
        (**(code **)(*(int *)DAT_004dc578 + 0x110))();
        local_60 = (CDocument *)FUN_004a5fed(0x86);
        this = (CDocument *)0x0;
        local_8 = 0;
        if (local_60 != (CDocument *)0x0) {
          this = FUN_00451220(local_60);
        }
        local_8 = 0xffffffff;
        if (this == (CDocument *)0x0) goto LAB_00471045;
        FUN_00451960(this,(char *)local_25c);
        *(CDocument **)(DAT_004dc578 + 0x4c) = this;
        CDocument::AddView(this,DAT_004dc578);
        local_14 = (code *)FUN_004b478b((int)DAT_004d99a8);
        piVar4 = (int *)FUN_004b479d(DAT_004d99a8,&local_14);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x60))(this);
        }
        iVar3 = DAT_004da378;
        DAT_004dc57c = 0;
        if (DAT_004da378 != 0) {
          FUN_00402f50(*(void **)(DAT_004da378 + 0x82),0,local_30[0]);
          FUN_0042fe50((void *)CONCAT22(uStack_2c,uStack_2e),&local_5c);
          if (local_5c == 0) {
            local_20 = (int *)0x0;
          }
          else {
            piVar18 = (int *)0x0;
            puVar16 = local_58;
            piVar17 = (int *)0x0;
            sVar11 = 3;
            piVar4 = (int *)FUN_00458a00(iVar3);
            local_20 = FUN_0043e510(piVar4,sVar11,(int)puVar16,piVar17,piVar18);
          }
          if (local_48 == 0) {
            local_1c = (int *)0x0;
          }
          else {
            piVar18 = (int *)0x0;
            puVar16 = local_44;
            piVar17 = (int *)0x0;
            sVar11 = 3;
            piVar4 = (int *)FUN_00458a00(iVar3);
            local_1c = FUN_0043e510(piVar4,sVar11,(int)puVar16,piVar17,piVar18);
          }
          FUN_004083e0(*(void **)(iVar3 + 0x82),local_1c,(int)local_20);
          sVar11 = 1;
          local_60 = *(CDocument **)(*(int *)(iVar3 + 0x82) + 0x32);
          local_14 = *(code **)local_60;
          (**(code **)(local_14 + 0xe4))();
          if (0 < *(int *)(CONCAT22(uStack_2c,uStack_2e) + 0x26)) {
            local_14 = *(code **)(local_14 + 0xe8);
            do {
              FUN_00430370((void *)CONCAT22(uStack_2c,uStack_2e),(int)sVar11,&local_5c);
              if (local_5c == 0) {
                local_20 = (int *)0x0;
              }
              else {
                piVar18 = (int *)0x0;
                puVar16 = local_58;
                piVar17 = (int *)0x0;
                sVar15 = 3;
                piVar4 = (int *)FUN_00458a00(iVar3);
                local_20 = FUN_0043e510(piVar4,sVar15,(int)puVar16,piVar17,piVar18);
              }
              if (local_48 == 0) {
                local_1c = (int *)0x0;
              }
              else {
                piVar18 = (int *)0x0;
                puVar16 = local_44;
                piVar17 = (int *)0x0;
                sVar15 = 3;
                piVar4 = (int *)FUN_00458a00(iVar3);
                local_1c = FUN_0043e510(piVar4,sVar15,(int)puVar16,piVar17,piVar18);
              }
              sVar11 = sVar11 + 1;
              local_18 = local_34;
              (*local_14)(&local_20);
            } while ((int)sVar11 <= *(int *)(CONCAT22(uStack_2c,uStack_2e) + 0x26));
          }
        }
      }
      if (CONCAT22(uStack_2c,uStack_2e) != 0) {
        (*(code *)**(undefined4 **)CONCAT22(uStack_2c,uStack_2e))(1);
      }
    }
    *(undefined1 *)((int)param_1 + 0xac) = 0;
  }
  if ((*(int *)((int)param_1 + 0x96) == 0) || (*(int *)(*(int *)((int)param_1 + 0x96) + 0x26) == 0))
  {
    *(undefined4 *)((int)param_1 + 0xa2) = 0;
    DAT_004dc57c = 0;
    DAT_004dc574 = 0;
    DAT_004dc578 = (CView *)0x0;
  }
LAB_00471045:
  *unaff_FS_OFFSET = local_10;
  return;
}


