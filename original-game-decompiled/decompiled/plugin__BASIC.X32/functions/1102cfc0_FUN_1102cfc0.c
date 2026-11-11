
/* ==== FUN_1102cfc0 @ 1102cfc0 ==== 
 * signature: char * __cdecl FUN_1102cfc0(byte * param_1, char * param_2, undefined4 * param_3, uint * param_4)
 * body: 1102cfc0-1102d189
 */

char * __cdecl FUN_1102cfc0(byte *param_1,char *param_2,undefined4 *param_3,uint *param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  char local_88 [136];
  
  if (param_1 == (byte *)0x0) {
    return (char *)0x0;
  }
  if ((*param_1 == 0x43) && (param_1[1] == 0)) {
    *param_2 = 'C';
    param_2[1] = '\0';
    if (param_3 != (undefined4 *)0x0) {
      *(undefined2 *)param_3 = 0;
      *(undefined2 *)((int)param_3 + 2) = 0;
      *(undefined2 *)(param_3 + 1) = 0;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = 0;
      return param_2;
    }
  }
  else {
    pbVar3 = &DAT_11037028;
    pbVar5 = param_1;
    do {
      bVar2 = *pbVar3;
      bVar10 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_1102d052:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_1102d057;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar10 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_1102d052;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_1102d057:
    if (iVar4 != 0) {
      pbVar3 = &DAT_11036fa0;
      pbVar5 = param_1;
      do {
        bVar2 = *pbVar3;
        bVar10 = bVar2 < *pbVar5;
        if (bVar2 != *pbVar5) {
LAB_1102d086:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_1102d08b;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar3[1];
        bVar10 = bVar2 < pbVar5[1];
        if (bVar2 != pbVar5[1]) goto LAB_1102d086;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_1102d08b:
      if (iVar4 != 0) {
        iVar4 = FUN_1102d1f0(local_88,(char *)param_1);
        if (iVar4 != 0) {
          return (char *)0x0;
        }
        iVar4 = FUN_1102f8d0(local_88,&DAT_11036f90,(LCTYPE)local_88);
        if (iVar4 == 0) {
          return (char *)0x0;
        }
        DAT_11036f98 = (uint)DAT_11036f94;
        FUN_1102d2f0(&DAT_11037028,local_88);
        if (*param_1 == 0) {
          param_1 = &DAT_11037028;
        }
        uVar6 = 0xffffffff;
        do {
          pbVar5 = param_1;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pbVar5 = param_1 + 1;
          bVar2 = *param_1;
          param_1 = pbVar5;
        } while (bVar2 != 0);
        uVar6 = ~uVar6;
        pbVar5 = pbVar5 + -uVar6;
        pbVar3 = &DAT_11036fa0;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pbVar3 = *(undefined4 *)pbVar5;
          pbVar5 = pbVar5 + 4;
          pbVar3 = pbVar3 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar3 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          pbVar3 = pbVar3 + 1;
        }
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = DAT_11036f90;
      *(ushort *)(param_3 + 1) = DAT_11036f94;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = DAT_11036f98;
    }
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_11037028;
    do {
      pcVar9 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar9 + -uVar6;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *param_2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      param_2 = param_2 + 1;
    }
    param_2 = &DAT_11037028;
  }
  return param_2;
}


