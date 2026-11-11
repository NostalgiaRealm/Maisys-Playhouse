
/* ==== FUN_00406bb0 @ 00406bb0 ==== 
 * signature: undefined4 __thiscall FUN_00406bb0(void * this, undefined2 param_1, int * param_2, undefined4 * param_3)
 * body: 00406bb0-00406fcb
 */

int __thiscall FUN_00406bb0(void *this,short param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  undefined4 in_EAX;
  uint3 uVar11;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  int iVar9;
  undefined4 uVar10;
  int iVar12;
  int **ppiVar13;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38 [3];
  int local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  int *local_8;
  
  uVar11 = (uint3)((uint)in_EAX >> 8);
  if (param_2 == (int *)0x0) {
    if (*(char *)((int)this + 0xa4) == '\0') {
      *(undefined1 *)((int)this + 0xa7) = 1;
    }
    return (uint)uVar11 << 8;
  }
  if ((*(byte *)(param_2 + 0x12) & 2) == 0) {
    return (uint)uVar11 << 8;
  }
  uVar6 = *(uint *)((int)param_2 + 0x1e) & 4;
  if ((uVar6 != 0) && ((*(byte *)(param_2 + 0x27) & 0x80) != 0)) {
    return 0;
  }
  local_c = this;
  if (*(char *)((int)this + 0xa4) == '\0') {
    uVar8 = 0;
    if (uVar6 != 0) {
      piVar7 = (int *)(**(code **)(*param_2 + 0x3c0))();
      uVar8 = 0;
      if (piVar7 != (int *)0x0) {
        uVar8 = (**(code **)(*piVar7 + 0x1f8))();
      }
    }
    *(undefined1 *)((int)local_c + 0xa7) = 1;
  }
  else {
    local_10 = *param_2;
    pcVar1 = *(code **)(local_10 + 0x130);
    cVar2 = (*pcVar1)();
    if (cVar2 == '\0') {
      local_8 = *(int **)((int)local_c + 0x56);
    }
    else {
      local_8 = *(int **)((int)local_c + 0x52);
    }
    uVar8 = (uint)param_1;
    switch(uVar8) {
    case 0:
      sVar5 = (**(code **)(local_10 + 0x27c))();
      local_1c = (uint)sVar5;
      sVar5 = FUN_00406440(local_c,param_2);
      if (sVar5 != -1) {
        iVar9 = FUN_00430190((int)local_8);
        *(undefined1 *)(sVar5 * 0x1a + 0x18 + iVar9) = 1;
        uVar10 = FUN_004301f0((int)local_8);
        return CONCAT31((int3)((uint)uVar10 >> 8),1);
      }
      local_14 = (uint)(ushort)local_14;
      sVar5 = *(short *)((int)local_8 + 0x26);
      if (param_3 == (undefined4 *)0x0) {
        (**(code **)(local_10 + 0x38c))(&local_40,1);
        local_38[1] = (int *)local_40;
        local_38[2] = (int *)local_3c;
        local_28 = (undefined4 *)0x0;
        local_20 = 1;
        local_24 = (undefined4 *)0x0;
      }
      else {
        ppiVar13 = local_38;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *ppiVar13 = (int *)*param_3;
          param_3 = param_3 + 1;
          ppiVar13 = ppiVar13 + 1;
        }
        *(undefined2 *)ppiVar13 = *(undefined2 *)param_3;
      }
      local_38[0] = param_2;
      sVar4 = (**(code **)(local_10 + 0x27c))();
      local_2c = (int)sVar4;
      if (sVar5 != 0) {
        iVar9 = FUN_00430190((int)local_8);
        while (sVar4 = sVar5 + -1, -1 < sVar4) {
          if (local_1c == 0) {
LAB_00406d74:
            piVar7 = (int *)(sVar4 * 0x1a + iVar9);
            if ((piVar7[3] == 0) && (iVar12 = FUN_004053f0((int)local_c), iVar12 == *piVar7)) break;
          }
          else {
            if (*(uint *)(sVar4 * 0x1a + 0xc + iVar9) <= local_1c) {
              if (*(uint *)(sVar4 * 0x1a + 0xc + iVar9) == local_1c) {
                iVar9 = FUN_0046ca10((int)param_2);
                iVar12 = FUN_004053f0((int)local_c);
                if (iVar9 == iVar12) {
                  local_14 = CONCAT22(sVar5,(ushort)local_14);
                }
              }
              break;
            }
            if (local_1c == 0) goto LAB_00406d74;
          }
          local_14 = CONCAT22(sVar5,(ushort)local_14);
          sVar5 = sVar4;
        }
        FUN_004301f0((int)local_8);
      }
      if (local_14._2_2_ != 0) {
        sVar5 = local_14._2_2_ + -1;
        FUN_0042ff60(local_8,(int)local_14._2_2_,local_38);
        uVar10 = FUN_00406b60((int)local_8,sVar5);
        return CONCAT31((int3)((uint)uVar10 >> 8),1);
      }
      (**(code **)(*local_8 + 0xe8))(local_38);
      uVar10 = *(undefined4 *)((int)local_8 + 0x26);
      sVar5 = (short)uVar10 + -1;
      *(short *)((int)param_2 + 0x92) = sVar5;
      return CONCAT31((int3)(CONCAT22((short)((uint)uVar10 >> 0x10),sVar5) >> 8),1);
    case 1:
      sVar5 = FUN_00406440(local_c,param_2);
      uVar8 = CONCAT22(extraout_var,sVar5);
      iVar9 = (int)sVar5;
      if (iVar9 != -1) {
        FUN_00430370(local_8,iVar9 + 1,local_38);
        if (param_3 == (undefined4 *)0x0) {
          if (local_28 != (undefined4 *)0x0) {
            FUN_00430540(local_28);
          }
          if (local_24 != (undefined4 *)0x0) {
            FUN_00430540(local_24);
          }
        }
        else {
          ppiVar13 = local_38;
          for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
            *param_3 = *ppiVar13;
            ppiVar13 = ppiVar13 + 1;
            param_3 = param_3 + 1;
          }
          *(undefined2 *)param_3 = *(undefined2 *)ppiVar13;
        }
        FUN_00430090(local_8,iVar9 + 1);
        uVar10 = FUN_00406b60((int)local_8,sVar5);
        return CONCAT31((int3)((uint)uVar10 >> 8),1);
      }
      break;
    case 2:
      cVar2 = (*pcVar1)();
      if (((cVar2 != '\0') && (*(int **)((int)local_c + 0x92) == param_2)) &&
         (bVar3 = FUN_0047a230(*(int *)((int)local_c + 0x8a)), bVar3 == 0)) {
        FUN_00408510(local_c,&local_18);
        FUN_00409540(local_c,&local_18);
        FUN_0043c8b0();
        FUN_00409560((int)local_c);
      }
      sVar5 = FUN_00406440(local_c,param_2);
      uVar8 = CONCAT22(extraout_var_00,sVar5);
      if (sVar5 != -1) {
        iVar9 = FUN_00430190((int)local_8);
        *(undefined1 *)(sVar5 * 0x1a + 0x18 + iVar9) = 0;
        uVar10 = FUN_004301f0((int)local_8);
        return CONCAT31((int3)((uint)uVar10 >> 8),1);
      }
      break;
    case 3:
      sVar5 = FUN_00406440(local_c,param_2);
      uVar8 = CONCAT22(extraout_var_01,sVar5);
      if (((*(byte *)((int)param_2 + 0x1e) & 4) != 0) && (sVar5 != -1)) {
        iVar9 = FUN_00430190((int)local_8);
        (**(code **)(local_10 + 0x38c))(&local_18,1);
        iVar9 = iVar9 + sVar5 * 0x1a;
        *(undefined4 *)(iVar9 + 4) = local_18;
        *(uint *)(iVar9 + 8) = local_14;
        sVar5 = (**(code **)(local_10 + 0x27c))();
        *(int *)(iVar9 + 0xc) = (int)sVar5;
        uVar10 = FUN_004301f0((int)local_8);
        return CONCAT31((int3)((uint)uVar10 >> 8),1);
      }
    }
  }
  return uVar8 & 0xffffff00;
}


