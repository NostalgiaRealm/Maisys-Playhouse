
/* ==== ctabmod @ 110071a0 ==== 
 * signature: uint __cdecl ctabmod(undefined4 * param_1)
 * body: 110071a0-1100733a
 */

uint __cdecl ctabmod(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 in_EAX;
  uint3 uVar6;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var;
  
                    /* 0x71a0  8  ctabmod */
  uVar3 = 1;
  piVar1 = *(int **)((int)param_1 + 0x1a);
  uVar5 = *(uint *)((int)param_1 + 0x16);
  iVar2 = param_1[1];
  uVar6 = (uint3)((uint)in_EAX >> 8);
  if (iVar2 < 0x19) {
    if (iVar2 == 0x18) {
      *piVar1 = 1;
      return (uint)uVar6 << 8;
    }
    uVar4 = 0;
    switch(iVar2) {
    case 0:
      param_1[3] = 0x4c4;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar5 = FUN_11007570(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11007380(param_1,uVar5,*piVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_110073e0(uVar5,(int)piVar1);
      return uVar5 & 0xffffff00;
    case 8:
      if ((*piVar1 == 0) && (uVar4 = *(uint *)(uVar5 + 0x1c), uVar4 != 0xffffffff)) {
        uVar5 = FUN_11005de0(param_1,uVar4);
        return uVar5 & 0xffffff00;
      }
      if ((*piVar1 == 1) && (uVar4 = *(uint *)(uVar5 + 0x1c), uVar4 != 0xffffffff)) {
        uVar4 = FUN_11005d90(param_1,uVar4);
      }
      return uVar4 & 0xffffff00;
    case 0xe:
      uVar5 = *(uint *)(uVar5 + 0x1c);
      if (uVar5 != 0xffffffff) {
        uVar5 = FUN_11005de0(param_1,uVar5);
      }
      return uVar5 & 0xffffff00;
    case 0x10:
      return 1;
    case 0x12:
      *piVar1 = 0x1e;
      return 1;
    }
  }
  else {
    if (iVar2 < 0x23) {
      if (iVar2 == 0x22) {
        uVar5 = FUN_11007520(param_1,(short *)piVar1,uVar5);
        return uVar5;
      }
      if (iVar2 != 0x1c) {
        if (iVar2 != 0x1e) {
          return CONCAT31(uVar6,1);
        }
        uVar5 = FUN_11007430(param_1,uVar5,piVar1);
        return uVar5 & 0xffffff00;
      }
      uVar5 = FUN_11007410(param_1,uVar5,(uint)piVar1);
      return uVar5;
    }
    if (iVar2 == 0x19d) {
      uVar5 = FUN_110074d0(param_1,uVar5);
      *(char *)piVar1 = (char)uVar5;
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
    if (iVar2 != 0x1b2) {
      return CONCAT31(uVar6,1);
    }
    uVar3 = FUN_110075b0(param_1,uVar5);
    uVar4 = CONCAT31(extraout_var,uVar3);
  }
  return CONCAT31((int3)(uVar4 >> 8),uVar3);
}


