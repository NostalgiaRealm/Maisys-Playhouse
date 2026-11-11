
/* ==== FUN_004530c0 @ 004530c0 ==== 
 * signature: undefined4 __cdecl FUN_004530c0(int * param_1, undefined2 * param_2, undefined4 param_3, int * param_4)
 * body: 004530c0-0045359d
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_004530c0(int *param_1,undefined2 *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *this;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  char *pcVar11;
  code *pcVar12;
  int *piVar13;
  short local_ac [24];
  short local_7c [22];
  short local_50 [20];
  int *local_28;
  int *local_24;
  undefined4 local_20;
  code *local_1c;
  int local_18;
  int local_14;
  char *local_10;
  int local_c;
  undefined4 local_8;
  
  pcVar10 = (code *)0x0;
  local_8._2_2_ = 0;
  local_20 = 0;
  local_c = *param_1;
  local_14 = (**(code **)(local_c + 0x1c0))();
  if (local_14 == 0) {
    return 0x10000;
  }
  local_24 = (int *)FUN_00434920(DAT_004d99ac,local_14 << 2,0);
  if (param_2 == (undefined2 *)0x0) {
    pcVar6 = *(code **)(local_c + 0x114);
    iVar3 = (*pcVar6)();
    if (iVar3 != 0) {
      pcVar4 = (char *)(*pcVar6)();
      iVar3 = -1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_8._2_2_ = ~(ushort)iVar3;
    }
  }
  else {
    *param_2 = 0x7b;
    if ((*(byte *)((int)param_1 + 0x1e) & 0x10) == 0) {
      param_2[0xb] = 0;
    }
    else {
      uVar2 = (**(code **)(local_c + 0x244))();
      param_2[0xb] = uVar2;
    }
    (**(code **)(local_c + 0x118))(param_2 + 2);
    param_2[1] = (undefined2)local_14;
    pcVar10 = *(code **)(local_c + 0x114);
    iVar3 = (*pcVar10)();
    if (iVar3 != 0) {
      pcVar4 = (char *)(*pcVar10)();
      iVar3 = -1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_8._2_2_ = ~(ushort)iVar3;
    }
    local_10 = (char *)(param_2 + 0xe);
    iVar3 = (int)(short)local_8._2_2_;
    *(int *)(param_2 + 0xc) = iVar3;
    if (local_8._2_2_ != 0) {
      pcVar4 = (char *)(*pcVar10)();
      uVar8 = 0xffffffff;
      do {
        pcVar11 = pcVar4;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar11 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar11;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar4 = pcVar11 + -uVar8;
      pcVar11 = local_10;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    pcVar10 = (code *)(iVar3 + 0x1c + (int)param_2);
  }
  iVar3 = *param_4;
  *param_4 = iVar3 + 0x1c;
  *param_4 = (int)(short)local_8._2_2_ + iVar3 + 0x1c;
  local_1c = *(code **)(local_c + 0x188);
  local_8 = (code *)(*local_1c)();
  local_c = 0;
  if (0 < local_14) {
    local_28 = local_24;
    do {
      if (local_8 == (code *)0x0) break;
      if (param_2 == (undefined2 *)0x0) {
        pcVar6 = *(code **)(*(int *)local_8 + 0x114);
        iVar3 = (*pcVar6)();
        if (iVar3 != 0) {
          pcVar4 = (char *)(*pcVar6)();
          uVar8 = 0xffffffff;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          *param_4 = *param_4 + ~uVar8;
        }
      }
      else {
        *local_28 = (int)pcVar10;
        local_18 = *(int *)local_8;
        pcVar6 = *(code **)(local_18 + 0x114);
        iVar3 = (*pcVar6)();
        if (iVar3 == 0) {
          local_10 = (char *)0x0;
        }
        else {
          pcVar4 = (char *)(*pcVar6)();
          uVar8 = 0xffffffff;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          local_10 = (char *)~uVar8;
        }
        *(char **)(pcVar10 + 0x16) = local_10;
        if (*(short *)(local_8 + 0x22) == 0x58) {
          *(int *)pcVar10 = 0;
        }
        else {
          if (((byte)local_8[0x1e] & 0x10) == 0) {
            iVar3 = (int)*(short *)(local_8 + 0x22);
          }
          else {
            iVar3 = (**(code **)(local_18 + 0x244))();
            iVar3 = -iVar3;
          }
          *(int *)pcVar10 = iVar3;
        }
        if (*(int *)pcVar10 == 0) {
          puVar5 = (undefined4 *)(**(code **)(local_18 + 0x94))();
          FUN_004374c0((undefined4 *)(pcVar10 + 4),puVar5);
        }
        if (local_10 != (char *)0x0) {
          pcVar4 = (char *)(*pcVar6)();
          uVar8 = 0xffffffff;
          do {
            pcVar11 = pcVar4;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar11 = pcVar4 + 1;
            cVar1 = *pcVar4;
            pcVar4 = pcVar11;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8;
          pcVar6 = (code *)(pcVar11 + -uVar8);
          pcVar12 = pcVar10 + 0x1e;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar12 = pcVar12 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar12 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar12 = pcVar12 + 1;
          }
        }
        pcVar10 = pcVar10 + 0x1e + (int)local_10;
        *param_4 = (int)(local_10 + *param_4);
      }
      *param_4 = *param_4 + 0x1e;
      local_8 = (code *)(**(code **)(*(int *)local_8 + 0x174))();
      local_28 = local_28 + 1;
      local_c = local_c + 1;
    } while (local_c < local_14);
  }
  this = (int *)(*local_1c)();
  local_c = 0;
  piVar13 = local_24;
  if (0 < local_14) {
    do {
      if (this == (int *)0x0) break;
      iVar3 = (**(code **)(*this + 0x1c0))();
      if (iVar3 == 0) {
        if ((*(uint *)((int)this + 0x1e) & 0x20000000) == 0) {
          if ((*(uint *)((int)this + 0x1e) & 0x80) != 0) {
            local_ac[0] = 0x17;
            FUN_00474bd0(this,0,local_ac,0x17);
            uVar7 = FUN_004169e0(local_ac,local_7c,0xffffffff);
            if ((char)uVar7 != '\0') {
              local_8 = (code *)0x0;
              if (param_2 != (undefined2 *)0x0) {
                *(int *)(*piVar13 + 0x1a) = (int)pcVar10 - (int)param_2;
              }
              local_20 = FUN_004535a0(0,(undefined4 *)pcVar10,param_3,&local_8,local_7c);
              if (param_2 != (undefined2 *)0x0) {
                pcVar10 = pcVar10 + (int)local_8;
              }
              *param_4 = (int)(local_8 + *param_4);
              pcVar6 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,(int *)&local_10);
              DAT_004e34cc = (*pcVar6)(local_10,0xffffffff,local_7c);
            }
          }
        }
        else {
          local_50[0] = 0x6a;
          local_8 = *(code **)(*this + 0x98);
          iVar3 = (*local_8)(s_value_004d9864,0,local_50);
          if (iVar3 == 0) {
            if ((local_50[0] == 0x69) || (iVar3 = 0, local_50[0] == 0x73)) {
              pcVar6 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,(int *)&local_1c);
              DAT_004e34cc = (*pcVar6)(local_1c,0xffffffff,local_50);
              local_50[0] = 0x66;
              local_50[1] = -1;
              local_50[2] = -1;
              local_50[3] = 0;
              local_50[4] = 0;
              local_50[5] = 0;
              local_50[6] = 0;
              local_50[7] = 0;
              local_50[8] = 0;
              iVar3 = (*local_8)(s_value_004d9864,0,local_50);
            }
            if (iVar3 == 0) {
              pcVar6 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x1a,&local_18);
              DAT_004e34cc = (*pcVar6)(local_18,0xffffffff,local_50);
            }
          }
          local_20 = 0;
        }
      }
      else {
        local_8 = (code *)0x0;
        if (param_2 != (undefined2 *)0x0) {
          *(int *)(*piVar13 + 0x1a) = (int)pcVar10 - (int)param_2;
        }
        FUN_004530c0(this,(undefined2 *)pcVar10,param_3,&local_8);
        if (param_2 != (undefined2 *)0x0) {
          pcVar10 = pcVar10 + (int)local_8;
        }
        *param_4 = (int)(local_8 + *param_4);
      }
      this = (int *)(**(code **)(*this + 0x174))();
      local_c = local_c + 1;
      piVar13 = piVar13 + 1;
    } while (local_c < local_14);
  }
  FUN_00434950(local_24);
  return local_20;
}


