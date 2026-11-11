
/* ==== saverestoremod @ 11011ec0 ==== 
 * signature: uint __cdecl saverestoremod(undefined4 * param_1)
 * body: 11011ec0-11012029
 */

uint __cdecl saverestoremod(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  undefined3 uVar7;
  uint uVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  
                    /* 0x11ec0  29  saverestoremod */
  iVar1 = *(int *)((int)param_1 + 0x16);
  puVar2 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar3 = param_1[1];
  uVar4 = 1;
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar5 = FUN_11012170(param_1,iVar1,(uint)puVar2);
      return uVar5;
    }
    uVar6 = 0;
    switch(iVar3) {
    case 0:
      param_1[3] = 0x4d8;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar5 = FUN_11012540(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11012070(param_1,iVar1,*puVar2);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_11012110(iVar1,(int)puVar2);
      return uVar5 & 0xffffff00;
    case 8:
      return 0;
    case 0xe:
      if (*(LPVOID *)(iVar1 + 0x4e) != (LPVOID)0x0) {
        FUN_1100d8f0(*(LPVOID *)(iVar1 + 0x4e));
      }
      if (*(LPVOID *)(iVar1 + 0x52) != (LPVOID)0x0) {
        FUN_1100d8f0(*(LPVOID *)(iVar1 + 0x52));
      }
      uVar5 = FUN_11002620((short *)(iVar1 + 0x20));
      return uVar5 & 0xffffff00;
    case 0x10:
      return 0;
    case 0x12:
      *puVar2 = 0x1e;
      return 1;
    }
  }
  else {
    uVar7 = (undefined3)((uint)in_EAX >> 8);
    if (iVar3 < 0x19e) {
      if (iVar3 == 0x19d) {
        uVar6 = FUN_110128e0(param_1,iVar1);
        *(char *)puVar2 = (char)uVar6;
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      if (iVar3 != 0x1e) {
        return CONCAT31(uVar7,1);
      }
      uVar5 = FUN_110121f0(param_1,iVar1,puVar2);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 == 0x1b2) {
      uVar4 = FUN_11012600(param_1,iVar1);
      return CONCAT31(extraout_var,uVar4);
    }
    if (iVar3 != 0x1b6) {
      return CONCAT31(uVar7,1);
    }
    uVar4 = 0;
    uVar6 = FUN_110128c0(param_1,puVar2,iVar1);
  }
  return CONCAT31((int3)((uint)uVar6 >> 8),uVar4);
}


