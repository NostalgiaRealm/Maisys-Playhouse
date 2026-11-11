
/* ==== FUN_00444ca0 @ 00444ca0 ==== 
 * signature: int __cdecl FUN_00444ca0(int param_1, int param_2, int param_3, int param_4, int param_5, int * param_6)
 * body: 00444ca0-00445df6
 */

int __cdecl FUN_00444ca0(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  undefined2 uVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short sVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short *local_14;
  short *local_c;
  short *local_8;
  
  psVar9 = DAT_004db7a6;
  iVar12 = DAT_004db79e;
  iVar4 = 0;
  local_8 = (short *)0x0;
  iVar10 = 0;
  if (DAT_004db850 != 8) {
    iVar2 = param_5 / 2;
    if (param_4 == 1) {
      if ((param_2 == 1) && (1 < param_3)) {
        psVar11 = DAT_004db7a6;
        if (0 < param_1) {
          do {
            if (DAT_004db7aa / 2 <= iVar2) break;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 1;
            iVar10 = iVar10 + 1;
            *psVar11 = (*(char *)(iVar12 + -1 + iVar4) + 0x80) * 0x100;
            psVar11 = psVar11 + 1;
          } while (iVar4 < param_1);
        }
        local_8 = (short *)(iVar10 * 2);
        *param_6 = iVar4;
      }
      if ((1 < param_2) && (param_3 == 1)) {
        if (iVar4 < param_1 / 2) {
          local_14 = (short *)(iVar4 * 2 + DAT_004db79e);
          do {
            if (DAT_004db7aa / 2 <= iVar2) break;
            sVar5 = 0;
            if (0 < param_2) {
              psVar11 = psVar9 + iVar10;
              do {
                if (DAT_004db7aa / 2 <= iVar10) break;
                sVar5 = sVar5 + 1;
                *psVar11 = *local_14;
                iVar10 = iVar10 + 1;
                iVar2 = iVar2 + 1;
                psVar11 = psVar11 + 1;
              } while (sVar5 < param_2);
            }
            local_14 = local_14 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_1 / 2);
        }
        local_8 = (short *)(iVar10 * 2);
        *param_6 = iVar4 * 2;
      }
    }
    iVar12 = DAT_004db79e;
    if (param_4 == 1) {
      if ((1 < param_2) && (1 < param_3)) {
        while ((iVar4 < param_1 && (iVar2 < DAT_004db7aa / 2))) {
          sVar5 = 0;
          iVar13 = iVar10;
          iVar14 = iVar2;
          if (0 < param_2) {
            do {
              iVar10 = iVar13;
              iVar2 = iVar14;
              if (DAT_004db7aa / 2 <= iVar14) break;
              iVar10 = iVar13 + 1;
              iVar2 = iVar14 + 1;
              psVar9[iVar13] = (*(char *)(iVar12 + iVar4) + 0x80) * 0x100;
              if (DAT_004db854 == 2) {
                iVar10 = iVar13 + 2;
                iVar2 = iVar14 + 2;
                psVar9[iVar13 + 1] = (((char *)(iVar12 + iVar4))[1] + 0x80) * 0x100;
              }
              sVar5 = sVar5 + 1;
              iVar13 = iVar10;
              iVar14 = iVar2;
            } while (sVar5 < param_2);
          }
          iVar4 = iVar4 + DAT_004db854;
        }
        local_8 = (short *)(iVar10 * 2);
        *param_6 = iVar4;
      }
      if ((param_2 < 1) && (param_3 == 1)) {
        if (iVar4 < param_1 / 2) {
          local_c = (short *)(iVar4 * 2 + DAT_004db79e);
          psVar11 = psVar9 + iVar10;
          do {
            if (DAT_004db7aa / 2 <= iVar2) break;
            iVar2 = iVar2 + 1;
            *psVar11 = *local_c;
            iVar4 = iVar4 + -param_2;
            psVar11 = psVar11 + 1;
            iVar10 = iVar10 + 1;
            local_c = local_c + -param_2;
          } while (iVar4 < param_1 / 2);
        }
        local_8 = (short *)(iVar10 * 2);
        *param_6 = iVar4 * 2;
        param_2 = -param_2;
      }
    }
    iVar12 = DAT_004db79e;
    if (((param_4 == 1) && (param_2 < 1)) && (1 < param_3)) {
      param_2 = -param_2;
      if (iVar4 < param_1) {
        psVar11 = psVar9 + iVar10;
        do {
          if (DAT_004db7aa / 2 <= iVar2) break;
          iVar2 = iVar2 + 1;
          iVar10 = iVar10 + 1;
          pcVar7 = (char *)(iVar12 + iVar4);
          iVar4 = iVar4 + param_2;
          *psVar11 = (*pcVar7 + 0x80) * 0x100;
          psVar11 = psVar11 + 1;
        } while (iVar4 < param_1);
      }
      local_8 = (short *)(iVar10 * 2);
      *param_6 = iVar4;
    }
    if (((1 < param_4) && (param_2 == 1)) && (param_3 == 1)) {
      if (iVar4 < param_1 / 2) {
        psVar11 = (short *)(iVar4 * 2 + DAT_004db79e);
        local_8 = psVar9 + iVar10;
        do {
          if (DAT_004db7aa / 2 + -1 <= iVar2) break;
          *local_8 = *psVar11;
          iVar2 = iVar2 + 2;
          sVar5 = *psVar11;
          psVar11 = psVar11 + 1;
          local_8[1] = sVar5;
          iVar4 = iVar4 + 1;
          iVar10 = iVar10 + 2;
          local_8 = local_8 + 2;
        } while (iVar4 < param_1 / 2);
      }
      local_8 = (short *)(iVar10 * 2);
      *param_6 = iVar4 * 2;
    }
    iVar12 = DAT_004db79e;
    if (param_4 < 2) {
LAB_00445911:
      iVar12 = DAT_004db79e;
      if (1 < param_4) {
        if ((1 < param_2) && (1 < param_3)) {
          while ((iVar4 < param_1 && (iVar2 < DAT_004db7aa / 2 + -1))) {
            sVar5 = 0;
            if (0 < param_2) {
              psVar11 = psVar9 + iVar10;
              do {
                if (DAT_004db7aa / 2 + -1 <= iVar2) break;
                sVar5 = sVar5 + 1;
                iVar10 = iVar10 + 2;
                iVar2 = iVar2 + 2;
                *psVar11 = (*(char *)(iVar12 + iVar4) + 0x80) * 0x100;
                psVar11[1] = (*(char *)(iVar12 + iVar4) + 0x80) * 0x100;
                psVar11 = psVar11 + 2;
              } while (sVar5 < param_2);
            }
            iVar4 = iVar4 + 1;
          }
          local_8 = (short *)(iVar10 * 2);
          *param_6 = iVar4;
        }
        goto LAB_004459bf;
      }
LAB_00445a63:
      iVar12 = DAT_004db79e;
      if (((1 < param_4) && (param_2 < 1)) && (1 < param_3)) {
        param_2 = -param_2;
        if (iVar4 < param_1) {
          psVar11 = psVar9 + iVar10;
          do {
            if (DAT_004db7aa / 2 + -1 <= iVar2) break;
            iVar2 = iVar2 + 2;
            pcVar7 = (char *)(iVar12 + iVar4);
            iVar4 = iVar4 + param_2;
            iVar10 = iVar10 + 2;
            *psVar11 = (*pcVar7 + 0x80) * 0x100;
            psVar11[1] = (*pcVar7 + 0x80) * 0x100;
            psVar11 = psVar11 + 2;
          } while (iVar4 < param_1);
        }
        local_8 = (short *)(iVar10 * 2);
        *param_6 = iVar4;
      }
    }
    else {
      if ((param_2 == 1) && (1 < param_3)) {
        if (iVar4 < param_1) {
          psVar11 = psVar9 + iVar10;
          do {
            if (DAT_004db7aa / 2 + -1 <= iVar2) break;
            iVar2 = iVar2 + 2;
            pcVar7 = (char *)(iVar12 + iVar4);
            iVar4 = iVar4 + 1;
            iVar10 = iVar10 + 2;
            *psVar11 = (*pcVar7 + 0x80) * 0x100;
            psVar11[1] = (*pcVar7 + 0x80) * 0x100;
            psVar11 = psVar11 + 2;
          } while (iVar4 < param_1);
        }
        local_8 = (short *)(iVar10 * 2);
        *param_6 = iVar4;
      }
      if (1 < param_4) {
        if ((1 < param_2) && (param_3 == 1)) {
          if (iVar4 < param_1 / 2) {
            psVar11 = (short *)(iVar4 * 2 + DAT_004db79e);
            do {
              if (DAT_004db7aa / 2 + -1 <= iVar2) break;
              sVar5 = 0;
              if (0 < param_2) {
                psVar3 = psVar9 + iVar10;
                do {
                  *psVar3 = *psVar11;
                  iVar10 = iVar10 + 2;
                  iVar2 = iVar2 + 2;
                  psVar3[1] = *psVar11;
                  sVar5 = sVar5 + 1;
                  psVar3 = psVar3 + 2;
                } while (sVar5 < param_2);
              }
              psVar11 = psVar11 + 1;
              iVar4 = iVar4 + 1;
            } while (iVar4 < param_1 / 2);
          }
          local_8 = (short *)(iVar10 * 2);
          *param_6 = iVar4 * 2;
        }
        goto LAB_00445911;
      }
LAB_004459bf:
      if (1 < param_4) {
        if ((param_2 < 1) && (param_3 == 1)) {
          if (iVar4 < param_1 / 2) {
            local_8 = (short *)(iVar4 * 2 + DAT_004db79e);
            psVar11 = psVar9 + iVar10;
            do {
              if (DAT_004db7aa / 2 + -1 <= iVar2) break;
              iVar2 = iVar2 + 2;
              *psVar11 = *local_8;
              iVar4 = iVar4 + -param_2;
              psVar11[1] = *local_8;
              iVar10 = iVar10 + 2;
              local_8 = local_8 + -param_2;
              psVar11 = psVar11 + 2;
            } while (iVar4 < param_1 / 2);
          }
          local_8 = (short *)(iVar10 * 2);
          *param_6 = iVar4 * 2;
          param_2 = -param_2;
        }
        goto LAB_00445a63;
      }
    }
    if (((param_4 < 1) && (param_2 == 1)) && (param_3 == 1)) {
      if (iVar4 < param_1 / 2) {
        psVar11 = (short *)(iVar4 * 2 + DAT_004db79e);
        local_c = psVar9 + iVar10;
        do {
          if (DAT_004db7aa / 2 <= iVar2) break;
          *local_c = *psVar11;
          iVar2 = iVar2 + 1;
          psVar11 = psVar11 + 2;
          iVar4 = iVar4 + 2;
          iVar10 = iVar10 + 1;
          local_c = local_c + 1;
        } while (iVar4 < param_1 / 2);
      }
      local_8 = (short *)(iVar10 * 2);
      *param_6 = iVar4 * 2;
    }
    iVar12 = DAT_004db79e;
    if (param_4 < 1) {
      if ((param_2 == 1) && (1 < param_3)) {
        if (iVar4 < param_1) {
          psVar11 = psVar9 + iVar10;
          do {
            if (DAT_004db7aa / 2 <= iVar2) break;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 2;
            iVar10 = iVar10 + 1;
            *psVar11 = (*(char *)(iVar12 + -2 + iVar4) + 0x80) * 0x100;
            psVar11 = psVar11 + 1;
          } while (iVar4 < param_1);
        }
        local_8 = (short *)(iVar10 * 2);
        *param_6 = iVar4;
      }
      if (param_4 < 1) {
        if ((1 < param_2) && (param_3 == 1)) {
          if (iVar4 < param_1 / 2) {
            local_c = (short *)(iVar4 * 2 + DAT_004db79e);
            do {
              if (DAT_004db7aa / 2 + -1 <= iVar2) break;
              sVar5 = 0;
              if (0 < param_2) {
                psVar11 = psVar9 + iVar10;
                do {
                  sVar5 = sVar5 + 1;
                  *psVar11 = *local_c;
                  iVar10 = iVar10 + 1;
                  iVar2 = iVar2 + 1;
                  psVar11 = psVar11 + 1;
                } while (sVar5 < param_2);
              }
              local_c = local_c + 2;
              iVar4 = iVar4 + 2;
            } while (iVar4 < param_1 / 2);
          }
          local_8 = (short *)(iVar10 * 2);
          *param_6 = iVar4 * 2;
        }
        goto LAB_00445c5e;
      }
    }
    else {
LAB_00445c5e:
      iVar12 = DAT_004db79e;
      if (0 < param_4) goto LAB_00445d83;
      if ((1 < param_2) && (1 < param_3)) {
        while ((iVar4 < param_1 && (iVar2 < DAT_004db7aa / 2 + -1))) {
          sVar5 = 0;
          if (0 < param_2) {
            psVar11 = psVar9 + iVar10;
            do {
              sVar5 = sVar5 + 1;
              iVar10 = iVar10 + 1;
              iVar2 = iVar2 + 1;
              *psVar11 = (*(char *)(iVar12 + iVar4) + 0x80) * 0x100;
              psVar11 = psVar11 + 1;
            } while (sVar5 < param_2);
          }
          iVar4 = iVar4 + 2;
        }
        local_8 = (short *)(iVar10 * 2);
        *param_6 = iVar4;
      }
    }
    if (0 < param_4) {
      return (int)local_8;
    }
    if ((param_2 < 1) && (param_3 == 1)) {
      if (iVar2 < DAT_004db7aa / 2) {
        local_8 = (short *)(iVar4 * 2 + DAT_004db79e);
        psVar11 = psVar9 + iVar10;
        do {
          if (DAT_004db7aa / 2 <= iVar4) break;
          iVar2 = iVar2 + 1;
          *psVar11 = *local_8;
          psVar11 = psVar11 + 1;
          iVar10 = iVar10 + 1;
          local_8 = local_8 + param_2 * -2;
          iVar4 = iVar4 + param_2 * -2;
        } while (iVar2 < DAT_004db7aa / 2);
      }
      local_8 = (short *)(iVar10 * 2);
      *param_6 = iVar4 * 2;
      param_2 = -param_2;
    }
LAB_00445d83:
    iVar12 = DAT_004db79e;
    if (0 < param_4) {
      return (int)local_8;
    }
    if (0 < param_2) {
      return (int)local_8;
    }
    if (param_3 < 2) {
      return (int)local_8;
    }
    if (iVar4 < param_1) {
      psVar9 = psVar9 + iVar10;
      do {
        if (DAT_004db7aa / 2 <= iVar2) break;
        iVar2 = iVar2 + 1;
        pcVar7 = (char *)(iVar12 + iVar4);
        iVar4 = iVar4 + param_2 * -2;
        iVar10 = iVar10 + 1;
        *psVar9 = (*pcVar7 + 0x80) * 0x100;
        psVar9 = psVar9 + 1;
      } while (iVar4 < param_1);
    }
    *param_6 = iVar4;
    return iVar10 * 2;
  }
  if (param_4 == 1) {
    if ((param_2 == 1) && (param_3 < 1)) {
      if (param_5 < DAT_004db7aa) {
        do {
          if (param_1 / 2 <= iVar4) break;
          *(char *)((int)psVar9 + iVar10) =
               (char)((ushort)*(undefined2 *)(iVar12 + iVar4 * 2) >> 8) + -0x80;
          if (DAT_004db854 == 2) {
            ((char *)((int)psVar9 + iVar10))[1] =
                 (char)((ushort)*(undefined2 *)(iVar12 + 2 + iVar4 * 2) >> 8) + -0x80;
          }
          param_5 = param_5 + DAT_004db854;
          iVar4 = iVar4 + DAT_004db854;
          iVar10 = iVar10 + DAT_004db854;
        } while (param_5 < DAT_004db7aa);
      }
      *param_6 = iVar4 * 2;
      local_8 = (short *)iVar10;
    }
    iVar10 = DAT_004db79e;
    if ((1 < param_2) && (param_3 == 1)) {
      if (param_5 < DAT_004db7aa) {
        do {
          if (param_1 <= iVar4) break;
          sVar5 = 0;
          iVar12 = (int)local_8;
          if (0 < param_2) {
            do {
              local_8 = (short *)iVar12;
              if (DAT_004db7aa <= param_5) break;
              sVar5 = sVar5 + 1;
              local_8 = (short *)(iVar12 + 1);
              param_5 = param_5 + 1;
              *(undefined1 *)(iVar12 + (int)psVar9) = *(undefined1 *)(iVar10 + iVar4);
              iVar12 = (int)local_8;
            } while (sVar5 < param_2);
          }
          iVar4 = iVar4 + 1;
        } while (param_5 < DAT_004db7aa);
      }
      *param_6 = iVar4;
    }
  }
  if (param_4 == 1) {
    if ((1 < param_2) && (param_3 < 1)) {
      if (param_5 < DAT_004db7aa) {
        local_c = (short *)(iVar4 * 2 + DAT_004db79e);
        do {
          if (param_1 / 2 <= iVar4) break;
          sVar5 = 0;
          iVar10 = (int)local_8;
          if (0 < param_2) {
            do {
              local_8 = (short *)iVar10;
              if (DAT_004db7aa <= iVar10) break;
              sVar5 = sVar5 + 1;
              local_8 = (short *)(iVar10 + 1);
              param_5 = param_5 + 1;
              *(char *)(iVar10 + (int)psVar9) = (char)((ushort)*local_c >> 8) + -0x80;
              iVar10 = (int)local_8;
            } while (sVar5 < param_2);
          }
          param_5 = param_5 + 1;
          iVar4 = iVar4 + 1;
          local_c = local_c + 1;
        } while (param_5 < DAT_004db7aa);
      }
      *param_6 = iVar4 * 2;
    }
    iVar10 = DAT_004db79e;
    if ((param_2 < 1) && (param_3 == 1)) {
      param_2 = -param_2;
      if (param_5 < DAT_004db7aa) {
        do {
          if (param_1 <= iVar4) break;
          puVar6 = (undefined1 *)(iVar4 + iVar10);
          param_5 = param_5 + 1;
          iVar4 = iVar4 + param_2;
          *(undefined1 *)((int)local_8 + (int)psVar9) = *puVar6;
          local_8 = (short *)((int)local_8 + 1);
        } while (param_5 < DAT_004db7aa);
      }
      *param_6 = iVar4;
    }
  }
  iVar10 = DAT_004db79e;
  if (((param_4 == 1) && (param_2 < 1)) && (param_3 < 1)) {
    param_2 = -param_2;
    if (param_5 < DAT_004db7aa) {
      do {
        if (param_1 / 2 <= iVar4) break;
        *(char *)((int)psVar9 + (int)local_8) =
             (char)((ushort)*(undefined2 *)(iVar10 + iVar4 * 2) >> 8) + -0x80;
        if (DAT_004db854 == 2) {
          ((char *)((int)psVar9 + (int)local_8))[1] =
               (char)((ushort)*(undefined2 *)(iVar10 + 2 + iVar4 * 2) >> 8) + -0x80;
        }
        param_5 = param_5 + DAT_004db854;
        iVar4 = iVar4 + DAT_004db854 * param_2;
        local_8 = (short *)((int)local_8 + DAT_004db854);
      } while (param_5 < DAT_004db7aa);
    }
    *param_6 = iVar4 * 2;
  }
  iVar10 = DAT_004db79e;
  if (((1 < param_4) && (param_2 == 1)) && (param_3 == 1)) {
    for (; (iVar4 < param_1 && (param_5 < DAT_004db7aa + -1)); param_5 = param_5 + 2) {
      puVar6 = (undefined1 *)((int)psVar9 + (int)local_8);
      local_8 = (short *)((int)local_8 + 2);
      *puVar6 = *(undefined1 *)(iVar4 + iVar10);
      puVar6[1] = *(undefined1 *)(iVar4 + iVar10);
      iVar4 = iVar4 + 1;
    }
    *param_6 = iVar4;
  }
  if (param_4 < 2) {
LAB_00445082:
    if (1 < param_4) {
      if ((1 < param_2) && (param_3 < 1)) {
        if (iVar4 < param_1 / 2) {
          local_c = (short *)(iVar4 * 2 + DAT_004db79e);
          do {
            if (DAT_004db7aa + -1 <= param_5) break;
            sVar5 = 0;
            if (0 < param_2) {
              do {
                sVar5 = sVar5 + 1;
                pcVar7 = (char *)((int)psVar9 + (int)local_8);
                local_8 = (short *)((int)local_8 + 2);
                param_5 = param_5 + 2;
                *pcVar7 = (char)((ushort)*local_c >> 8) + -0x80;
                pcVar7[1] = (char)((ushort)*local_c >> 8) + -0x80;
              } while (sVar5 < param_2);
            }
            local_c = local_c + 1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_1 / 2);
        }
        *param_6 = iVar4 * 2;
      }
      goto LAB_00445123;
    }
LAB_0044517c:
    if (((1 < param_4) && (param_2 < 1)) && (param_3 < 1)) {
      psVar11 = local_8;
      if (iVar4 < param_1 / 2) {
        local_8 = (undefined2 *)(iVar4 * 2 + DAT_004db79e);
        do {
          if (DAT_004db7aa + -1 <= param_5) break;
          pcVar7 = (char *)((int)psVar9 + (int)psVar11);
          param_5 = param_5 + 2;
          iVar4 = iVar4 + -param_2;
          psVar11 = (short *)((int)psVar11 + 2);
          *pcVar7 = (char)((ushort)*local_8 >> 8) + -0x80;
          pcVar7[1] = (char)((ushort)*local_8 >> 8) + -0x80;
          local_8 = local_8 + -param_2;
        } while (iVar4 < param_1 / 2);
      }
      *param_6 = iVar4 * 2;
      param_2 = -param_2;
      local_8 = psVar11;
    }
  }
  else {
    if ((param_2 == 1) && (param_3 < 1)) {
      psVar11 = local_8;
      if (iVar4 < param_1 / 2) {
        local_8 = (undefined2 *)(iVar4 * 2 + DAT_004db79e);
        do {
          if (DAT_004db7aa + -1 <= param_5) break;
          pcVar7 = (char *)((int)psVar9 + (int)psVar11);
          param_5 = param_5 + 2;
          iVar4 = iVar4 + 1;
          psVar11 = (short *)((int)psVar11 + 2);
          *pcVar7 = (char)((ushort)*local_8 >> 8) + -0x80;
          uVar1 = *local_8;
          local_8 = local_8 + 1;
          pcVar7[1] = (char)((ushort)uVar1 >> 8) + -0x80;
        } while (iVar4 < param_1 / 2);
      }
      *param_6 = iVar4 * 2;
      local_8 = psVar11;
    }
    iVar10 = DAT_004db79e;
    if (1 < param_4) {
      if ((1 < param_2) && (param_3 == 1)) {
        while ((iVar4 < param_1 && (param_5 < DAT_004db7aa + -1))) {
          sVar5 = 0;
          if (0 < param_2) {
            do {
              sVar5 = sVar5 + 1;
              puVar6 = (undefined1 *)((int)psVar9 + (int)local_8);
              param_5 = param_5 + 2;
              local_8 = (short *)((int)local_8 + 2);
              *puVar6 = *(undefined1 *)(iVar10 + iVar4);
              puVar6[1] = *(undefined1 *)(iVar10 + iVar4);
            } while (sVar5 < param_2);
          }
          iVar4 = iVar4 + 1;
        }
        *param_6 = iVar4;
      }
      goto LAB_00445082;
    }
LAB_00445123:
    iVar10 = DAT_004db79e;
    if (1 < param_4) {
      if ((param_2 < 1) && (param_3 == 1)) {
        param_2 = -param_2;
        for (; (iVar4 < param_1 && (param_5 < DAT_004db7aa + -1)); param_5 = param_5 + 2) {
          puVar8 = (undefined1 *)((int)psVar9 + (int)local_8);
          local_8 = (short *)((int)local_8 + 2);
          *puVar8 = *(undefined1 *)(iVar4 + iVar10);
          puVar6 = (undefined1 *)(iVar4 + iVar10);
          iVar4 = iVar4 + param_2;
          puVar8[1] = *puVar6;
        }
        *param_6 = iVar4;
      }
      goto LAB_0044517c;
    }
  }
  iVar10 = DAT_004db79e;
  if (((param_4 < 1) && (param_2 == 1)) && (param_3 == 1)) {
    if (param_5 < DAT_004db7aa) {
      do {
        if (param_1 <= iVar4) break;
        puVar6 = (undefined1 *)(iVar10 + iVar4);
        param_5 = param_5 + 1;
        iVar4 = iVar4 + 2;
        *(undefined1 *)((int)local_8 + (int)psVar9) = *puVar6;
        local_8 = (short *)((int)local_8 + 1);
      } while (param_5 < DAT_004db7aa);
    }
    *param_6 = iVar4;
  }
  if (param_4 < 1) {
    if ((param_2 == 1) && (param_3 < 1)) {
      psVar11 = local_8;
      if (param_5 < DAT_004db7aa) {
        local_8 = (undefined2 *)(iVar4 * 2 + DAT_004db79e);
        do {
          if (param_1 / 2 <= iVar4) break;
          uVar1 = *local_8;
          param_5 = param_5 + 1;
          local_8 = local_8 + 2;
          iVar4 = iVar4 + 2;
          *(char *)((int)psVar11 + (int)psVar9) = (char)((ushort)uVar1 >> 8) + -0x80;
          psVar11 = (short *)((int)psVar11 + 1);
        } while (param_5 < DAT_004db7aa);
      }
      *param_6 = iVar4 * 2;
      local_8 = psVar11;
    }
    iVar10 = DAT_004db79e;
    if (param_4 < 1) {
      if ((1 < param_2) && (param_3 == 1)) {
        while ((iVar4 < param_1 && (param_5 < DAT_004db7aa))) {
          sVar5 = 0;
          iVar12 = (int)local_8;
          if (0 < param_2) {
            do {
              local_8 = (short *)iVar12;
              if (DAT_004db7aa <= param_5) break;
              sVar5 = sVar5 + 1;
              local_8 = (short *)(iVar12 + 1);
              param_5 = param_5 + 1;
              *(undefined1 *)(iVar12 + (int)psVar9) = *(undefined1 *)(iVar10 + iVar4);
              iVar12 = (int)local_8;
            } while (sVar5 < param_2);
          }
          iVar4 = iVar4 + 2;
        }
        *param_6 = iVar4;
      }
      goto LAB_0044532a;
    }
  }
  else {
LAB_0044532a:
    if (0 < param_4) goto LAB_0044540e;
    if ((1 < param_2) && (param_3 < 1)) {
      if (iVar4 < param_1 / 2) {
        local_c = (short *)(iVar4 * 2 + DAT_004db79e);
        do {
          if (DAT_004db7aa <= param_5) break;
          sVar5 = 0;
          iVar10 = (int)local_8;
          if (0 < param_2) {
            do {
              local_8 = (short *)iVar10;
              if (DAT_004db7aa <= param_5) break;
              sVar5 = sVar5 + 1;
              local_8 = (short *)(iVar10 + 1);
              param_5 = param_5 + 1;
              *(char *)(iVar10 + (int)psVar9) = (char)((ushort)*local_c >> 8) + -0x80;
              iVar10 = (int)local_8;
            } while (sVar5 < param_2);
          }
          local_c = local_c + 2;
          iVar4 = iVar4 + 2;
        } while (iVar4 < param_1 / 2);
      }
      *param_6 = iVar4 * 2;
    }
  }
  iVar10 = DAT_004db79e;
  if (0 < param_4) {
    return (int)local_8;
  }
  if ((param_2 < 1) && (param_3 == 1)) {
    psVar11 = local_8;
    if (param_5 < DAT_004db7aa) {
      do {
        local_8 = psVar11;
        if (param_1 <= iVar4) break;
        param_5 = param_5 + 1;
        puVar6 = (undefined1 *)(iVar10 + iVar4);
        local_8 = (short *)((int)psVar11 + 1);
        iVar4 = iVar4 + param_2 * -2;
        *(undefined1 *)((int)psVar11 + (int)psVar9) = *puVar6;
        psVar11 = local_8;
      } while (param_5 < DAT_004db7aa);
    }
    *param_6 = iVar4;
    param_2 = -param_2;
  }
LAB_0044540e:
  if (((0 < param_4) || (0 < param_2)) || (0 < param_3)) {
    return (int)local_8;
  }
  psVar11 = local_8;
  if (param_5 < DAT_004db7aa) {
    psVar3 = local_8;
    local_8 = (undefined2 *)(iVar4 * 2 + DAT_004db79e);
    do {
      psVar11 = psVar3;
      if (param_1 / 2 <= iVar4) break;
      param_5 = param_5 + 1;
      psVar11 = (short *)((int)psVar3 + 1);
      *(char *)((int)psVar3 + (int)psVar9) = (char)((ushort)*local_8 >> 8) + -0x80;
      local_8 = local_8 + param_2 * -2;
      iVar4 = iVar4 + param_2 * -2;
      psVar3 = psVar11;
    } while (param_5 < DAT_004db7aa);
  }
  *param_6 = iVar4 * 2;
  return (int)psVar11;
}


