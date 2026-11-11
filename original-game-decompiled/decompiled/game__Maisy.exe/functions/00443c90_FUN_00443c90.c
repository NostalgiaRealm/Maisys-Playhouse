
/* ==== FUN_00443c90 @ 00443c90 ==== 
 * signature: undefined __cdecl FUN_00443c90(int param_1, int param_2, uint param_3, char param_4, short * param_5, short param_6, short param_7, short param_8)
 * body: 00443c90-004442db
 */

void __cdecl
FUN_00443c90(int param_1,int param_2,uint param_3,char param_4,short *param_5,short param_6,
            short param_7,short param_8)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  short *psVar9;
  int iVar10;
  undefined2 *puVar11;
  int iVar12;
  short *psVar13;
  short *psVar14;
  char *pcVar15;
  int iVar16;
  int local_10;
  ushort uStack_6;
  
  uVar7 = (ushort)(DAT_004db854 == 2);
  if (DAT_004db850 != 8) {
    iVar2 = *(int *)(&DAT_004db7ba + param_1 * 0x1a);
    iVar4 = (int)param_3 / 2;
    iVar12 = param_2 / 2;
    if (param_4 == '\0') {
      iVar5 = iVar12;
      iVar10 = 0;
      while (iVar3 = iVar10, iVar16 = iVar5, iVar16 < (iVar4 - (short)uVar7) + iVar12) {
        psVar9 = (short *)(iVar2 + iVar16 * 2);
        if (param_6 == 0x100) {
          sVar8 = param_5[iVar3];
        }
        else {
          sVar8 = param_6;
          if (DAT_004db854 == 2) {
            sVar8 = param_7;
          }
          sVar8 = (short)((int)param_5[iVar3] * (int)sVar8 +
                          ((int)param_5[iVar3] * (int)sVar8 >> 0x1f & 0xffU) >> 8);
        }
        iVar5 = (int)sVar8 + (int)*psVar9;
        iVar10 = DAT_004db884 - iVar5;
        iVar5 = iVar5 + ((int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3);
        DAT_004db880 = DAT_004db884 + (short)((int)(iVar5 + (iVar5 >> 0x1f & 0x3fU)) >> 6);
        if (iVar5 < 0x8000) {
          if (iVar5 < -0x8000) {
            iVar5 = -0x8000;
          }
        }
        else {
          iVar5 = 0x7fff;
        }
        if (DAT_004db880 <= 0x7fff) {
          if (DAT_004db880 < -0x8000) {
            DAT_004db880 = -0x8000;
          }
        }
        else {
          DAT_004db880 = 0x7fff;
        }
        *psVar9 = (short)iVar5;
        iVar10 = iVar3 + 1;
        iVar5 = iVar16 + 1;
        if (DAT_004db854 == 2) {
          psVar9 = (short *)(iVar2 + (iVar16 + 1) * 2);
          if (param_6 == 0x100) {
            sVar8 = param_5[iVar10];
          }
          else {
            sVar8 = (short)((int)param_5[iVar10] * (int)param_8 +
                            ((int)param_5[iVar10] * (int)param_8 >> 0x1f & 0xffU) >> 8);
          }
          iVar5 = (int)*psVar9 + (int)sVar8;
          iVar10 = DAT_004db884 - iVar5;
          iVar5 = iVar5 + ((int)(iVar10 + (iVar10 >> 0x1f & 7U)) >> 3);
          DAT_004db880 = DAT_004db884 + (short)((int)(iVar5 + (iVar5 >> 0x1f & 0x3fU)) >> 6);
          if (iVar5 < 0x8000) {
            if (iVar5 < -0x8000) {
              iVar5 = -0x8000;
            }
          }
          else {
            iVar5 = 0x7fff;
          }
          if (DAT_004db880 <= 0x7fff) {
            if (DAT_004db880 < -0x8000) {
              DAT_004db880 = -0x8000;
            }
          }
          else {
            DAT_004db880 = 0x7fff;
          }
          *psVar9 = (short)iVar5;
          iVar5 = iVar16 + 2;
          iVar10 = iVar3 + 2;
        }
      }
    }
    else if (DAT_004db854 == 1) {
      if (param_6 == 0x100) {
        if (iVar12 < iVar12 + iVar4) {
          iVar5 = iVar4;
          psVar9 = (short *)(iVar2 + iVar12 * 2);
          do {
            *psVar9 = *param_5;
            param_5 = param_5 + 1;
            iVar5 = iVar5 + -1;
            psVar9 = psVar9 + 1;
          } while (iVar5 != 0);
        }
      }
      else if (iVar12 < iVar12 + iVar4) {
        iVar5 = iVar4;
        puVar11 = (undefined2 *)(iVar2 + iVar12 * 2);
        do {
          iVar5 = iVar5 + -1;
          *puVar11 = (short)((int)*param_5 * (int)param_6 +
                             ((int)*param_5 * (int)param_6 >> 0x1f & 0xffU) >> 8);
          puVar11 = puVar11 + 1;
          param_5 = param_5 + 1;
        } while (iVar5 != 0);
      }
    }
    else {
      iVar5 = (iVar4 - (short)uVar7) + iVar12;
      if (iVar12 < iVar5) {
        iVar10 = iVar12;
        iVar16 = 0;
        do {
          iVar10 = iVar10 + 2;
          *(short *)(iVar2 + -4 + iVar10 * 2) =
               (short)((int)param_5[iVar16] * (int)param_7 +
                       ((int)param_5[iVar16] * (int)param_7 >> 0x1f & 0xffU) >> 8);
          *(short *)(iVar2 + -2 + iVar10 * 2) =
               (short)((int)param_5[iVar16 + 1] * (int)param_8 +
                       ((int)param_5[iVar16 + 1] * (int)param_8 >> 0x1f & 0xffU) >> 8);
          iVar16 = iVar16 + 2;
        } while (iVar10 < iVar5);
      }
    }
    if (param_4 == '\0') {
      return;
    }
    iVar4 = iVar4 + iVar12;
    if (DAT_004db7aa / 2 <= iVar4) {
      return;
    }
    if (DAT_004db7aa / 2 <= iVar4) {
      return;
    }
    puVar11 = (undefined2 *)(iVar2 + iVar4 * 2);
    do {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_004db7aa / 2);
    return;
  }
  iVar2 = *(int *)(&DAT_004db7ba + param_1 * 0x1a);
  if (param_4 == '\0') {
    local_10 = 0;
    iVar4 = param_2;
    while (iVar5 = local_10, iVar12 = iVar4, iVar12 < (int)((param_3 - (int)(short)uVar7) + param_2)
          ) {
      cVar6 = *(char *)((int)param_5 + iVar5) + -0x80;
      if (param_6 != 0x100) {
        sVar8 = param_6;
        if (DAT_004db854 == 2) {
          sVar8 = param_7;
        }
        cVar6 = (char)((uint)((int)cVar6 * (int)sVar8) >> 8);
      }
      sVar8 = (short)cVar6 + (short)(char)(*(char *)(iVar2 + iVar12) + -0x80);
      if (0x7f < sVar8) {
        sVar8 = 0x7f;
      }
      if (sVar8 < -0x80) {
        sVar8 = -0x80;
      }
      *(char *)(iVar2 + iVar12) = (char)sVar8 + -0x80;
      iVar4 = iVar12 + 1;
      local_10 = iVar5 + 1;
      if (DAT_004db854 == 2) {
        pcVar15 = (char *)(iVar2 + iVar12 + 1);
        cVar6 = *(char *)((int)param_5 + iVar5 + 1) + -0x80;
        if (param_6 != 0x100) {
          cVar6 = (char)((uint)((int)cVar6 * (int)param_8) >> 8);
        }
        sVar8 = (short)cVar6 + (short)(char)(*pcVar15 + -0x80);
        if (0x7f < sVar8) {
          sVar8 = 0x7f;
        }
        if (sVar8 < -0x80) {
          sVar8 = -0x80;
        }
        *pcVar15 = (char)sVar8 + -0x80;
        iVar4 = iVar12 + 2;
        local_10 = iVar5 + 2;
      }
    }
    goto LAB_00443f83;
  }
  if (DAT_004db854 != 1) {
    iVar4 = (param_3 - (int)(short)uVar7) + param_2;
    if (param_2 < iVar4) {
      iVar12 = param_2;
      iVar5 = 0;
      do {
        iVar12 = iVar12 + 2;
        *(char *)(iVar2 + -2 + iVar12) =
             (char)((uint)((int)(char)(*(char *)((int)param_5 + iVar5) + -0x80) * (int)param_7) >> 8
                   ) + -0x80;
        *(char *)(iVar2 + -1 + iVar12) =
             (char)((uint)((int)(char)(*(char *)((int)param_5 + iVar5 + 1) + -0x80) * (int)param_8)
                   >> 8) + -0x80;
        iVar5 = iVar5 + 2;
      } while (iVar12 < iVar4);
    }
    goto LAB_00443f83;
  }
  if (param_6 != 0x100) {
    iVar4 = 0;
    if (param_2 < (int)(param_3 + param_2)) {
      iVar12 = param_2;
      do {
        pcVar15 = (char *)((int)param_5 + iVar4);
        iVar12 = iVar12 + 1;
        iVar4 = iVar4 + 1;
        *(char *)(iVar2 + -1 + iVar12) =
             (char)((uint)((int)(char)(*pcVar15 + -0x80) * (int)param_6) >> 8) + -0x80;
      } while (iVar12 < (int)(param_3 + param_2));
    }
    goto LAB_00443f83;
  }
  if ((((uint)param_5 & 1) != 0) || (psVar9 = (short *)(param_2 + iVar2), ((uint)psVar9 & 1) != 0))
  {
    iVar4 = 0;
    iVar12 = param_2;
    while (iVar12 < (int)(param_3 + param_2)) {
      puVar1 = (undefined1 *)((int)param_5 + iVar4);
      iVar12 = iVar12 + 1;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(iVar2 + -1 + iVar12) = *puVar1;
    }
    goto LAB_00443f83;
  }
  uStack_6 = (ushort)((int)param_3 >> 1);
  psVar14 = param_5;
  if (3 < (short)uStack_6) {
    uVar7 = uStack_6 >> 2;
    uStack_6 = uStack_6 + uVar7 * -4;
    do {
      *psVar9 = *psVar14;
      psVar9[1] = psVar14[1];
      psVar13 = psVar14 + 3;
      psVar9[2] = psVar14[2];
      psVar14 = psVar14 + 4;
      psVar9[3] = *psVar13;
      psVar9 = psVar9 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (uStack_6 == 1) {
LAB_00443d89:
    *psVar9 = *psVar14;
  }
  else {
    if (uStack_6 == 2) {
LAB_00443d7d:
      sVar8 = *psVar14;
      psVar14 = psVar14 + 1;
      *psVar9 = sVar8;
      psVar9 = psVar9 + 1;
      goto LAB_00443d89;
    }
    if (uStack_6 == 3) {
      sVar8 = *psVar14;
      psVar14 = psVar14 + 1;
      *psVar9 = sVar8;
      psVar9 = psVar9 + 1;
      goto LAB_00443d7d;
    }
  }
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_3 + param_2 + -1 + iVar2) = *(undefined1 *)((param_3 - 1) + (int)param_5);
  }
LAB_00443f83:
  if ((param_4 != '\0') && (iVar4 = param_2 + param_3, iVar4 < DAT_004db7aa)) {
    do {
      iVar4 = iVar4 + 1;
      *(undefined1 *)(iVar2 + -1 + iVar4) = 0x80;
    } while (iVar4 < DAT_004db7aa);
    return;
  }
  return;
}


