
/* ==== FUN_004285e0 @ 004285e0 ==== 
 * signature: undefined4 __cdecl FUN_004285e0(int param_1, int param_2, short * param_3, ushort * param_4, int param_5, short param_6)
 * body: 004285e0-0042880e
 */

undefined4 __cdecl
FUN_004285e0(int param_1,int param_2,short *param_3,ushort *param_4,int param_5,short param_6)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  ushort *local_c;
  short sStack_6;
  
  if ((param_6 != 1) && (param_6 != 2)) {
    return 0x10000;
  }
  sStack_6 = param_3[1];
  local_c = (ushort *)(param_1 + (int)param_6 * (int)*param_3 + param_2 * sStack_6);
  puVar10 = (ushort *)(param_5 + (int)param_4);
  iVar11 = (int)param_3[2] - (int)*param_3;
  sVar2 = param_3[3];
  puVar7 = (ushort *)(((int)sVar2 - (int)sStack_6) * param_2 + (int)local_c);
  if (param_6 == 1) {
    if (sStack_6 < sVar2) {
      do {
        puVar8 = local_c;
        while( true ) {
          while( true ) {
            if (((puVar10 <= param_4) || (puVar7 <= puVar8)) ||
               ((ushort *)(iVar11 + (int)local_c) <= puVar8)) goto LAB_00428708;
            bVar4 = (byte)*param_4;
            puVar9 = (ushort *)((int)param_4 + 1);
            if (bVar4 == 0) break;
            if ((bVar4 & 0x80) == 0) {
              bVar1 = *(byte *)puVar9;
              param_4 = param_4 + 1;
              if ('\0' < (char)bVar4) {
                puVar9 = puVar8;
                for (uVar6 = (uint)(bVar4 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(uint *)puVar9 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
                  puVar9 = puVar9 + 2;
                }
                puVar8 = (ushort *)((int)puVar8 + (uint)bVar4);
                for (uVar6 = bVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                  *(byte *)puVar9 = bVar1;
                  puVar9 = (ushort *)((int)puVar9 + 1);
                }
              }
            }
            else {
              param_4 = puVar9;
              for (bVar4 = bVar4 & 0x7f; bVar4 != 0; bVar4 = bVar4 - 1) {
                uVar5 = *param_4;
                param_4 = (ushort *)((int)param_4 + 1);
                *(byte *)puVar8 = (byte)uVar5;
                puVar8 = (ushort *)((int)puVar8 + 1);
              }
            }
          }
          bVar4 = *(byte *)puVar9;
          param_4 = param_4 + 1;
          if ((bVar4 & 0x80) != 0) break;
          puVar8 = (ushort *)((int)puVar8 + (int)(char)bVar4);
        }
        sStack_6 = (char)(bVar4 & 0x7f) + -1 + sStack_6;
        local_c = (ushort *)((int)local_c + ((short)(char)(bVar4 & 0x7f) + -1) * param_2);
LAB_00428708:
        sStack_6 = sStack_6 + 1;
        local_c = (ushort *)((int)local_c + param_2);
        if (param_3[3] <= sStack_6) {
          return 0;
        }
      } while( true );
    }
  }
  else if ((param_6 == 2) && (sStack_6 < sVar2)) {
    do {
      puVar7 = local_c;
      while( true ) {
        while( true ) {
          if ((puVar10 <= param_4) || (local_c + iVar11 <= puVar7)) goto LAB_004287eb;
          uVar5 = *param_4;
          puVar8 = param_4 + 1;
          if (uVar5 == 0) break;
          if ((uVar5 & 0x8000) == 0) {
            uVar3 = *puVar8;
            param_4 = param_4 + 2;
            if (0 < (short)uVar5) {
              puVar8 = puVar7 + uVar5;
              for (uVar6 = (uint)(uVar5 >> 1); uVar6 != 0; uVar6 = uVar6 - 1) {
                *(uint *)puVar7 = CONCAT22(uVar3,uVar3);
                puVar7 = puVar7 + 2;
              }
              puVar9 = puVar7;
              for (uVar6 = (uint)((uVar5 & 1) != 0); puVar7 = puVar8, uVar6 != 0; uVar6 = uVar6 - 1)
              {
                *puVar9 = uVar3;
                puVar9 = puVar9 + 1;
              }
            }
          }
          else {
            param_4 = puVar8;
            for (uVar5 = uVar5 & 0x7fff; uVar5 != 0; uVar5 = uVar5 - 1) {
              uVar3 = *param_4;
              param_4 = param_4 + 1;
              *puVar7 = uVar3;
              puVar7 = puVar7 + 1;
            }
          }
        }
        uVar5 = *puVar8;
        param_4 = param_4 + 2;
        if ((uVar5 & 0x8000) != 0) break;
        puVar7 = puVar7 + (short)uVar5;
      }
      sStack_6 = ((uVar5 & 0x7f) - 1) + sStack_6;
      local_c = (ushort *)((int)local_c + ((short)(uVar5 & 0x7f) + -1) * param_2);
LAB_004287eb:
      sStack_6 = sStack_6 + 1;
      local_c = (ushort *)((int)local_c + param_2);
    } while (sStack_6 < param_3[3]);
  }
  return 0;
}


