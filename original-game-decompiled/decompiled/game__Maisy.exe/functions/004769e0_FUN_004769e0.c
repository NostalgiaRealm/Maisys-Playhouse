
/* ==== FUN_004769e0 @ 004769e0 ==== 
 * signature: undefined4 __cdecl FUN_004769e0(int param_1)
 * body: 004769e0-00476f01
 */

uint __cdecl FUN_004769e0(int param_1)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint3 uVar11;
  int *piVar7;
  int iVar8;
  undefined3 extraout_var;
  int *piVar9;
  int *piVar10;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  char local_16c [252];
  int *local_70;
  uint local_6c [3];
  int *local_60;
  code *local_5c;
  undefined2 local_18;
  int *local_16;
  code *local_12;
  int *local_c;
  undefined2 local_6;
  
  puVar12 = *(uint **)(param_1 + 0x1a);
  local_6 = (short)puVar12[5];
  iVar8 = *(int *)(param_1 + 0x16);
  local_c = *(int **)(iVar8 + 4);
  piVar10 = *(int **)(iVar8 + 8);
  if (((*puVar12 & 0x80000000) != 0) && (local_c != (int *)0x0)) {
    iVar4 = FUN_0040c620(local_c);
    iVar8 = 0;
    if (iVar4 != 0) {
      pvVar5 = (void *)FUN_0040c620(local_c);
      uVar6 = FUN_00401f10(pvVar5,piVar10,puVar12);
      return uVar6 & 0xffffff00;
    }
  }
  sVar3 = DAT_004dca70;
  DAT_004dca70 = DAT_004dca70 + 1;
  uVar11 = (uint3)((uint)iVar8 >> 8);
  if (8 < DAT_004dca70) {
    DAT_004dca70 = sVar3;
    *puVar12 = *puVar12 | 0x30000000;
    return (uint)uVar11 << 8;
  }
  if (puVar12[3] == 1) {
    DAT_004dca70 = sVar3;
    return CONCAT31(uVar11,1);
  }
  local_12 = *(code **)(*piVar10 + 0x10);
  piVar7 = (int *)(*local_12)();
  if (piVar7 == (int *)0x0) {
    DAT_004dca70 = DAT_004dca70 + -1;
    return 1;
  }
  if (((short)puVar12[9] == 0xf) &&
     (piVar7 = (int *)FUN_0043e950(piVar10,*(int *)((int)puVar12 + 0x26)), piVar7 != (int *)0x0)) {
    *(undefined2 *)(puVar12 + 9) = 0x19;
    *(int **)((int)puVar12 + 0x26) = piVar7;
  }
  if ((((short)puVar12[9] == 0x1c) && (*(int *)((int)puVar12 + 0x26) == 0)) &&
     (piVar7 = FUN_0043ea50(piVar10,(int *)((int)puVar12 + 0x2a),*(char **)((int)puVar12 + 0x2e)),
     piVar7 != (int *)0x0)) {
    *(int **)((int)puVar12 + 0x26) = piVar7;
  }
  if (((local_6 == 7) || (local_6 == 8)) &&
     ((puVar12[3] == 900 && (piVar9 = *(int **)((int)puVar12 + 0x16), piVar9 != (int *)0x0)))) {
    local_70 = (int *)(**(code **)(*piVar9 + 0x10))();
    piVar7 = (int *)(*local_12)();
    if (local_70 != piVar7) {
      local_18 = 0x17;
      local_16 = (int *)puVar12[3];
      local_12 = (code *)puVar12[4];
      piVar7 = (int *)FUN_0048c660(piVar10,(int)&local_18,local_16c);
      if (piVar7 == (int *)0x0) {
        iVar8 = FUN_0048c530(piVar9,(int)local_16c,(int)&local_18);
        if (iVar8 != 0) {
          DAT_004dca70 = DAT_004dca70 + -1;
          return CONCAT31((int3)((uint)iVar8 >> 8),1);
        }
        puVar13 = local_6c;
        for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        *(short *)puVar13 = (short)*puVar12;
        puVar12 = local_6c;
        local_60 = local_16;
        local_5c = local_12;
        piVar7 = local_16;
      }
    }
  }
  if (local_6 == 5) {
    iVar8 = *(int *)((int)puVar12 + 0x16);
    piVar9 = local_c;
    if (iVar8 == 0xc9) {
LAB_00476bfd:
      piVar7 = (int *)FUN_00476960(piVar9,(int)puVar12,piVar10);
    }
    else if (iVar8 == 0xd1) {
      piVar9 = *(int **)((int)local_c + 0x6a);
joined_r0x00476bf8:
      piVar7 = (int *)0x0;
      if (piVar9 != (int *)0x0) goto LAB_00476bfd;
    }
    else {
      if (iVar8 == 0xd2) {
        piVar9 = *(int **)((int)local_c + 0x66);
        goto joined_r0x00476bf8;
      }
      if (iVar8 == 0x66) {
        piVar9 = (int *)FUN_0046ca10((int)local_c);
        goto joined_r0x00476bf8;
      }
      if (iVar8 == 0x69) {
        iVar4 = FUN_0040c620(local_c);
        piVar7 = (int *)0x0;
        if (iVar4 != 0) {
          iVar4 = FUN_0040c620(local_c);
          piVar9 = (int *)FUN_004053e0(iVar4);
          goto joined_r0x00476bf8;
        }
      }
    }
    if (iVar8 == 0x6a) {
      piVar7 = (int *)0x0;
      if (*(int **)((int)local_c + 0x62) != (int *)0x0) {
        piVar7 = (int *)FUN_00476960(*(int **)((int)local_c + 0x62),(int)puVar12,piVar10);
      }
      goto LAB_00476ef2;
    }
    if ((iVar8 != 0x6c) && (iVar8 != 0xd0)) {
      if (iVar8 == 0x6b) {
        piVar7 = (int *)(**(code **)(*local_c + 600))(puVar12);
      }
      else if (iVar8 == 0x68) {
        uVar6 = puVar12[3];
        puVar13 = puVar12 + 9;
        pcVar1 = *(code **)(*local_c + 0x10);
        uVar14 = puVar12[4];
        pvVar5 = (void *)(*pcVar1)();
        cVar2 = FUN_0045a6e0(pvVar5,uVar6,uVar14,(short *)puVar13);
        piVar7 = (int *)CONCAT31(extraout_var,cVar2);
        if (cVar2 == '\0') {
          pvVar5 = (void *)(*pcVar1)();
          piVar7 = (int *)FUN_0045a830(pvVar5,(int)puVar12);
        }
      }
      else if (iVar8 == 0x67) {
        iVar8 = *local_c;
        sVar3 = (**(code **)(iVar8 + 0x274))();
        pvVar5 = (void *)(**(code **)(iVar8 + 0x10))();
        piVar9 = FUN_0045a920(pvVar5,sVar3);
        piVar7 = (int *)0x0;
        if (piVar9 != (int *)0x0) {
          piVar7 = (int *)FUN_00476960(piVar9,(int)puVar12,piVar10);
        }
      }
      else if (iVar8 == 0x6d) {
        piVar9 = (int *)FUN_0046cac0((int)local_c);
        piVar7 = (int *)0x0;
        if (piVar9 != (int *)0x0) {
          piVar7 = (int *)FUN_00476960(piVar9,(int)puVar12,piVar10);
        }
      }
      else if (iVar8 == 0x65) {
        iVar8 = FUN_0040c620(local_c);
        piVar7 = (int *)0x0;
        if (iVar8 != 0) {
          iVar8 = FUN_0040c620(local_c);
          piVar9 = (int *)FUN_004053f0(iVar8);
          piVar7 = (int *)0x0;
          if (piVar9 != (int *)0x0) {
            piVar7 = (int *)FUN_00476960(piVar9,(int)puVar12,piVar10);
          }
        }
      }
      else if (iVar8 == 0xd3) {
        pcVar1 = *(code **)(*piVar10 + 0x218);
        iVar8 = (*pcVar1)();
        piVar7 = (int *)0x0;
        if (iVar8 != 0) {
          piVar10 = (int *)(*pcVar1)();
          iVar8 = (**(code **)(*piVar10 + 0x218))();
          piVar7 = (int *)0x0;
          if (iVar8 != 0) {
            piVar10 = (int *)(*pcVar1)();
            piVar10 = (int *)(**(code **)(*piVar10 + 0x218))();
            piVar7 = (int *)(**(code **)(*piVar10 + 0x1e0))(puVar12);
          }
        }
      }
      goto LAB_00476ef2;
    }
    pcVar1 = *(code **)(*piVar10 + 0x218);
    iVar8 = (*pcVar1)();
    if (iVar8 == 0) {
      piVar7 = (int *)FUN_00476960(local_c,(int)puVar12,piVar10);
      goto LAB_00476ef2;
    }
    piVar9 = (int *)(*pcVar1)();
  }
  else {
    if (local_6 == 1) {
      local_6._0_1_ = 1;
      local_6._1_1_ = '\0';
      pcVar1 = *(code **)(*piVar10 + 0x218);
      iVar8 = (*pcVar1)();
      piVar7 = (int *)0x0;
      if (iVar8 != 0) {
        iVar8 = (*pcVar1)();
        piVar9 = (int *)FUN_004246a0(iVar8);
        piVar7 = (int *)0x0;
        if (piVar9 != (int *)0x0) {
          piVar7 = (int *)0x80000000;
          do {
            if ((piVar9[3] == *(int *)((int)puVar12 + 0x16)) &&
               ((*(uint *)((int)piVar9 + 0x26) & 0x80000000) == 0)) {
              piVar7 = (int *)(**(code **)(*piVar9 + 0x1e0))(puVar12);
              local_6._1_1_ = '\x01';
              break;
            }
            piVar9 = *(int **)((int)piVar9 + 0x3e);
          } while (piVar9 != (int *)0x0);
        }
      }
      if (local_6._1_1_ == '\0') {
        piVar9 = FUN_0043eae0((int)piVar10,*(int *)((int)puVar12 + 0x16));
        piVar7 = (int *)0x0;
        if (piVar9 != (int *)0x0) {
          piVar7 = (int *)FUN_00476960(piVar9,(int)puVar12,piVar10);
          *(undefined2 *)(puVar12 + 5) = 7;
          *(int **)((int)puVar12 + 0x16) = piVar9;
        }
      }
      goto LAB_00476ef2;
    }
    if (local_6 == 6) {
      piVar9 = FUN_0043ea50(piVar10,(int *)((int)puVar12 + 0x16),*(char **)((int)puVar12 + 0x1a));
      piVar7 = (int *)0x0;
      piVar10 = piVar9;
joined_r0x00476ed1:
      if (piVar10 == (int *)0x0) goto LAB_00476ef2;
    }
    else if (local_6 == 9) {
      piVar9 = *(int **)((int)puVar12 + 0x16);
      if (piVar9 == (int *)0x0) {
        piVar10 = FUN_0043ea50(piVar10,(int *)((int)puVar12 + 0x1a),*(char **)((int)puVar12 + 0x1e))
        ;
        piVar7 = (int *)0x0;
        if (piVar10 != (int *)0x0) {
          piVar7 = (int *)(**(code **)(*piVar10 + 0x1e0))(puVar12);
          *(int **)((int)puVar12 + 0x16) = piVar10;
        }
        goto LAB_00476ef2;
      }
    }
    else {
      if (local_6 == 7) {
        piVar9 = *(int **)((int)puVar12 + 0x16);
        if (piVar9 == (int *)0x0) goto LAB_00476ef2;
        piVar7 = *(int **)((int)piVar9 + 0x1e);
        if (((uint)piVar7 & 2) != 0) {
          piVar7 = (int *)FUN_00476960(piVar9,(int)puVar12,piVar10);
          goto LAB_00476ef2;
        }
        if (*(short *)((int)piVar9 + 0x22) == 1) {
          piVar7 = (int *)FUN_0045a830(piVar9,(int)puVar12);
          goto LAB_00476ef2;
        }
        piVar10 = (int *)((uint)piVar7 & 0x10);
        goto joined_r0x00476ed1;
      }
      if (((local_6 != 8) || (piVar9 = *(int **)((int)puVar12 + 0x16), piVar9 == (int *)0x0)) ||
         ((*(byte *)((int)piVar9 + 0x29) & 0x80) != 0)) goto LAB_00476ef2;
    }
  }
  piVar7 = (int *)(**(code **)(*piVar9 + 0x1e0))(puVar12);
LAB_00476ef2:
  DAT_004dca70 = DAT_004dca70 + -1;
  return CONCAT31((int3)((uint)piVar7 >> 8),1);
}


