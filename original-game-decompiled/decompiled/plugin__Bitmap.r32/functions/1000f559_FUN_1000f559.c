
/* ==== FUN_1000f559 @ 1000f559 ==== 
 * signature: undefined FUN_1000f559(void)
 * body: 1000f559-1000f55f
 */

void FUN_1000f559(int *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  ushort *puVar7;
  ushort *puVar8;
  short *psStack_20;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  byte bStack_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  short sStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  ushort uStack_2;
  
  iStack_14 = 0;
  bStack_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  sStack_8 = 0;
  uStack_6 = 0;
  uVar3 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar1 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar6 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar4 = uVar3 + uVar1;
  uStack_4 = 0;
  uStack_2 = 0;
  if (((0x7ffe < uVar1) || (0x7ffe < uVar3)) || (0xbffd < uVar4)) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
    return;
  }
  if (uVar4 < 0x3fc0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  if (((uVar1 == 0) && (uVar4 = uVar4 + 1, (param_1[2] & 0x7fffffffU) == 0)) &&
     ((param_1[1] == 0 && (*param_1 == 0)))) {
    *(undefined2 *)((int)param_1 + 10) = 0;
    return;
  }
  if (((uVar3 == 0) && (uVar4 = uVar4 + 1, (param_2[2] & 0x7fffffffU) == 0)) &&
     ((param_2[1] == 0 && (*param_2 == 0)))) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  psStack_20 = &sStack_8;
  iStack_18 = 0;
  iVar5 = 5;
  do {
    if (0 < iVar5) {
      puVar8 = (ushort *)(param_2 + 2);
      puVar7 = (ushort *)(iStack_18 * 2 + (int)param_1);
      iStack_10 = iVar5;
      do {
        iVar2 = FUN_1000e070(*(uint *)(psStack_20 + -2),(uint)*puVar8 * (uint)*puVar7,
                             (uint *)(psStack_20 + -2));
        if (iVar2 != 0) {
          *psStack_20 = *psStack_20 + 1;
        }
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + -1;
        iStack_10 = iStack_10 + -1;
      } while (iStack_10 != 0);
    }
    psStack_20 = psStack_20 + 1;
    iStack_18 = iStack_18 + 1;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  uVar4 = uVar4 + 0xc002;
  while ((0 < (short)uVar4 && ((uStack_2 & 0x8000) == 0))) {
    FUN_1000e110((uint *)&bStack_c);
    uVar4 = uVar4 - 1;
  }
  if ((short)uVar4 < 1) {
    uVar4 = uVar4 - 1;
    if ((short)uVar4 < 0) {
      iVar5 = -(int)(short)uVar4;
      uVar4 = uVar4 + (short)iVar5;
      do {
        if ((bStack_c & 1) != 0) {
          iStack_14 = iStack_14 + 1;
        }
        FUN_1000e140((uint *)&bStack_c);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (iStack_14 != 0) {
      bStack_c = bStack_c | 1;
    }
  }
  if ((0x8000 < CONCAT11(uStack_b,bStack_c)) ||
     (iVar2 = CONCAT22(uStack_4,uStack_6), iVar5 = CONCAT22(sStack_8,uStack_a),
     (CONCAT22(uStack_a,CONCAT11(uStack_b,bStack_c)) & 0x1ffff) == 0x18000)) {
    if (CONCAT22(sStack_8,uStack_a) == -1) {
      iVar5 = 0;
      if (CONCAT22(uStack_4,uStack_6) == -1) {
        if (uStack_2 == 0xffff) {
          uStack_2 = 0x8000;
          uVar4 = uVar4 + 1;
          iVar2 = 0;
          iVar5 = 0;
        }
        else {
          uStack_2 = uStack_2 + 1;
          iVar2 = 0;
          iVar5 = 0;
        }
      }
      else {
        iVar2 = CONCAT22(uStack_4,uStack_6) + 1;
      }
    }
    else {
      iVar5 = CONCAT22(sStack_8,uStack_a) + 1;
      iVar2 = CONCAT22(uStack_4,uStack_6);
    }
  }
  sStack_8 = (short)((uint)iVar5 >> 0x10);
  uStack_a = (undefined2)iVar5;
  uStack_4 = (undefined2)((uint)iVar2 >> 0x10);
  uStack_6 = (undefined2)iVar2;
  if (0x7ffe < uVar4) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[2] = (-(uint)(uVar6 != 0) & 0x80000000) + 0x7fff8000;
    return;
  }
  *(undefined2 *)param_1 = uStack_a;
  *(uint *)((int)param_1 + 2) = CONCAT22(uStack_6,sStack_8);
  *(uint *)((int)param_1 + 6) = CONCAT22(uStack_2,uStack_4);
  *(ushort *)((int)param_1 + 10) = uVar4 | uVar6;
  return;
}


