
/* ==== FUN_1201e130 @ 1201e130 ==== 
 * signature: int __cdecl FUN_1201e130(int param_1, int * param_2)
 * body: 1201e130-1201e911
 */

/* WARNING: Type propagation algorithm not settling */

int __cdecl FUN_1201e130(int param_1,int *param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 uStack_28;
  undefined4 uStack_26;
  
  if ((*(byte *)(param_1 + 0xba) & 2) == 0) {
    bVar4 = false;
    bVar2 = false;
    local_34 = 0;
    iVar10 = (-(uint)(*(int *)(param_1 + 0xae) == 2) & 0x80000000) + 0x7fffffff;
    pcVar5 = (code *)FUN_12027370(param_1,0,0x20,&local_40);
    DAT_12039a9c = (*pcVar5)(CONCAT22(local_40._2_2_,(undefined2)local_40),&local_30);
    if (DAT_12039a9c != 0) {
      return DAT_12039a9c;
    }
    if (param_2 != (int *)0x0) {
      iVar10 = *param_2;
      local_34 = param_2[3];
    }
    if ((*(byte *)(param_1 + 0xba) & 8) == 0) {
      *(int *)(param_1 + 0xb6) = iVar10;
      *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) | 8;
    }
    local_2c._0_2_ = 0xf;
    local_2c._2_2_ = 0;
    uStack_28 = 0;
    uStack_26 = 0;
    pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_40);
    DAT_12039a9c = (*pcVar5)(CONCAT22(local_40._2_2_,(undefined2)local_40),local_30,&DAT_12037a64,0,
                             &local_2c);
    iVar9 = 2;
    if ((double)CONCAT44(uStack_26,CONCAT22(uStack_28,local_2c._2_2_)) < 0.0) {
      iVar9 = 3;
    }
    bVar8 = *(byte *)(param_1 + 0xba);
    *(int *)(param_1 + 0xae) = iVar9;
    if (((bVar8 & 0x10) == 0) && (*(short *)(param_1 + 0x94) == 0xb)) {
      if (iVar9 == 2) {
        *(undefined4 *)(param_1 + 0xb6) = 0xffffffff;
      }
      else if (iVar9 == 3) {
        *(undefined4 *)(param_1 + 0xb6) = 0x7fffffff;
      }
    }
    if ((((*(uint *)(param_1 + 0xc4) & 8) == 0) || ((local_34 & 0x10) == 0)) &&
       (((*(uint *)(param_1 + 0xc4) & 0x10) == 0 || ((local_34 & 8) == 0)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((iVar9 == 2) && (iVar10 < *(int *)(param_1 + 0xb6))) ||
       ((iVar9 == 3 && (*(int *)(param_1 + 0xb6) < iVar10)))) {
      bVar2 = bVar4;
      if ((((bVar8 & 1) == 0) && (iVar10 != -1)) && (bVar3)) {
        bVar2 = true;
      }
      *(byte *)(param_1 + 0xba) = bVar8 & 0xfe;
    }
    uVar11 = local_34 & 0x24;
    if (uVar11 != 0) {
      bVar2 = false;
      goto LAB_1201e8ab;
    }
    if (*(short *)(param_1 + 0x94) == 1) {
      if ((*(byte *)(param_1 + 0xba) & 1) != 0) goto LAB_1201e8ab;
      if (iVar9 == 2) {
        iVar9 = *(int *)(param_1 + 0xb6);
        if (iVar9 < 0) goto LAB_1201e8ab;
        if (iVar10 < iVar9) {
          local_40._0_2_ = 0xb;
          local_40._2_2_ = 0;
          local_3c = 0;
          uStack_3a = 0;
          uStack_38 = 0;
          FUN_1201e920(local_30,(int)&local_40);
          iVar7 = *(int *)(param_1 + 0x96);
          if ((*(int *)(param_1 + 0xb6) < iVar7) && (iVar7 <= CONCAT22(uStack_38,uStack_3a)))
          goto LAB_1201e8a9;
          if (iVar7 < CONCAT22(local_3c,local_40._2_2_)) goto LAB_1201e8ab;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x96);
          if (iVar7 <= iVar9) goto LAB_1201e8ab;
        }
        if (iVar10 < iVar7) goto LAB_1201e8ab;
      }
      else {
        if ((iVar9 != 3) || (iVar9 = *(int *)(param_1 + 0xb6), iVar9 == 0x7fffffff))
        goto LAB_1201e8ab;
        if (iVar9 < iVar10) {
          local_40._0_2_ = 0xb;
          local_40._2_2_ = 0;
          local_3c = 0;
          uStack_3a = 0;
          uStack_38 = 0;
          FUN_1201e920(local_30,(int)&local_40);
          iVar7 = *(int *)(param_1 + 0x96);
          if ((iVar7 < *(int *)(param_1 + 0xb6)) && (CONCAT22(local_3c,local_40._2_2_) <= iVar7))
          goto LAB_1201e8a9;
          if (CONCAT22(uStack_38,uStack_3a) < iVar7) goto LAB_1201e8ab;
        }
        else {
          iVar7 = *(int *)(param_1 + 0x96);
          if (iVar9 <= iVar7) goto LAB_1201e8ab;
        }
        if (iVar7 < iVar10) goto LAB_1201e8ab;
      }
    }
    else {
      if (*(short *)(param_1 + 0x94) != 0xb) goto LAB_1201e8ab;
      iVar7 = *(int *)(param_1 + 0x90);
      if (iVar7 == 0) {
        if ((*(byte *)(param_1 + 0xba) & 1) != 0) goto LAB_1201e8ab;
        if (iVar9 == 2) {
          if ((iVar10 < *(int *)(param_1 + 0x96)) || (*(int *)(param_1 + 0x9a) < iVar10)) {
            if ((iVar10 <= *(int *)(param_1 + 0x9a)) ||
               (iVar9 = *(int *)(param_1 + 0xb6), *(int *)(param_1 + 0x96) <= iVar9))
            goto LAB_1201e8ab;
            goto joined_r0x1201e88a;
          }
        }
        else if ((*(int *)(param_1 + 0x9a) < iVar10) || (iVar10 < *(int *)(param_1 + 0x96))) {
          if ((*(int *)(param_1 + 0x96) < iVar10) ||
             (iVar9 = *(int *)(param_1 + 0xb6), iVar9 <= *(int *)(param_1 + 0x9a)))
          goto LAB_1201e8ab;
joined_r0x1201e8a7:
          if (iVar9 == 0x7fffffff) goto LAB_1201e8ab;
        }
      }
      else if (iVar7 == 1) {
        iVar7 = *(int *)(param_1 + 0x96);
        if (((iVar10 < iVar7) || (*(int *)(param_1 + 0x9a) < iVar10)) ||
           (*(int *)(param_1 + 0x9a) <= *(int *)(param_1 + 0xb6))) {
          if (iVar9 == 2) {
            if (((iVar10 <= *(int *)(param_1 + 0x9a)) || (*(int *)(param_1 + 0xb6) < iVar7)) ||
               (*(int *)(param_1 + 0x9a) < *(int *)(param_1 + 0xb6))) goto LAB_1201e8ab;
          }
          else if (((iVar9 != 3) || (iVar7 <= iVar10)) ||
                  ((*(int *)(param_1 + 0xb6) < iVar7 ||
                   (*(int *)(param_1 + 0x9a) < *(int *)(param_1 + 0xb6))))) goto LAB_1201e8ab;
        }
      }
      else {
        if ((iVar7 != 2) || ((*(byte *)(param_1 + 0xba) & 1) != 0)) goto LAB_1201e8ab;
        if (iVar9 != 2) {
          if ((*(int *)(param_1 + 0x96) < iVar10) ||
             (iVar9 = *(int *)(param_1 + 0xb6), iVar9 <= *(int *)(param_1 + 0x96)))
          goto LAB_1201e8ab;
          goto joined_r0x1201e8a7;
        }
        if ((iVar10 < *(int *)(param_1 + 0x9a)) ||
           (iVar9 = *(int *)(param_1 + 0xb6), *(int *)(param_1 + 0x9a) <= iVar9)) goto LAB_1201e8ab;
joined_r0x1201e88a:
        if (iVar9 < 0) goto LAB_1201e8ab;
      }
    }
LAB_1201e8a9:
    bVar2 = true;
LAB_1201e8ab:
    bVar8 = *(byte *)(param_1 + 0xba);
    if (((bVar8 & 0x10) == 0) || (uVar11 != 0)) {
      *(uint *)(param_1 + 0xb6) = (-(uint)(*(int *)(param_1 + 0xae) == 2) & 0x80000000) + 0x7fffffff
      ;
    }
    else {
      *(int *)(param_1 + 0xb6) = iVar10;
    }
    *(byte *)(param_1 + 0xba) = bVar8 | 0x10;
    *(uint *)(param_1 + 0xc4) = local_34;
    if (!bVar2) {
      return 0;
    }
    *(byte *)(param_1 + 0xba) = bVar8 | 0x11;
    FUN_1201ea00(param_1);
    return 0;
  }
  bVar2 = false;
  iVar10 = 0;
  local_40._0_2_ = 0;
  local_40._2_2_ = 0;
  local_3c = 0;
  uStack_3a = 0;
  pcVar5 = (code *)FUN_12027370(param_1,0,0x20,&local_2c);
  DAT_12039a9c = (*pcVar5)(CONCAT22(local_2c._2_2_,(undefined2)local_2c),&local_34);
  if (DAT_12039a9c != 0) {
    return DAT_12039a9c;
  }
  if (param_2 == (int *)0x0) {
    local_2c._0_2_ = 1;
    local_2c._2_2_ = 0;
    uStack_28 = 0;
    pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_30);
    DAT_12039a9c = (*pcVar5)(local_30,local_34,s_timevalue_12037adc,0,&local_2c);
    iVar9 = CONCAT22(uStack_28,local_2c._2_2_);
  }
  else {
    iVar9 = *param_2;
    iVar10 = param_2[3];
    iVar7 = param_2[1];
    local_2c._0_2_ = (undefined2)iVar7;
    local_2c._2_2_ = (undefined2)((uint)iVar7 >> 0x10);
    DAT_12039a9c = 0;
    if (iVar7 != 0) {
      iVar6 = 1;
      if (iVar7 < 0) {
        iVar6 = -1;
      }
      local_2c._0_2_ = (undefined2)iVar6;
      local_2c._2_2_ = (undefined2)((uint)iVar6 >> 0x10);
      dVar1 = (double)iVar6;
      local_40._0_2_ = SUB82(dVar1,0);
      local_40._2_2_ = (undefined2)((ulonglong)dVar1 >> 0x10);
      local_3c = (undefined2)((ulonglong)dVar1 >> 0x20);
      uStack_3a = (undefined2)((ulonglong)dVar1 >> 0x30);
    }
  }
  if ((CONCAT22(uStack_3a,local_3c) & 0x7fffffff) == 0 &&
      CONCAT22(local_40._2_2_,(undefined2)local_40) == 0) {
    local_2c._0_2_ = 0xf;
    local_2c._2_2_ = 0;
    uStack_28 = 0;
    uStack_26 = 0;
    pcVar5 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_40);
    DAT_12039a9c = (*pcVar5)(CONCAT22(local_40._2_2_,(undefined2)local_40),local_34,&DAT_12037a64,0,
                             &local_2c);
    local_3c = (undefined2)uStack_26;
    uStack_3a = (undefined2)((uint)uStack_26 >> 0x10);
    local_40._0_2_ = local_2c._2_2_;
    local_40._2_2_ = uStack_28;
  }
  iVar7 = 2;
  if ((double)CONCAT26(uStack_3a,CONCAT24(local_3c,CONCAT22(local_40._2_2_,(undefined2)local_40))) <
      0.0) {
    iVar7 = 3;
  }
  *(int *)(param_1 + 0xae) = iVar7;
  if ((*(byte *)(param_1 + 0xba) & 8) == 0) {
    *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) | 8;
  }
  if (((*(byte *)(param_1 + 0xba) & 0x10) == 0) || (iVar10 == 0x20)) {
    if ((CONCAT22(uStack_3a,local_3c) & 0x7fffffff) != 0 ||
        CONCAT22(local_40._2_2_,(undefined2)local_40) != 0) {
      *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) | 0x10;
    }
    bVar8 = *(byte *)(param_1 + 0xba) & 0xfe;
    *(byte *)(param_1 + 0xba) = bVar8;
    if (*(short *)(param_1 + 0x94) == 0xb) {
      if (iVar7 == 2) {
        *(undefined4 *)(param_1 + 0xb6) = 0xffffffff;
      }
      else if (iVar7 == 3) {
        *(undefined4 *)(param_1 + 0xb6) = 0x7fffffff;
      }
      if ((((((iVar7 == 2) && (*(int *)(param_1 + 0x90) == 0)) && (*(int *)(param_1 + 0x96) < iVar9)
            ) || ((iVar10 = *(int *)(param_1 + 0x90), iVar10 == 2 &&
                  (*(int *)(param_1 + 0x9a) < iVar9)))) ||
          ((iVar7 == 3 && ((iVar10 == 0 && (iVar9 < *(int *)(param_1 + 0x9a))))))) ||
         ((iVar10 == 2 && (iVar9 < *(int *)(param_1 + 0x96))))) {
        *(byte *)(param_1 + 0xba) = bVar8 | 1;
      }
    }
  }
  if (((iVar7 == 2) && (iVar9 < *(int *)(param_1 + 0xb6))) ||
     ((iVar7 == 3 && (*(int *)(param_1 + 0xb6) < iVar9)))) {
    bVar2 = false;
    if (((*(byte *)(param_1 + 0xba) & 1) == 0) && (iVar9 != -1)) {
      bVar2 = true;
    }
    *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) & 0xfe;
  }
  if (*(short *)(param_1 + 0x94) == 1) {
    if ((*(byte *)(param_1 + 0xba) & 1) != 0) goto LAB_1201e485;
    iVar10 = *(int *)(param_1 + 0x96);
    if ((iVar9 < iVar10) || (iVar7 != 2)) goto joined_r0x1201e3da;
  }
  else {
    if (*(short *)(param_1 + 0x94) != 0xb) goto LAB_1201e485;
    iVar10 = *(int *)(param_1 + 0x90);
    if (iVar10 == 0) {
      if ((*(byte *)(param_1 + 0xba) & 1) != 0) goto LAB_1201e485;
      if ((iVar9 < *(int *)(param_1 + 0x96)) || (iVar7 != 2)) {
        iVar10 = *(int *)(param_1 + 0x9a);
joined_r0x1201e3da:
        if ((iVar10 < iVar9) || (iVar7 != 3)) goto LAB_1201e485;
      }
    }
    else if (iVar10 == 1) {
      if (iVar9 < *(int *)(param_1 + 0x96)) {
        if (*(int *)(param_1 + 0x9a) < iVar9) goto LAB_1201e442;
LAB_1201e447:
        if ((*(int *)(param_1 + 0x96) <= iVar9) || (iVar7 != 3)) goto LAB_1201e485;
      }
      else {
        if (iVar9 <= *(int *)(param_1 + 0x9a)) goto LAB_1201e483;
LAB_1201e442:
        if (iVar7 != 2) goto LAB_1201e447;
      }
      if ((*(byte *)(param_1 + 0xba) & 1) != 0) goto LAB_1201e485;
    }
    else {
      if ((iVar10 != 2) || ((*(byte *)(param_1 + 0xba) & 1) != 0)) goto LAB_1201e485;
      if ((iVar9 < *(int *)(param_1 + 0x9a)) || (iVar7 != 2)) {
        iVar10 = *(int *)(param_1 + 0x96);
        goto joined_r0x1201e3da;
      }
    }
  }
LAB_1201e483:
  bVar2 = true;
LAB_1201e485:
  *(int *)(param_1 + 0xb6) = iVar9;
  if (!bVar2) {
    return 0;
  }
  *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) | 1;
  FUN_1201ea00(param_1);
  return 0;
}


