
/* ==== FUN_14019c60 @ 14019c60 ==== 
 * signature: char * __cdecl FUN_14019c60(int param_1, byte * param_2)
 * body: 14019c60-14019f22
 */

char * __cdecl FUN_14019c60(int param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  size_t sVar11;
  undefined4 *puVar12;
  undefined **ppuVar13;
  bool bVar14;
  int local_8c;
  int local_88;
  byte local_84 [132];
  
  if ((param_1 < 0) || (5 < param_1)) {
    return (char *)0x0;
  }
  __lock(0x13);
  DAT_14029f80 = DAT_14029f80 + 1;
  while (DAT_14029f84 != 0) {
    Sleep(1);
  }
  if (param_1 != 0) {
    if (param_2 == (byte *)0x0) {
      pcVar4 = (&DAT_14027094)[param_1 * 3];
    }
    else {
      pcVar4 = (char *)FUN_14019f30(param_1,param_2);
    }
    goto LAB_14019ef9;
  }
  bVar3 = true;
  local_8c = 0;
  if (param_2 != (byte *)0x0) {
    if (((*param_2 == 0x4c) && (param_2[1] == 0x43)) && (param_2[2] == 0x5f)) {
      do {
        pcVar4 = _strpbrk((char *)param_2,"=;");
        if (((pcVar4 == (char *)0x0) || (sVar11 = (int)pcVar4 - (int)param_2, sVar11 == 0)) ||
           (*pcVar4 == ';')) {
          FUN_1401a650(0x13);
          DAT_14029f80 = DAT_14029f80 + -1;
          return (char *)0x0;
        }
        local_88 = 1;
        ppuVar13 = &PTR_s_LC_COLLATE_1402709c;
        do {
          iVar5 = _strncmp(*ppuVar13,(char *)param_2,sVar11);
          if (iVar5 == 0) {
            uVar8 = 0xffffffff;
            pcVar6 = *ppuVar13;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 != '\0');
            if (~uVar8 - 1 == sVar11) break;
          }
          ppuVar13 = ppuVar13 + 3;
          local_88 = local_88 + 1;
        } while (ppuVar13 < (undefined **)((int)&PTR_s_LC_TIME_140270cc + 1));
        pcVar4 = pcVar4 + 1;
        sVar11 = _strcspn(pcVar4,";");
        if ((sVar11 == 0) && (*pcVar4 != ';')) {
          FUN_1401a650(0x13);
          DAT_14029f80 = DAT_14029f80 + -1;
          return (char *)0x0;
        }
        if (local_88 < 6) {
          _strncpy((char *)local_84,pcVar4,sVar11);
          local_84[sVar11] = 0;
          iVar5 = FUN_14019f30(local_88,local_84);
          if (iVar5 != 0) {
            local_8c = local_8c + 1;
          }
        }
      } while ((pcVar4[sVar11] != '\0') && (param_2 = (byte *)(pcVar4 + sVar11 + 1), *param_2 != 0))
      ;
      if (local_8c == 0) {
        pcVar4 = (char *)0x0;
        goto LAB_14019ef9;
      }
    }
    else {
      pcVar6 = FUN_1401a1a0(param_2,(char *)local_84,(undefined4 *)0x0,(uint *)0x0);
      pcVar4 = (char *)0x0;
      if (pcVar6 == (char *)0x0) goto LAB_14019ef9;
      iVar5 = 0;
      puVar12 = &DAT_14027094;
      do {
        if ((LPVOID *)puVar12 != &DAT_14027094) {
          pbVar9 = local_84;
          pbVar10 = (byte *)*puVar12;
          do {
            bVar2 = *pbVar9;
            bVar14 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_14019e93:
              iVar7 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
              goto LAB_14019e98;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar9[1];
            bVar14 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_14019e93;
            pbVar9 = pbVar9 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          iVar7 = 0;
LAB_14019e98:
          if ((iVar7 == 0) || (iVar7 = FUN_14019f30(iVar5,local_84), iVar7 != 0)) {
            local_8c = local_8c + 1;
          }
          else {
            bVar3 = false;
          }
        }
        puVar12 = puVar12 + 3;
        iVar5 = iVar5 + 1;
      } while (puVar12 < (undefined4 *)((int)&PTR_DAT_140270d0 + 1));
      if (bVar3) {
        pcVar4 = FUN_1401a0b0();
        FUN_1401dd10(DAT_14027094);
        DAT_14027094 = (LPVOID)0x0;
        goto LAB_14019ef9;
      }
      if (local_8c == 0) {
        pcVar4 = (char *)0x0;
        goto LAB_14019ef9;
      }
    }
  }
  pcVar4 = FUN_1401a0b0();
LAB_14019ef9:
  FUN_1401a650(0x13);
  DAT_14029f80 = DAT_14029f80 + -1;
  return pcVar4;
}


