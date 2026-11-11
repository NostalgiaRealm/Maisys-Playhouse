
/* ==== f23 @ 1000efa9 ==== 
 * signature: undefined4 __stdcall f23(DWORD param_1)
 * body: 1000efa9-1000f51d
 */

undefined4 f23(DWORD param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  LPCSTR pCVar8;
  undefined3 extraout_var;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int *piVar12;
  LPCSTR pCVar13;
  int aiStack_624 [128];
  char local_424 [256];
  undefined4 auStack_324 [64];
  CHAR local_224 [256];
  undefined4 local_124 [26];
  int local_bc [26];
  byte local_54 [32];
  byte local_34 [32];
  uint local_14;
  byte *local_10;
  int local_c;
  byte *local_8;
  
                    /* 0xefa9  29  f23 */
  *(undefined4 *)(DAT_1002392c + 0x14) = 0;
  pcVar4 = FUN_10010950((char *)local_34,*(char **)(param_1 + 0x20));
  local_14 = FUN_10016230(local_34);
  pcVar4 = FUN_10010950((char *)local_34,pcVar4);
  if ((DAT_100238dc._2_1_ & 1) != 0) {
    iVar5 = FUN_10016190(local_34);
    DAT_10023f38 = -iVar5;
  }
  local_10 = (byte *)FUN_10010950((char *)local_34,pcVar4);
  if (local_34[0] != 0) {
    FUN_100105d2((LPCSTR)local_34,&DAT_10023314);
  }
  puVar11 = local_124;
  for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
LAB_1000f038:
  do {
    pbVar10 = local_10;
    local_c = 0;
    local_8 = local_10;
    bVar2 = *local_10;
    piVar12 = local_bc;
    for (iVar5 = 0x1a; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar12 = 0;
      piVar12 = piVar12 + 1;
    }
    if (bVar2 != 0) {
      iVar5 = 0;
      do {
        bVar2 = *pbVar10;
        if ((bVar2 == 9) || (bVar2 == 0x7f)) break;
        pbVar9 = local_54;
        while (((bVar2 != 0 && (bVar2 != 0x20)) && (bVar2 != 9))) {
          *pbVar9 = bVar2;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
          local_8 = pbVar10;
          bVar2 = *pbVar10;
        }
        *pbVar9 = 0;
        pcVar4 = FUN_1000ba71((LPCSTR)local_54);
        *(char **)((int)auStack_324 + iVar5) = pcVar4;
        if (DAT_100200d4 < 2) {
          uVar6 = *(ushort *)(PTR_DAT_1001fec8 + *pcVar4 * 2) & 0x103;
        }
        else {
          uVar6 = FUN_10015ac0((int)*pcVar4,0x103);
        }
        if ((uVar6 == 0) || (pcVar4[1] != ':')) {
          FUN_1001054d(&DAT_1001f3e8,local_424);
          cVar1 = local_424[0];
        }
        else {
          cVar1 = *pcVar4;
        }
        uVar6 = FUN_10015b60((int)cVar1);
        pbVar10 = local_8;
        *(uint *)((int)aiStack_624 + iVar5) = uVar6 - 0x41;
        iVar5 = iVar5 + 4;
        if (*pbVar10 == 0x20) {
          pbVar10 = pbVar10 + 1;
          local_8 = pbVar10;
        }
      } while (*pbVar10 != 0);
    }
    if (*pbVar10 == 9) {
      pbVar10 = pbVar10 + 1;
      local_8 = pbVar10;
    }
    if (*pbVar10 == 0x20) {
      pbVar10 = pbVar10 + 1;
      local_8 = pbVar10;
    }
    bVar2 = *pbVar10;
    while ((bVar2 != 0 && (bVar2 != 10))) {
      iVar5 = FUN_10016230(pbVar10);
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar6 = (byte)PTR_DAT_1001fec8[(char)*local_8 * 2] & 4;
        }
        else {
          uVar6 = FUN_10015ac0((int)(char)*local_8,4);
        }
        if (uVar6 == 0) break;
        local_8 = local_8 + 1;
      }
      if (*local_8 == 0x20) {
        local_8 = local_8 + 1;
      }
      iVar5 = aiStack_624[iVar5];
      iVar7 = FUN_1000f51e(&local_8,(int)local_124,iVar5);
      pbVar10 = local_8;
      local_bc[iVar5] = local_bc[iVar5] + iVar7;
      while( true ) {
        if (DAT_100200d4 < 2) {
          uVar6 = (byte)PTR_DAT_1001fec8[(char)*pbVar10 * 2] & 4;
        }
        else {
          uVar6 = FUN_10015ac0((int)(char)*pbVar10,4);
          pbVar10 = local_8;
        }
        if ((uVar6 == 0) && (*pbVar10 != 0x2c)) break;
        pbVar10 = pbVar10 + 1;
        local_8 = pbVar10;
      }
      if (*pbVar10 == 0x20) {
        pbVar10 = pbVar10 + 1;
        local_8 = pbVar10;
      }
      bVar2 = *pbVar10;
    }
    if (*pbVar10 == 10) {
      pbVar10 = pbVar10 + 1;
      local_8 = pbVar10;
    }
    param_1 = 0;
    while (bVar2 = *pbVar10, bVar2 != 0) {
      if (DAT_100200d4 < 2) {
        uVar6 = (byte)PTR_DAT_1001fec8[(char)bVar2 * 2] & 4;
      }
      else {
        uVar6 = FUN_10015ac0((int)(char)bVar2,4);
        pbVar10 = local_8;
      }
      if (uVar6 == 0) {
        if ((*pbVar10 == 9) && (pbVar10 = pbVar10 + 1, local_8 = pbVar10, 0 < (int)param_1)) {
          param_1 = param_1 + 1;
        }
        iVar5 = FUN_10016230(pbVar10);
        while( true ) {
          if (DAT_100200d4 < 2) {
            uVar6 = (byte)PTR_DAT_1001fec8[(char)*local_8 * 2] & 4;
          }
          else {
            uVar6 = FUN_10015ac0((int)(char)*local_8,4);
          }
          if (uVar6 == 0) break;
          local_8 = local_8 + 1;
        }
        if (*local_8 == 0x20) {
          local_8 = local_8 + 1;
        }
        pbVar9 = local_54;
        for (; ((pbVar10 = local_8, bVar2 = *local_8, bVar2 != 0 && (bVar2 != 0x20)) && (bVar2 != 9)
               ); local_8 = local_8 + 1) {
          *pbVar9 = bVar2;
          pbVar9 = pbVar9 + 1;
        }
        *pbVar9 = 0;
        pbVar9 = local_54;
        if (local_54[0] != 0) {
          pCVar13 = (LPCSTR)auStack_324[iVar5];
          do {
            pCVar8 = FUN_100147fa(pCVar13,(int)(char)*pbVar9);
            pbVar10 = local_8;
            if (pCVar8 != (LPCSTR)0x0) break;
            pbVar9 = pbVar9 + 1;
          } while (*pbVar9 != 0);
        }
        if ((*pbVar9 == 0) && (param_1 == 0)) {
          param_1 = 1;
        }
        while (*pbVar10 == 0x20) {
          pbVar10 = pbVar10 + 1;
          local_8 = pbVar10;
        }
      }
      else {
        while ((*pbVar10 != 0 && (*pbVar10 != 10))) {
          iVar5 = FUN_10016230(pbVar10);
          while( true ) {
            if (DAT_100200d4 < 2) {
              uVar6 = (byte)PTR_DAT_1001fec8[(char)*local_8 * 2] & 4;
            }
            else {
              uVar6 = FUN_10015ac0((int)(char)*local_8,4);
            }
            if (uVar6 == 0) break;
            local_8 = local_8 + 1;
          }
          if (*local_8 == 0x20) {
            local_8 = local_8 + 1;
          }
          if (param_1 == 0) {
            iVar5 = aiStack_624[iVar5];
            iVar7 = FUN_1000f51e(&local_8,(int)local_124,iVar5);
            pbVar10 = local_8;
            local_bc[iVar5] = local_bc[iVar5] + iVar7;
            while( true ) {
              if (DAT_100200d4 < 2) {
                uVar6 = (byte)PTR_DAT_1001fec8[(char)*pbVar10 * 2] & 4;
              }
              else {
                uVar6 = FUN_10015ac0((int)(char)*pbVar10,4);
                pbVar10 = local_8;
              }
              if ((uVar6 == 0) && (*pbVar10 != 0x2c)) break;
              pbVar10 = pbVar10 + 1;
              local_8 = pbVar10;
            }
          }
          else {
            for (; (*local_8 != 0 && (*local_8 != 10)); local_8 = local_8 + 1) {
            }
            param_1 = param_1 - 1;
            pbVar10 = local_8;
          }
          if (*pbVar10 == 0x20) {
            pbVar10 = pbVar10 + 1;
            local_8 = pbVar10;
          }
        }
        if (*pbVar10 == 10) {
          pbVar10 = pbVar10 + 1;
          local_8 = pbVar10;
        }
        if (*pbVar10 == 0x20) {
          pbVar10 = pbVar10 + 1;
          local_8 = pbVar10;
        }
      }
    }
    param_1 = 0;
    piVar12 = local_bc;
    do {
      if (local_c != 0) goto LAB_1000f038;
      iVar5 = *piVar12;
      if (0 < iVar5) {
        uVar6 = FUN_1001337f((LPCSTR)0x0,param_1);
        iVar5 = uVar6 - iVar5;
        *piVar12 = iVar5;
        if (iVar5 < 0) {
          wsprintfA(local_224,*(LPCSTR *)(DAT_100240b8 + 0x2c),-iVar5,param_1 + 0x41);
          do {
            bVar3 = false;
            iVar5 = FUN_1001277f((HWND)0x0,local_224,*(undefined4 *)(DAT_100240b8 + 0x48),0x41);
            if ((*(int *)(DAT_1002392c + 0x30) != 0) && ((local_14 & 1) != 0)) {
              iVar5 = 2;
            }
            if (iVar5 == 1) {
              bVar3 = FUN_1000be14(DAT_100238d8);
              if (CONCAT31(extraout_var,bVar3) != 0) {
                _strncpy(DAT_100238d4,local_224,0x100);
                DAT_100238d4[0xff] = '\0';
                return 1;
              }
              bVar3 = true;
            }
          } while (bVar3);
          if (iVar5 != 3) {
            if (local_34[0] == 0) {
              return 0;
            }
            pCVar13 = &DAT_1001f59c;
LAB_1000f50a:
            FUN_100105d2((LPCSTR)local_34,pCVar13);
            return 0;
          }
          if (local_34[0] != 0) {
            pCVar13 = &DAT_1001fc74;
            goto LAB_1000f50a;
          }
          local_c = 1;
        }
      }
      param_1 = param_1 + 1;
      piVar12 = piVar12 + 1;
    } while ((int)param_1 < 0x1a);
    if (local_c == 0) {
      return 0;
    }
  } while( true );
}


