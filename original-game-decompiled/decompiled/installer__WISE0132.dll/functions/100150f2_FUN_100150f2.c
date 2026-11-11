
/* ==== FUN_100150f2 @ 100150f2 ==== 
 * signature: undefined __cdecl FUN_100150f2(undefined4 param_1, undefined * param_2, char * param_3, char * param_4, undefined4 param_5)
 * body: 100150f2-1001548d
 */

void __cdecl
FUN_100150f2(undefined4 param_1,undefined *param_2,char *param_3,char *param_4,undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  LPSTR lpString1;
  byte *pbVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  byte *lpString1_00;
  LPCSTR pCVar11;
  char local_1e0 [256];
  char acStack_e0 [16];
  undefined4 auStack_d0 [16];
  undefined1 local_90 [64];
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  local_8 = 0;
  if (*param_3 != '\0') {
    local_c = &local_50;
    local_10 = (uint *)local_90;
    pbVar4 = param_2;
    pcVar8 = param_3;
    lpString1_00 = DAT_10023e84;
    do {
      acStack_e0[local_8] = *pcVar8;
      cVar2 = pcVar8[1];
      if (cVar2 == '0') {
        pcVar7 = local_1e0;
        for (pcVar5 = pcVar8 + 2; (cVar2 = *pcVar5, cVar2 != '\0' && (cVar2 != '\r'));
            pcVar5 = pcVar5 + 1) {
          *pcVar7 = cVar2;
          pcVar7 = pcVar7 + 1;
        }
        *pcVar7 = '\0';
        pbVar4 = FUN_1000ba71(local_1e0);
        auStack_d0[local_8] = pbVar4;
      }
      else {
        pbVar10 = lpString1_00;
        if (cVar2 == '1') {
          for (pbVar4 = (byte *)(pcVar8 + 2); (bVar1 = *pbVar4, bVar1 != 0 && (bVar1 != 0xd));
              pbVar4 = pbVar4 + 1) {
            *pbVar10 = bVar1;
            pbVar10 = pbVar10 + 1;
          }
          *pbVar10 = 0;
          FUN_10009eff(lpString1_00,lpString1_00);
        }
        else if (cVar2 == '2') {
          lstrcpyA((LPSTR)lpString1_00,&DAT_1001f4b0);
        }
        else {
          if (cVar2 != '3') goto LAB_100151ca;
          wsprintfA((LPSTR)lpString1_00,&DAT_1001f4ac,param_5);
        }
        pbVar4 = lpString1_00;
        lpString1_00 = pbVar10 + 0x100;
      }
LAB_100151ca:
      if (*pcVar8 == '4') {
        *local_c = (uint)pbVar4;
        cVar2 = '4';
      }
      else {
        uVar3 = FUN_100154c2(pbVar4,pcVar8);
        *local_10 = uVar3;
        *local_c = uVar3;
        cVar2 = *pcVar8;
        if ('4' < cVar2) {
          puVar6 = local_10;
          if (cVar2 < '7') {
            puVar6 = (uint *)(local_90 + local_8 * 4 + 2);
          }
          *local_c = (uint)puVar6;
        }
      }
      while ((cVar2 != '\0' && (cVar2 != '\r'))) {
        pcVar5 = pcVar8 + 1;
        pcVar8 = pcVar8 + 1;
        cVar2 = *pcVar5;
      }
      for (; (*pcVar8 == '\r' || (*pcVar8 == '\n')); pcVar8 = pcVar8 + 1) {
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
      local_c = local_c + 1;
    } while (*pcVar8 != '\0');
  }
  switch(local_8) {
  case 0:
    param_2 = (undefined *)(*(code *)param_2)();
    break;
  case 1:
    param_2 = (undefined *)(*(code *)param_2)(local_50);
    break;
  case 2:
    param_2 = (undefined *)(*(code *)param_2)(local_50,local_4c);
    break;
  case 3:
    param_2 = (undefined *)(*(code *)param_2)(local_50,local_4c,local_48);
    break;
  case 4:
    param_2 = (undefined *)(*(code *)param_2)(local_50,local_4c,local_48,local_44);
    break;
  case 5:
    param_2 = (undefined *)(*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40);
    break;
  case 6:
    param_2 = (undefined *)(*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c)
    ;
    break;
  case 7:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38);
    break;
  case 8:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,
                                 local_34);
    break;
  case 9:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,
                                 local_34,local_30);
    break;
  case 10:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,
                                 local_34,local_30,local_2c);
    break;
  case 0xb:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,
                                 local_34,local_30,local_2c,local_28);
    break;
  case 0xc:
    param_2 = (undefined *)
              (*(code *)param_2)(local_50,local_4c,local_48,local_44,local_40,local_3c,local_38,
                                 local_34,local_30,local_2c,local_28,local_24);
  }
  if (*param_3 != '\0') {
    iVar9 = 0;
    do {
      if ((param_3[1] == '0') && (cVar2 = *param_3, '4' < cVar2)) {
        if (cVar2 == '5') {
          uVar3 = (uint)*(short *)(local_90 + iVar9);
LAB_100153f0:
          pCVar11 = &DAT_1001f8f8;
        }
        else {
          if (cVar2 == '6') {
            uVar3 = (uint)*(ushort *)(local_90 + iVar9);
            goto LAB_100153f0;
          }
          if (cVar2 == '7') {
            uVar3 = *(uint *)(local_90 + iVar9);
            pCVar11 = &DAT_1001f4c8;
          }
          else {
            if (cVar2 != '8') goto LAB_10015402;
            uVar3 = *(uint *)(local_90 + iVar9);
            pCVar11 = &DAT_1001f4ac;
          }
        }
        wsprintfA(*(LPSTR *)((int)auStack_d0 + iVar9),pCVar11,uVar3);
      }
LAB_10015402:
      for (; (*param_3 != '\0' && (*param_3 != '\r')); param_3 = param_3 + 1) {
      }
      for (; (*param_3 == '\r' || (*param_3 == '\n')); param_3 = param_3 + 1) {
      }
      iVar9 = iVar9 + 4;
    } while (*param_3 != '\0');
  }
  if (*param_4 == '\0') {
    return;
  }
  if (param_4[1] == '\0') {
    return;
  }
  lpString1 = FUN_1000ba71(param_4 + 1);
  cVar2 = *param_4;
  if (cVar2 == '0') {
    param_2 = (undefined *)(int)(short)param_2;
  }
  else {
    if (cVar2 != '1') {
      if (cVar2 == '2') {
        pCVar11 = &DAT_1001f4c8;
      }
      else {
        if (cVar2 != '3') {
          if (cVar2 != '4') {
            return;
          }
          lstrcpyA(lpString1,param_2);
          return;
        }
        pCVar11 = &DAT_1001f4ac;
      }
      goto LAB_1001547f;
    }
    param_2 = (undefined *)((uint)param_2 & 0xffff);
  }
  pCVar11 = &DAT_1001f8f8;
LAB_1001547f:
  wsprintfA(lpString1,pCVar11,param_2);
  return;
}


