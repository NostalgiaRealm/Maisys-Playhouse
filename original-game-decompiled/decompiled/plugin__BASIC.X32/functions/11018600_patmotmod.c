
/* ==== patmotmod @ 11018600 ==== 
 * signature: uint __cdecl patmotmod(undefined4 * param_1)
 * body: 11018600-110187cc
 */

uint __cdecl patmotmod(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 in_EAX;
  undefined3 uVar6;
  uint uVar4;
  undefined4 uVar5;
  undefined3 extraout_var;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  
                    /* 0x18600  25  patmotmod */
  uVar7 = 1;
  puVar1 = *(uint **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar8 = param_1[1];
  if (iVar8 < 0x1d) {
    if (iVar8 == 0x1c) {
      uVar4 = FUN_11018a20(param_1,iVar2,(int)puVar1);
      return uVar4;
    }
    uVar5 = 0;
    switch(iVar8) {
    case 0:
      param_1[3] = 0x21b;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar4 = FUN_11018da0(param_1);
      return uVar4 & 0xffffff00;
    case 4:
      uVar4 = FUN_11018810(param_1,iVar2,*puVar1);
      return uVar4 & 0xffffff00;
    case 5:
      uVar4 = FUN_110188a0(iVar2,puVar1);
      return uVar4 & 0xffffff00;
    case 8:
      return 0;
    case 0xe:
      iVar8 = 0;
      FUN_11004840(param_1,10,0);
      if (*(int *)(iVar2 + 0x20) != 0) {
        iVar9 = 0;
        if (0 < *(short *)(iVar2 + 0x28)) {
          do {
            iVar8 = iVar8 + 0x58;
            iVar9 = iVar9 + 1;
            FUN_11002620((short *)(*(int *)(iVar2 + 0x20) + -0x30 + iVar8));
          } while (iVar9 < *(short *)(iVar2 + 0x28));
        }
        FUN_11029180(*(LPVOID *)(iVar2 + 0x20));
        *(undefined4 *)(iVar2 + 0x20) = 0;
        *(undefined2 *)(iVar2 + 0x28) = 0;
      }
      uVar4 = FUN_110048a0(param_1,0xe,0,(undefined2 *)(iVar2 + 0x34));
      *(undefined2 *)(iVar2 + 0x34) = 0x69;
      *(undefined4 *)(iVar2 + 0x3a) = 0;
      *(undefined4 *)(iVar2 + 0x3e) = 0;
      *(undefined4 *)(iVar2 + 0x36) = 0;
      *(undefined4 *)(iVar2 + 0x42) = 0;
      return uVar4 & 0xffffff00;
    case 0x10:
      uVar4 = FUN_11018eb0(param_1,iVar2);
      return uVar4;
    case 0x12:
      *puVar1 = 0x1e;
      return 1;
    }
  }
  else {
    uVar6 = (undefined3)((uint)in_EAX >> 8);
    if (iVar8 < 0x19e) {
      if (iVar8 == 0x19d) {
        uVar5 = FUN_11018d50(param_1,iVar2);
        *(char *)puVar1 = (char)uVar5;
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      if (iVar8 != 0x1e) {
        return CONCAT31(uVar6,1);
      }
      uVar4 = FUN_11018ac0(param_1,iVar2,puVar1);
      return uVar4 & 0xffffff00;
    }
    if (iVar8 == 0x1b2) {
      bVar3 = FUN_110194d0(param_1,iVar2);
      return CONCAT31(extraout_var,bVar3);
    }
    if (iVar8 != 0x1b6) {
      return CONCAT31(uVar6,1);
    }
    uVar7 = 0;
    uVar5 = FUN_11019460(param_1,puVar1,iVar2);
  }
  return CONCAT31((int3)((uint)uVar5 >> 8),uVar7);
}


