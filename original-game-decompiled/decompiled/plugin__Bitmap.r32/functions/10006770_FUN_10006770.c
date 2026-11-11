
/* ==== FUN_10006770 @ 10006770 ==== 
 * signature: undefined __cdecl FUN_10006770(int param_1, int param_2, int param_3, int param_4, int param_5, undefined4 * param_6, undefined4 * param_7, int param_8, int param_9, int param_10, int param_11, int param_12, int param_13, int param_14, int param_15, int param_16, undefined4 * param_17, undefined4 * param_18, int param_19, int param_20)
 * body: 10006770-10006cb0
 */

void __cdecl
FUN_10006770(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6,
            undefined4 *param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
            int param_13,int param_14,int param_15,int param_16,undefined4 *param_17,
            undefined4 *param_18,int param_19,int param_20)

{
  byte *pbVar1;
  int iVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  tagRECT local_30;
  RECT local_20;
  tagRECT local_10;
  
  local_20.right = (LONG)param_6;
  local_20.bottom = (LONG)param_7;
  local_20.left = 0;
  local_20.top = 0;
  IntersectRect(&local_10,(RECT *)&param_2,&local_20);
  local_20.right = param_16;
  local_20.bottom = (LONG)param_17;
  local_20.left = 0;
  local_20.top = 0;
  IntersectRect(&local_30,(RECT *)&param_12,&local_20);
  puVar8 = param_18;
  local_10.left = local_10.left + (local_30.left - param_12);
  local_10.top = local_10.top + (local_30.top - param_13);
  local_10.right = local_10.right + (local_30.right - param_14);
  local_10.bottom = local_10.bottom + (local_30.bottom - param_15);
  local_30.left = local_30.left + (local_10.left - param_2);
  local_30.top = local_30.top + (local_10.top - param_3);
  local_30.right = local_30.right + (local_10.right - param_4);
  local_30.bottom = local_30.bottom + (local_10.bottom - param_5);
  iVar7 = local_10.right - local_10.left;
  puVar4 = (undefined4 *)(local_10.bottom - local_10.top);
  param_16 = param_9 >> 3;
  uVar6 = iVar7 * param_16;
  if ((int)param_18 < 0) {
    param_17 = (undefined4 *)(((int)param_17 + (-1 - local_30.top)) * (int)param_18);
    puVar5 = (undefined4 *)((param_19 >> 3) * local_30.left - (int)param_17);
  }
  else {
    param_17 = (undefined4 *)(local_30.top * (int)param_18);
    puVar5 = (undefined4 *)((int)param_17 + (param_19 >> 3) * local_30.left);
  }
  puVar5 = (undefined4 *)(param_11 + (int)puVar5);
  if (param_8 < 0) {
    iVar2 = local_10.left * param_16 - ((int)param_7 + (-1 - local_10.top)) * param_8;
  }
  else {
    iVar2 = local_10.left * param_16 + local_10.top * param_8;
  }
  puVar9 = (undefined4 *)(param_1 + iVar2);
  param_6 = puVar4;
  if (param_9 == 0x10) {
    switch(param_19) {
    case 8:
      param_17 = puVar4;
      if (0 < (int)puVar4) {
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              pbVar1 = (byte *)(param_20 + (uint)*(byte *)((int)puVar5 + iVar2) * 4);
              *(ushort *)((int)puVar9 + iVar2 * 2) =
                   (pbVar1[1] & 0xfff8 |
                   (*(byte *)(param_20 + 2 + (uint)*(byte *)((int)puVar5 + iVar2) * 4) & 0xfff8) <<
                   5) << 2 | (ushort)(*pbVar1 >> 3);
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)param_18);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_17 = (undefined4 *)((int)param_17 + -1);
        } while (param_17 != (undefined4 *)0x0);
        return;
      }
      break;
    case 0xf:
      if (0 < (int)puVar4) {
        param_16 = 2;
        do {
          FUN_100094f0(puVar9,puVar5,uVar6);
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
        } while (puVar4 != (undefined4 *)0x0);
        return;
      }
      break;
    case 0x10:
      if (0 < (int)puVar4) {
        param_16 = 2;
        do {
          FUN_100094f0(puVar9,puVar5,uVar6);
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          puVar4 = (undefined4 *)((int)puVar4 + -1);
        } while (puVar4 != (undefined4 *)0x0);
        return;
      }
      break;
    case 0x18:
      param_17 = puVar4;
      if (0 < (int)puVar4) {
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              pbVar1 = (byte *)((int)puVar5 + iVar2 * 3);
              *(ushort *)((int)puVar9 + iVar2 * 2) =
                   (*(byte *)((int)puVar5 + iVar2 * 3 + 1) & 0xfff8 | (pbVar1[2] & 0xfff8) << 5) <<
                   2 | (ushort)(*pbVar1 >> 3);
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)param_18);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_17 = (undefined4 *)((int)param_17 + -1);
        } while (param_17 != (undefined4 *)0x0);
        return;
      }
      break;
    case 0x20:
      param_18 = puVar4;
      if (0 < (int)puVar4) {
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              *(ushort *)((int)puVar9 + iVar2 * 2) =
                   (*(byte *)((int)puVar5 + iVar2 * 4 + 1) & 0xfff8 |
                   (*(byte *)((int)puVar5 + iVar2 * 4 + 2) & 0xfff8) << 5) << 2 |
                   (ushort)(*(byte *)(puVar5 + iVar2) >> 3);
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_18 = (undefined4 *)((int)param_18 + -1);
        } while (param_18 != (undefined4 *)0x0);
        return;
      }
    }
  }
  else if (param_9 == 8) {
    pvVar3 = GlobalAlloc(0x42,0x8000);
    param_17 = GlobalLock(pvVar3);
    pvVar3 = GlobalAlloc(0x42,0x20000);
    param_7 = GlobalLock(pvVar3);
    FUN_10007db0(0x100,param_10,5,param_7,(int)param_17);
    pvVar3 = GlobalHandle(param_7);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(param_7);
    GlobalFree(pvVar3);
    puVar4 = param_17;
    switch(param_19) {
    case 8:
      if (0 < (int)param_6) {
        param_7 = param_6;
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              pbVar1 = (byte *)(param_20 + (uint)*(byte *)((int)puVar5 + iVar2) * 4);
              *(undefined1 *)((int)puVar9 + iVar2) =
                   *(undefined1 *)
                    ((int)param_17 +
                    ((pbVar1[2] & 0xfffffff8) * 0x20 + (pbVar1[1] & 0xfffffff8)) * 4 +
                    (uint)(*pbVar1 >> 3));
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
              puVar8 = param_18;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_7 = (undefined4 *)((int)param_7 + -1);
        } while (param_7 != (undefined4 *)0x0);
        switchD_10006c18::default();
        return;
      }
      break;
    case 0x10:
      if (0 < (int)param_6) {
        param_7 = param_6;
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              uVar6 = (uint)*(ushort *)((int)puVar5 + iVar2 * 2);
              *(undefined1 *)((int)puVar9 + iVar2) =
                   *(undefined1 *)
                    ((int)param_17 + (uVar6 & 0x3e0) + (uVar6 & 0x7c00) + (uVar6 & 0x1f));
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
              puVar8 = param_18;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_7 = (undefined4 *)((int)param_7 + -1);
        } while (param_7 != (undefined4 *)0x0);
        switchD_10006c18::default();
        return;
      }
      break;
    case 0x18:
      if (0 < (int)param_6) {
        param_7 = param_6;
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              pbVar1 = (byte *)((int)puVar5 + iVar2 * 3);
              *(undefined1 *)((int)puVar9 + iVar2) =
                   *(undefined1 *)
                    ((int)param_17 +
                    ((*(byte *)((int)puVar5 + iVar2 * 3 + 2) & 0xfffffff8) * 0x20 +
                    (pbVar1[1] & 0xfffffff8)) * 4 + (uint)(*pbVar1 >> 3));
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
              puVar8 = param_18;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_7 = (undefined4 *)((int)param_7 + -1);
        } while (param_7 != (undefined4 *)0x0);
        param_7 = (undefined4 *)0x0;
      }
      break;
    case 0x20:
      if (0 < (int)param_6) {
        param_7 = param_6;
        do {
          iVar2 = 0;
          param_19 = 0;
          if (0 < iVar7) {
            do {
              *(undefined1 *)((int)puVar9 + iVar2) =
                   *(undefined1 *)
                    ((int)param_17 +
                    ((*(byte *)((int)puVar5 + iVar2 * 4 + 2) & 0xfffffff8) * 0x20 +
                    (*(byte *)((int)puVar5 + iVar2 * 4 + 1) & 0xfffffff8)) * 4 +
                    (uint)(*(byte *)(puVar5 + iVar2) >> 3));
              param_19 = param_19 + 1;
              iVar2 = (int)(short)param_19;
              puVar8 = param_18;
            } while (iVar2 < iVar7);
          }
          puVar5 = (undefined4 *)((int)puVar5 + (int)puVar8);
          puVar9 = (undefined4 *)((int)puVar9 + param_8);
          param_7 = (undefined4 *)((int)param_7 + -1);
        } while (param_7 != (undefined4 *)0x0);
      }
    }
    pvVar3 = GlobalHandle(param_17);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(puVar4);
    GlobalFree(pvVar3);
  }
  return;
}


