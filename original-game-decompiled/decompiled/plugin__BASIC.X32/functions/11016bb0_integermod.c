
/* ==== integermod @ 11016bb0 ==== 
 * signature: uint __cdecl integermod(undefined4 * param_1)
 * body: 11016bb0-11016cf3
 */

uint __cdecl integermod(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 in_EAX;
  uint3 uVar6;
  uint uVar5;
  undefined3 extraout_var;
  
                    /* 0x16bb0  18  integermod */
  uVar6 = (uint3)((uint)in_EAX >> 8);
  uVar5 = CONCAT31(uVar6,1);
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x11) {
    if (iVar3 == 0x10) {
      return (uint)uVar6 << 8;
    }
    switch(iVar3) {
    case 0:
      param_1[3] = 0x322;
      *(undefined2 *)(param_1 + 4) = 3;
      return (uint)uVar6 << 8;
    case 1:
      uVar5 = FUN_11016e30(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11016d20(param_1,iVar2,*puVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_11016d70(iVar2,(int)puVar1);
      return uVar5 & 0xffffff00;
    case 8:
      return (uint)uVar6 << 8;
    }
  }
  else {
    if (iVar3 < 0x1d) {
      if (iVar3 == 0x1c) {
        uVar5 = FUN_11016d90(param_1,iVar2,(uint)puVar1);
        return uVar5;
      }
      if (iVar3 != 0x12) {
        return uVar5;
      }
      *puVar1 = 0x1e;
      return uVar5;
    }
    if (iVar3 < 0x19e) {
      if (iVar3 == 0x19d) {
        *(undefined1 *)puVar1 = 0;
        return (uint)uVar6 << 8;
      }
      if (iVar3 != 0x1d) {
        if (iVar3 != 0x1e) {
          return uVar5;
        }
        uVar5 = FUN_11016df0(param_1,iVar2,puVar1);
        return uVar5 & 0xffffff00;
      }
      uVar5 = FUN_11016db0(param_1,iVar2,puVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 == 0x1b2) {
      bVar4 = FUN_11016e60(param_1,iVar2);
      return CONCAT31(extraout_var,bVar4);
    }
    if (iVar3 == 600) {
      uVar5 = FUN_11016fa0(param_1,iVar2,(undefined2 *)puVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 != 0x259) {
      return uVar5;
    }
    uVar5 = FUN_11016eb0(param_1,iVar2,(undefined2 *)puVar1);
    uVar5 = uVar5 & 0xffffff00;
  }
  return uVar5;
}


