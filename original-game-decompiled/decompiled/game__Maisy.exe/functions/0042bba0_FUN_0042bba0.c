
/* ==== FUN_0042bba0 @ 0042bba0 ==== 
 * signature: undefined4 __cdecl FUN_0042bba0(int param_1, char * param_2, char * param_3)
 * body: 0042bba0-0042c049
 */

undefined4 __cdecl FUN_0042bba0(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  UINT UVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char local_510 [256];
  char local_410 [256];
  undefined2 local_310;
  undefined4 local_30e [63];
  char local_210 [254];
  char acStack_112 [2];
  undefined2 local_110;
  undefined4 local_10e;
  uint local_10;
  undefined2 local_a;
  undefined4 local_8;
  
  local_310 = DAT_004dac60;
  puVar9 = local_30e;
  for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = 0;
  local_110 = DAT_004dac60;
  puVar9 = &local_10e;
  for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = 0;
  if (param_1 != 0) {
    iVar5 = -1;
    pcVar8 = param_2;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      local_8 = (uint)local_8._2_2_ << 0x10;
      uVar2 = FUN_0042ba00(0,param_2,(int)&local_110);
      if ((char)uVar2 != '\0') {
LAB_0042bc29:
        local_8 = local_8 & 0xffffff;
        if ((char)local_110 == '<') {
          uVar3 = FUN_0043d430(s_<Cache>_004daa48,(char *)&local_110);
          if (uVar3 == 0) {
            return 0x10000;
          }
          uVar3 = FUN_0043d430(s_<Lib>_004dab48,(char *)&local_110);
          if (uVar3 == 0) {
            FUN_0040f070((char *)&local_110);
            uVar3 = 0xffffffff;
            pcVar8 = (char *)&DAT_004dac58;
            do {
              pcVar11 = pcVar8;
              if (uVar3 == 0) break;
              uVar3 = uVar3 - 1;
              pcVar11 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar11;
            } while (cVar1 != '\0');
            uVar3 = ~uVar3;
            iVar5 = -1;
            pcVar8 = (char *)&local_110;
            do {
              pcVar10 = pcVar8;
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar10 = pcVar8 + 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar10;
            } while (cVar1 != '\0');
            pcVar8 = pcVar11 + -uVar3;
            pcVar11 = pcVar10 + -1;
            for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
              pcVar8 = pcVar8 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *pcVar11 = *pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar11 = pcVar11 + 1;
            }
LAB_0042bf2e:
            local_8 = CONCAT13(1,(undefined3)local_8);
            goto LAB_0042bf32;
          }
          uVar3 = FUN_0043d430(s_<Player>_004da948,(char *)&local_110);
          if (uVar3 == 0) {
            FUN_0040f070((char *)&local_110);
            goto LAB_0042bf2e;
          }
          uVar3 = FUN_0043d430(s_<Preferences_Folder_on_Macintosh_004da548,(char *)&local_110);
          if (uVar3 == 0) {
            return 0x10000;
          }
          uVar3 = FUN_0043d430(s_<Boot_Drive>_004da848,(char *)&local_110);
          if (uVar3 == 0) {
            UVar4 = GetSystemDirectoryA((LPSTR)&local_110,0x100);
            if ((short)UVar4 == 0) {
              FUN_004a3538();
            }
            local_10e._1_1_ = 0;
            goto LAB_0042bf2e;
          }
          if ((*(int *)(param_1 + 4) == 0) || (*(int *)(*(int *)(param_1 + 4) + 0x48) == 0)) {
            return 0x10000;
          }
          uVar3 = FUN_0043d430(s_<Startup_Segment_Folder>_004da648,(char *)&local_110);
          if ((uVar3 == 0) ||
             (uVar3 = FUN_0043d430(s_<Title_Folder>_004da748,(char *)&local_110), uVar3 == 0)) {
            cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x48) + 0x174))
                              (1,1,&local_110,1);
            if (cVar1 == '\0') {
              return 0x10000;
            }
            goto LAB_0042bf2e;
          }
          sVar7 = 1;
          uVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x48) + 0x164))();
          local_10 = uVar3 & 0xffff;
          if ((uVar3 & 0xffff) != 0) {
            do {
              local_510[0] = '\0';
              local_210[0] = '\0';
              local_410[0] = '\0';
              uVar2 = FUN_004791c0(*(void **)(*(int *)(param_1 + 4) + 0x48),sVar7,local_510,&local_a
                                   ,local_410,(char *)0x0);
              if ((char)uVar2 == '\0') {
                return 0x10000;
              }
              uVar3 = 0xffffffff;
              pcVar8 = (char *)&DAT_004dac54;
              do {
                pcVar11 = pcVar8;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                pcVar11 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar11;
              } while (cVar1 != '\0');
              uVar3 = ~uVar3;
              iVar5 = -1;
              pcVar8 = local_210;
              do {
                pcVar10 = pcVar8;
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                pcVar10 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar10;
              } while (cVar1 != '\0');
              pcVar8 = pcVar11 + -uVar3;
              pcVar11 = pcVar10 + -1;
              for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar11 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar11 = pcVar11 + 1;
              }
              uVar3 = 0xffffffff;
              pcVar8 = local_510;
              do {
                pcVar11 = pcVar8;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                pcVar11 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar11;
              } while (cVar1 != '\0');
              uVar3 = ~uVar3;
              iVar5 = -1;
              pcVar8 = local_210;
              do {
                pcVar10 = pcVar8;
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                pcVar10 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar10;
              } while (cVar1 != '\0');
              pcVar8 = pcVar11 + -uVar3;
              pcVar11 = pcVar10 + -1;
              for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar11 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar11 = pcVar11 + 1;
              }
              uVar3 = 0xffffffff;
              pcVar8 = s_Folder>_004dac48;
              do {
                pcVar11 = pcVar8;
                if (uVar3 == 0) break;
                uVar3 = uVar3 - 1;
                pcVar11 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar11;
              } while (cVar1 != '\0');
              uVar3 = ~uVar3;
              iVar5 = -1;
              pcVar8 = local_210;
              do {
                pcVar10 = pcVar8;
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                pcVar10 = pcVar8 + 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar10;
              } while (cVar1 != '\0');
              pcVar8 = pcVar11 + -uVar3;
              pcVar11 = pcVar10 + -1;
              for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
                pcVar8 = pcVar8 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                *pcVar11 = *pcVar8;
                pcVar8 = pcVar8 + 1;
                pcVar11 = pcVar11 + 1;
              }
              uVar3 = FUN_0043d430(local_210,(char *)&local_110);
              if (uVar3 == 0) {
                iVar5 = -1;
                pcVar8 = local_410;
                goto code_r0x0042bebe;
              }
              sVar7 = sVar7 + 1;
            } while ((int)sVar7 <= (int)local_10);
          }
          goto LAB_0042bef6;
        }
LAB_0042bf32:
        if (local_8._3_1_ != '\0') goto LAB_0042bf38;
        goto LAB_0042bf6c;
      }
LAB_0042bfc4:
      FUN_0043e140((char *)&local_310,param_3);
      iVar5 = -1;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *param_3;
        param_3 = param_3 + 1;
      } while (cVar1 != '\0');
      if (iVar5 != -2) {
        return 0;
      }
      return 0x10000;
    }
  }
  return 0x10000;
  while( true ) {
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    if (cVar1 == '\0') break;
code_r0x0042bebe:
    if (iVar5 == 0) break;
  }
  if (iVar5 == -2) {
    return 0x10000;
  }
  uVar3 = 0xffffffff;
  pcVar8 = local_410;
  do {
    pcVar11 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar8 = pcVar11 + -uVar3;
  pcVar11 = (char *)&local_110;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar11 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar11 = pcVar11 + 1;
  }
  local_8 = CONCAT13(1,(undefined3)local_8);
LAB_0042bef6:
  if (local_8._3_1_ == '\0') {
    return 0x10000;
  }
LAB_0042bf38:
  uVar3 = 0xffffffff;
  pcVar8 = (char *)&local_110;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (acStack_112[~uVar3] == ':') {
    uVar3 = 0xffffffff;
    pcVar8 = (char *)&local_110;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    acStack_112[~uVar3] = '\0';
  }
LAB_0042bf6c:
  uVar3 = 0xffffffff;
  pcVar8 = (char *)&local_110;
  do {
    pcVar11 = pcVar8;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar5 = -1;
  pcVar8 = (char *)&local_310;
  do {
    pcVar10 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  pcVar8 = pcVar11 + -uVar3;
  pcVar11 = pcVar10 + -1;
  for (uVar6 = uVar3 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar11 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar11 = pcVar11 + 1;
  }
  sVar7 = (short)local_8 + 1;
  local_8 = CONCAT22(local_8._2_2_,sVar7);
  uVar2 = FUN_0042ba00(sVar7,param_2,(int)&local_110);
  if ((char)uVar2 == '\0') goto LAB_0042bfc4;
  goto LAB_0042bc29;
}


