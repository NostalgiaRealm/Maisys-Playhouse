
/* ==== FUN_11019ea0 @ 11019ea0 ==== 
 * signature: short __cdecl FUN_11019ea0(undefined4 * param_1, int param_2, int param_3, undefined4 * param_4, undefined2 * param_5)
 * body: 11019ea0-1101abfb
 */

short __cdecl
FUN_11019ea0(undefined4 *param_1,int param_2,int param_3,undefined4 *param_4,undefined2 *param_5)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  short sVar7;
  ulonglong uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char local_413;
  char local_412;
  char local_411;
  short local_410;
  short local_40e;
  short *local_40c;
  short *local_408;
  short *local_404;
  short *local_400;
  short *local_3fc;
  short local_3f8;
  undefined4 local_3f6;
  short *local_3c8;
  int local_3c4;
  short local_3c0 [480];
  
  local_412 = '\0';
  if ((((param_2 == 0) || (*(int *)(param_2 + 8) == 0)) ||
      (local_404 = *(short **)(param_2 + 0x10), local_404 == (short *)0x0)) ||
     (*(int *)(param_2 + 0x1c) == 0)) {
    return -8;
  }
  local_411 = '\0';
  local_408 = (short *)0x0;
  sVar3 = 0;
  local_3c8 = (short *)((int)local_404 + *(int *)(param_2 + 4));
  local_40e = 0;
  local_40c = (short *)0x0;
  local_410 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      if (local_3c8 < local_404) break;
      if (sVar3 != 0) goto LAB_1101aba1;
      local_3f8 = -1;
      iVar6 = (int)*local_404;
      if (iVar6 < 0xca) {
        if (iVar6 == 0xc9) {
          sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5);
          if ((sVar3 == 0) &&
             (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                   param_5), sVar3 == 0)) {
            uVar4 = FUN_1101ae80(param_1,&local_3f8,local_40c,local_408);
            sVar3 = (short)uVar4;
          }
        }
        else {
          if (iVar6 == 0) goto switchD_11019fa4_caseD_138;
switchD_11019f84_default:
          sVar3 = -0xb;
        }
      }
      else if (iVar6 < 0x132) {
        if (iVar6 < 0x12f) {
          switch(iVar6) {
          case 0xca:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5
                                );
            if ((sVar3 == 0) &&
               (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                     param_5), sVar3 == 0)) {
              uVar4 = FUN_1101b010(param_1,&local_3f8,local_40c,local_408);
              sVar3 = (short)uVar4;
            }
            break;
          case 0xcb:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5
                                );
            if ((sVar3 == 0) &&
               (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                     param_5), sVar3 == 0)) {
              uVar5 = FUN_1101b1a0(param_1,&local_3f8,local_40c,local_408);
              sVar3 = (short)uVar5;
            }
            break;
          case 0xcc:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5
                                );
            if ((sVar3 == 0) &&
               (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                     param_5), sVar3 == 0)) {
              uVar5 = FUN_1101b210(param_1,&local_3f8,local_40c,local_408);
              sVar3 = (short)uVar5;
            }
            break;
          case 0xcd:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5
                                );
            if ((sVar3 == 0) &&
               (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                     param_5), sVar3 == 0)) {
              uVar4 = FUN_1101c340(param_1,&local_3f8,local_40c,local_408);
              sVar3 = (short)uVar4;
            }
            break;
          case 0xce:
          case 0xcf:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5
                                );
            if ((sVar3 == 0) &&
               (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                     param_5), sVar3 == 0)) {
              uVar4 = FUN_1101c260(param_1,&local_3f8,local_40c,local_408,(int)*local_404);
              sVar3 = (short)uVar4;
            }
            break;
          case 0xd0:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,param_5
                                );
            if (sVar3 == 0) {
              uVar5 = FUN_1101b3a0(param_1,&local_3f8,local_40c);
              sVar3 = (short)uVar5;
            }
            break;
          case 0xd1:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,param_5
                                );
            if (sVar3 == 0) {
              uVar4 = FUN_1101c300(param_1,&local_3f8,local_40c);
              sVar3 = (short)uVar4;
            }
            break;
          case 0xd2:
          case 0xd3:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5
                                );
            if ((sVar3 == 0) &&
               (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                     param_5), sVar3 == 0)) {
              iVar6 = FUN_1101bf70(param_1,&local_3f8,local_40c,local_408,(int)*local_404);
              sVar3 = (short)iVar6;
            }
            break;
          case 0xd4:
          case 0xd5:
          case 0xd6:
          case 0xd7:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5
                                );
            if ((sVar3 == 0) &&
               (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                     param_5), sVar3 == 0)) {
              uVar5 = FUN_1101c140(param_1,&local_3f8,local_40c,local_408,(int)*local_404);
              sVar3 = (short)uVar5;
            }
            break;
          case 0xd8:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,param_5
                                );
            if (sVar3 == 0) {
              uVar4 = FUN_1101bb90(param_1,&local_3f8,local_40c,(int)local_404);
              sVar3 = (short)uVar4;
            }
            break;
          case 0xd9:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5
                                );
            if ((sVar3 == 0) &&
               (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                     param_5), sVar3 == 0)) {
              uVar5 = FUN_1101b340(local_40c,&local_3f8,param_1,&local_3f8,local_40c,local_408);
              sVar3 = (short)uVar5;
            }
            break;
          case 0xda:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5
                                );
            if ((sVar3 == 0) &&
               (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                     param_5), sVar3 == 0)) {
              uVar5 = FUN_1101b270(param_1,&local_3f8,local_40c,local_408);
              sVar3 = (short)uVar5;
            }
            break;
          case 0xdb:
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5
                                );
            if ((sVar3 == 0) &&
               (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                     param_5), sVar3 == 0)) {
              uVar5 = FUN_1101b3f0(param_1,&local_3f8,local_40c,local_408);
              sVar3 = (short)uVar5;
            }
            break;
          case 0xdc:
            uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_400);
            sVar3 = (short)uVar5;
            break;
          default:
            goto switchD_11019f84_default;
          }
        }
        else {
          sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,param_5);
          if ((sVar3 == 0) &&
             (sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,
                                   param_5), sVar3 == 0)) {
            uVar8 = FUN_1101be90(local_40c,local_408,param_1,&local_3f8,local_40c,local_408,
                                 (int)*local_404);
            sVar3 = (short)uVar8;
          }
        }
      }
      else if (iVar6 < 0x192) {
        if (iVar6 == 0x191) {
          if (local_404[3] == 0x1f9) {
            local_3f8 = 0x1f9;
            local_3f6 = *(undefined4 *)(local_404 + 4);
            uVar5 = FUN_1101c8e0(param_1,param_2,&local_3f8,*(byte *)(local_404 + 1) & 1,param_5);
            sVar3 = (short)uVar5;
          }
          else if (local_404[3] == 0x1fa) {
            iVar6 = FUN_1100fa80(param_1,*(undefined4 *)(local_404 + 4));
            if (iVar6 == 0) {
              sVar3 = -9;
            }
            else {
              FUN_1101c3a0(param_1,&local_3f8,iVar6,*(byte *)(local_404 + 1) & 1);
            }
          }
          else {
            uVar5 = FUN_11019e00((int)local_3c0,&local_40e,(undefined4 *)(local_404 + 3));
            sVar3 = (short)uVar5;
          }
        }
        else {
          switch(iVar6) {
          case 0x135:
            if ((*(byte *)(local_404 + 1) & 0x20) != 0) {
              sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_408,(int)local_3c0,&local_40e,
                                   param_5);
            }
            if (sVar3 == 0) {
              uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_40c);
              sVar3 = (short)uVar5;
              if (sVar3 == 0) {
                local_413 = '\0';
                uVar8 = FUN_1101ca40(local_408,local_40c,param_1,param_2,&local_3f8,local_40c,
                                     local_408,*(int *)(local_404 + 3),(int)local_3c0,&local_40e,
                                     param_5,&local_413);
                sVar3 = (short)uVar8;
                if (local_413 != '\0') {
                  local_40c = (short *)0x0;
                }
              }
            }
            break;
          case 0x136:
            uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_408);
            sVar3 = (short)uVar5;
            if (sVar3 == 0) {
              uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_40c);
              sVar3 = (short)uVar5;
              if (sVar3 == 0) {
                uVar4 = FUN_110211e0(param_1,param_2,(undefined4 *)&local_3f8,local_40c,local_408,
                                     param_5);
                sVar3 = (short)uVar4;
              }
            }
            break;
          case 0x137:
            uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_408);
            sVar3 = (short)uVar5;
            if (sVar3 == 0) {
              uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_40c);
              sVar3 = (short)uVar5;
              if (sVar3 == 0) {
                sVar3 = FUN_11021240(local_40c,&local_3f8,param_1,param_2,&local_3f8,local_40c,
                                     local_408,param_5);
              }
            }
            break;
          case 0x138:
            goto switchD_11019fa4_caseD_138;
          default:
            goto switchD_11019f84_default;
          }
        }
      }
      else if (iVar6 < 0x3eb) {
        if (iVar6 == 0x3ea) {
          uVar4 = FUN_11014a00(param_1,(int)local_404,(int)local_3c0,&local_40e,&local_3f8,param_2);
          sVar3 = (short)uVar4;
        }
        else if (iVar6 == 0x192) {
          uVar5 = FUN_1101c3d0(param_1,(int)local_3c0,&local_40e,(int)local_404,param_3);
          sVar3 = (short)uVar5;
        }
        else if (iVar6 == 0x193) {
          uVar4 = FUN_1101c9b0(param_1,&local_3f8,(int)local_404);
          sVar3 = (short)uVar4;
        }
        else {
          sVar3 = -0xb;
        }
      }
      else if (iVar6 < 0x835) {
        if (iVar6 == 0x834) {
          local_3fc = (short *)0x0;
          uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_408);
          sVar3 = (short)uVar5;
          if (sVar3 == 0) {
            uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_40c);
            sVar3 = (short)uVar5;
            if (sVar3 != 0) goto LAB_1101aa90;
            if (((*local_40c == 0x1fc) || (*local_40c == 0x1fb)) &&
               ((*(byte *)(local_40c + 1) & 4) != 0)) {
              uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_3fc);
              sVar3 = (short)uVar5;
            }
          }
          if (sVar3 == 0) {
            sVar3 = FUN_11014d60(param_1,local_40c,local_408,local_3fc,param_2,param_5);
          }
        }
        else if (iVar6 == 0x7d3) {
          local_3c4 = *(int *)(local_404 + 5);
          if (*(int *)(local_404 + 3) == 2) {
            sVar3 = FUN_11019dc0(param_1,param_2,(int *)&local_40c,(int)local_3c0,&local_40e,param_5
                                );
            if (sVar3 != 0) {
              return sVar3;
            }
            uVar4 = FUN_11019ca0(param_1,local_40c);
            if (((short)uVar4 == 0) && (sVar3 = 0, (char)local_40c[1] != '\0')) goto LAB_1101aa90;
            sVar3 = 0;
          }
          else if (*(int *)(local_404 + 3) != 1) {
            return -10;
          }
          local_411 = '\x01';
          psVar1 = local_404 + 7;
          local_404 = (short *)((int)local_404 + *(int *)(local_404 + 5));
          local_410 = local_410 + (short)*(undefined4 *)psVar1 + -1;
          if ((local_3c4 < 1) && (cVar2 = FUN_1101d220(), cVar2 != '\0')) {
            sVar3 = -0x23;
          }
        }
        else {
          sVar3 = -0xb;
        }
      }
      else {
        switch(iVar6) {
        case 0x898:
          uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_408);
          sVar3 = (short)uVar5;
          if (sVar3 == 0) {
            uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_40c);
            sVar3 = (short)uVar5;
            if (sVar3 == 0) {
              sVar3 = FUN_11025370(param_1,(int)local_404,(undefined4 *)local_40c,local_408,param_2,
                                   param_5);
            }
          }
          goto LAB_1101aa90;
        default:
          goto switchD_11019f84_default;
        case 0x906:
          local_412 = *(int *)(local_404 + 3) == 1;
          break;
        case 0x908:
          uVar13 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0xc;
          uVar5 = FUN_1100fc30((int)param_1);
          FUN_1101db80(param_1,uVar5,uVar9,uVar10,uVar11,uVar12,uVar13);
          break;
        case 0x910:
        case 0x911:
          break;
        }
switchD_11019fa4_caseD_138:
        sVar3 = 0;
      }
LAB_1101aa90:
      if (local_40c != (short *)0x0) {
        FUN_11019e40(param_1,local_40c);
        local_40c = (short *)0x0;
      }
      if (local_408 != (short *)0x0) {
        FUN_11019e40(param_1,local_408);
        local_408 = (short *)0x0;
      }
      if (sVar3 == 0) {
        if (local_3f8 != -1) {
          uVar5 = FUN_11019e00((int)local_3c0,&local_40e,(undefined4 *)&local_3f8);
          sVar3 = (short)uVar5;
        }
        if ((sVar3 != 0) || (local_411 != '\0')) goto LAB_1101ab0b;
        local_404 = (short *)((int)local_404 + (int)local_404[2]);
      }
      else {
LAB_1101ab0b:
        local_411 = '\0';
      }
      if (local_412 != '\0') {
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0xc;
        uVar5 = FUN_1100fc30((int)param_1);
        FUN_1101db80(param_1,uVar5,uVar9,uVar10,uVar11,uVar12,uVar13);
      }
      local_410 = local_410 + 1;
    } while ((int)local_410 < *(int *)(param_2 + 8));
  }
  if ((sVar3 == 0) && (param_4 != (undefined4 *)0x0)) {
    uVar5 = FUN_11019d90((int)local_3c0,&local_40e,(int *)&local_400);
    sVar3 = (short)uVar5;
    if (sVar3 == 0) {
      FUN_1101c8a0(param_1,param_2,local_400);
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *param_4 = *(undefined4 *)local_400;
        local_400 = local_400 + 2;
        param_4 = param_4 + 1;
      }
    }
  }
LAB_1101aba1:
  sVar7 = 0;
  if (0 < local_40e) {
    do {
      iVar6 = (int)sVar7;
      sVar7 = sVar7 + 1;
      FUN_11019e40(param_1,local_3c0 + iVar6 * 0x18);
    } while (sVar7 < local_40e);
  }
  if (sVar3 == -2) {
    FUN_11019e40(param_1,&local_3f8);
  }
  return sVar3;
}


