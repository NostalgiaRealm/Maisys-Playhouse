
/* ==== FUN_1000e0eb @ 1000e0eb ==== 
 * signature: undefined __cdecl FUN_1000e0eb(byte * param_1, byte * param_2)
 * body: 1000e0eb-1000e776
 */

void __cdecl FUN_1000e0eb(byte *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  LPCSTR lpString2;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined4 auStack_22c [128];
  byte local_2c [32];
  char *local_c;
  int local_8;
  
  local_8 = 0;
  bVar2 = *param_1;
  pbVar4 = param_1;
  pbVar12 = param_2;
  iVar9 = local_8;
  while (bVar2 != 0) {
    local_8 = iVar9;
    auStack_22c[iVar9] = pbVar12;
    if (bVar2 < 0x80) {
      if (bVar2 == 0x22) {
        while( true ) {
          pbVar7 = param_1 + 1;
          bVar2 = *pbVar7;
          if ((bVar2 == 0) || ((bVar2 == 0x22 && (param_1[2] != 0x22)))) break;
          *pbVar12 = bVar2;
          if ((*pbVar7 == 0x22) && (param_1[2] == 0x22)) {
            pbVar7 = param_1 + 2;
          }
          pbVar12 = pbVar12 + 1;
          param_1 = pbVar7;
        }
        *pbVar12 = 0;
        param_1 = param_1 + 2;
        local_8 = iVar9 + 1;
        goto LAB_1000e66b;
      }
      if (DAT_100200d4 < 2) {
        uVar8 = (byte)PTR_DAT_1001fec8[(char)bVar2 * 2] & 4;
      }
      else {
        uVar8 = FUN_10015ac0((int)(char)bVar2,4);
      }
      if (uVar8 == 0) {
        if (DAT_100200d4 < 2) {
          uVar8 = *(ushort *)(PTR_DAT_1001fec8 + (char)*param_1 * 2) & 0x103;
        }
        else {
          uVar8 = FUN_10015ac0((int)(char)*param_1,0x103);
        }
        if (uVar8 == 0) goto switchD_1000e138_caseD_84;
        pbVar7 = local_2c;
        for (; (bVar2 = *param_1, bVar2 != 0 && (bVar2 != 0x20)); param_1 = param_1 + 1) {
          *pbVar7 = bVar2;
          pbVar7 = pbVar7 + 1;
        }
        *pbVar7 = 0;
        lpString2 = FUN_1000ba71((LPCSTR)local_2c);
        lstrcpyA((LPSTR)pbVar12,lpString2);
        iVar9 = lstrlenA((LPCSTR)pbVar12);
        pbVar12 = pbVar12 + iVar9 + 1;
      }
      else {
        while( true ) {
          if (DAT_100200d4 < 2) {
            uVar8 = (byte)PTR_DAT_1001fec8[(char)*param_1 * 2] & 4;
          }
          else {
            uVar8 = FUN_10015ac0((int)(char)*param_1,4);
          }
          if (uVar8 == 0) break;
          bVar2 = *param_1;
          param_1 = param_1 + 1;
          *pbVar12 = bVar2;
          pbVar12 = pbVar12 + 1;
        }
        *pbVar12 = 0;
        pbVar12 = pbVar12 + 1;
      }
      local_8 = local_8 + 1;
      goto LAB_1000e74e;
    }
    switch(bVar2) {
    case 0x80:
      pbVar4 = (byte *)lstrlenA((LPCSTR)auStack_22c[iVar9 + -1]);
      break;
    case 0x81:
      puVar3 = (uint *)auStack_22c[iVar9 + -1];
      cVar1 = (char)*puVar3;
      puVar6 = puVar3;
      while (cVar1 == ' ') {
        puVar6 = (uint *)((int)puVar6 + 1);
        cVar1 = *(char *)puVar6;
      }
      if (puVar6 != puVar3) {
        for (; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + 1)) {
          *(char *)puVar3 = (char)*puVar6;
          puVar3 = (uint *)((int)puVar3 + 1);
        }
LAB_1000e5be:
        *(char *)puVar3 = '\0';
      }
      break;
    case 0x82:
      iVar5 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      goto LAB_1000e2ad;
    case 0x83:
      pcVar11 = (char *)0x0;
      for (pcVar10 = (char *)auStack_22c[iVar9 + -1]; cVar1 = *pcVar10, cVar1 != '\0';
          pcVar10 = pcVar10 + 1) {
        if (DAT_100200d4 < 2) {
          uVar8 = (byte)PTR_DAT_1001fec8[cVar1 * 2] & 8;
        }
        else {
          uVar8 = FUN_10015ac0((int)cVar1,8);
        }
        if (uVar8 == 0) {
          pcVar11 = pcVar10;
        }
      }
      if (pcVar11 != (char *)0x0) {
        pcVar11[1] = '\0';
      }
      break;
    default:
      goto switchD_1000e138_caseD_84;
    case 0x85:
      CharUpperA((LPSTR)auStack_22c[iVar9 + -1]);
      break;
    case 0x87:
      CharLowerA((LPSTR)auStack_22c[iVar9 + -1]);
      break;
    case 0x9e:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      if (iVar5 != 0) {
LAB_1000e205:
        iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
        if (iVar9 != 0) goto LAB_1000e219;
      }
      pbVar4 = (byte *)0x0;
      break;
    case 0x9f:
      if ((*(char *)auStack_22c[iVar9 + -1] != '\0') &&
         (puVar3 = FUN_100169d0((uint *)auStack_22c[local_8 + -2],(char *)auStack_22c[iVar9 + -1]),
         puVar3 != (uint *)0x0)) goto LAB_1000e57e;
      break;
    case 0xa0:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      if (iVar5 == 0) goto LAB_1000e205;
LAB_1000e219:
      pbVar4 = (byte *)0x1;
      break;
    case 0xa1:
      local_c = (char *)auStack_22c[iVar9 + -1];
      if (*local_c != '\0') {
        puVar3 = (uint *)auStack_22c[local_8 + -2];
        puVar6 = FUN_100169d0(puVar3,local_c);
        if (puVar6 != (uint *)0x0) {
          iVar9 = lstrlenA(local_c);
          for (pcVar10 = (char *)((int)puVar6 + iVar9); *pcVar10 != '\0'; pcVar10 = pcVar10 + 1) {
            *(char *)puVar3 = *pcVar10;
            puVar3 = (uint *)((int)puVar3 + 1);
          }
        }
        goto LAB_1000e5be;
      }
      break;
    case 0xa2:
      if (DAT_100200d4 < 2) {
        pbVar12 = (byte *)auStack_22c[iVar9 + -2];
        uVar8 = (byte)PTR_DAT_1001fec8[(char)*pbVar12 * 2] & 4;
      }
      else {
        pbVar12 = (byte *)auStack_22c[local_8 + -2];
        uVar8 = FUN_10015ac0((int)(char)*pbVar12,4);
      }
      if (uVar8 != 0) {
        pbVar4 = (byte *)auStack_22c[iVar9 + -1];
        if (DAT_100200d4 < 2) {
          uVar8 = (byte)PTR_DAT_1001fec8[(char)*pbVar4 * 2] & 4;
        }
        else {
          uVar8 = FUN_10015ac0((int)(char)*pbVar4,4);
        }
        if (uVar8 != 0) {
          iVar9 = FUN_10016190(pbVar4);
          iVar5 = FUN_10016190(pbVar12);
          iVar5 = iVar5 - iVar9;
          goto LAB_1000e2ad;
        }
      }
      iVar5 = lstrcmpA((LPCSTR)pbVar12,(LPCSTR)auStack_22c[iVar9 + -1]);
LAB_1000e2ad:
      pbVar4 = (byte *)(uint)(iVar5 == 0);
      break;
    case 0xa3:
      pbVar4 = (byte *)FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      puVar3 = (uint *)auStack_22c[local_8 + -2];
      for (; ((char)*puVar3 != '\0' && (0 < (int)pbVar4)); pbVar4 = pbVar4 + -1) {
        puVar3 = (uint *)((int)puVar3 + 1);
      }
LAB_1000e57e:
      *(char *)puVar3 = '\0';
      break;
    case 0xa4:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(uint)(iVar5 < iVar9);
      break;
    case 0xa5:
      pbVar12 = (byte *)auStack_22c[iVar9 + -1];
      pbVar4 = (byte *)FUN_10016190(pbVar12);
      pbVar7 = (byte *)auStack_22c[local_8 + -2];
      if (((int)pbVar4 < (int)(pbVar12 + (-1 - (int)pbVar7))) && (-1 < (int)pbVar4)) {
        bVar2 = pbVar12[-1 - (int)pbVar4];
        if (bVar2 != 0) {
          iVar9 = -(int)pbVar7;
          do {
            *pbVar7 = bVar2;
            bVar2 = pbVar7[(int)(pbVar12 + (iVar9 - (int)pbVar4))];
            pbVar7 = pbVar7 + 1;
          } while (bVar2 != 0);
        }
        *pbVar7 = 0;
      }
      break;
    case 0xa6:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(uint)(iVar9 < iVar5);
      break;
    case 0xa7:
      for (pcVar10 = (char *)auStack_22c[iVar9 + -1]; *pcVar10 != '\0'; pcVar10 = pcVar10 + 1) {
        pcVar10[-1] = *pcVar10;
      }
      pcVar10[-1] = '\0';
      break;
    case 0xa8:
      if (DAT_100200d4 < 2) {
        pbVar12 = (byte *)auStack_22c[iVar9 + -2];
        uVar8 = (byte)PTR_DAT_1001fec8[(char)*pbVar12 * 2] & 4;
      }
      else {
        pbVar12 = (byte *)auStack_22c[local_8 + -2];
        uVar8 = FUN_10015ac0((int)(char)*pbVar12,4);
      }
      if (uVar8 != 0) {
        pbVar4 = (byte *)auStack_22c[iVar9 + -1];
        if (DAT_100200d4 < 2) {
          uVar8 = (byte)PTR_DAT_1001fec8[(char)*pbVar4 * 2] & 4;
        }
        else {
          uVar8 = FUN_10015ac0((int)(char)*pbVar4,4);
        }
        if (uVar8 != 0) {
          iVar9 = FUN_10016190(pbVar4);
          iVar5 = FUN_10016190(pbVar12);
          pbVar4 = (byte *)(uint)(iVar5 != iVar9);
          break;
        }
      }
      pbVar4 = (byte *)lstrcmpA((LPCSTR)pbVar12,(LPCSTR)auStack_22c[iVar9 + -1]);
      break;
    case 0xaa:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(uint)(iVar5 <= iVar9);
      break;
    case 0xac:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(uint)(iVar9 <= iVar5);
      break;
    case 0xae:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(iVar5 + iVar9);
      break;
    case 0xb0:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(iVar5 - iVar9);
      break;
    case 0xb2:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(iVar5 * iVar9);
      break;
    case 0xb4:
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar9 = FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      pbVar4 = (byte *)(iVar5 / iVar9);
      break;
    case 0xb6:
      pbVar4 = (byte *)0x0;
      puVar3 = (uint *)auStack_22c[local_8 + -2];
      puVar6 = FUN_100169d0(puVar3,(char *)auStack_22c[iVar9 + -1]);
      if (puVar6 != (uint *)0x0) {
        pbVar4 = (byte *)((int)puVar6 + (1 - (int)puVar3));
      }
      break;
    case 0xbd:
      pbVar4 = (byte *)FUN_10016190((byte *)auStack_22c[iVar9 + -1]);
      iVar9 = local_8;
      iVar5 = FUN_10016190((byte *)auStack_22c[local_8 + -2]);
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      pcVar10 = (char *)auStack_22c[iVar9 + -3];
      for (pcVar11 = pcVar10; (0 < iVar5 && (*pcVar11 != '\0')); pcVar11 = pcVar11 + 1) {
        iVar5 = iVar5 + -1;
      }
      for (; (*pcVar11 != '\0' && (0 < (int)pbVar4)); pbVar4 = pbVar4 + -1) {
        *pcVar10 = *pcVar11;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      *pcVar10 = '\0';
    }
    iVar9 = local_8 + (int)(*param_1 - 0x80) / -0x1e;
    local_8 = iVar9;
    if ((uint)*param_1 % 2 == 0) {
      wsprintfA((LPSTR)auStack_22c[iVar9 + -1],&DAT_1001f4c8,pbVar4);
    }
    for (pbVar12 = (byte *)auStack_22c[iVar9 + -1]; *pbVar12 != 0; pbVar12 = pbVar12 + 1) {
    }
    param_1 = param_1 + 1;
LAB_1000e66b:
    pbVar12 = pbVar12 + 1;
LAB_1000e74e:
    bVar2 = *param_1;
    while (bVar2 == 0x20) {
      param_1 = param_1 + 1;
      bVar2 = *param_1;
    }
    iVar9 = local_8;
    bVar2 = *param_1;
  }
  if (iVar9 != 1) {
switchD_1000e138_caseD_84:
    *param_2 = 0;
  }
  return;
}


