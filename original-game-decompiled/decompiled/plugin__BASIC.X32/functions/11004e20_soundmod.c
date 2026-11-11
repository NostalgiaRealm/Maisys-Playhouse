
/* ==== soundmod @ 11004e20 ==== 
 * signature: uint __cdecl soundmod(undefined4 * param_1)
 * body: 11004e20-11004fa3
 */

uint __cdecl soundmod(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 in_EAX;
  undefined3 uVar7;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  
                    /* 0x4e20  32  soundmod */
  uVar3 = 1;
  piVar1 = *(int **)((int)param_1 + 0x1a);
  uVar5 = *(uint *)((int)param_1 + 0x16);
  iVar2 = param_1[1];
  if (iVar2 < 0x1d) {
    if (iVar2 == 0x1c) {
      uVar5 = FUN_11005090(param_1,uVar5,(int)piVar1);
      return uVar5;
    }
    uVar4 = 0;
    switch(iVar2) {
    case 0:
      param_1[3] = 0x1a4;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar5 = FUN_11005280(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11004fe0(param_1,uVar5,*piVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_11005050(uVar5,(int)piVar1);
      return uVar5 & 0xffffff00;
    case 8:
      if ((*piVar1 == 0) && (uVar4 = *(uint *)(uVar5 + 0x28), uVar4 != 0xffffffff)) {
        uVar5 = FUN_11005de0(param_1,uVar4);
        return uVar5 & 0xffffff00;
      }
      if ((*piVar1 == 1) && (uVar4 = *(uint *)(uVar5 + 0x28), uVar4 != 0xffffffff)) {
        uVar4 = FUN_11005d90(param_1,uVar4);
      }
      return uVar4 & 0xffffff00;
    case 0xe:
      uVar5 = *(uint *)(uVar5 + 0x28);
      if (uVar5 != 0xffffffff) {
        uVar5 = FUN_11005de0(param_1,uVar5);
      }
      return uVar5 & 0xffffff00;
    case 0x10:
      return 1;
    case 0x12:
      *piVar1 = 10;
      return 1;
    }
  }
  else {
    uVar7 = (undefined3)((uint)in_EAX >> 8);
    if (iVar2 < 0x23) {
      if (iVar2 == 0x22) {
        uVar5 = FUN_110052e0(param_1,(short *)piVar1,uVar5);
        return uVar5;
      }
      if (iVar2 != 0x1e) {
        return CONCAT31(uVar7,1);
      }
      uVar5 = FUN_11005160(param_1,uVar5,piVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar2 == 0x19d) {
      uVar6 = FUN_11005230(param_1,uVar5);
      *(char *)piVar1 = (char)uVar6;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    if (iVar2 != 0x1b2) {
      return CONCAT31(uVar7,1);
    }
    uVar3 = FUN_11005330(param_1,uVar5);
    uVar4 = CONCAT31(extraout_var,uVar3);
  }
  return CONCAT31((int3)(uVar4 >> 8),uVar3);
}


