
/* ==== setmod @ 11027e10 ==== 
 * signature: uint __cdecl setmod(undefined4 * param_1)
 * body: 11027e10-11027f65
 */

uint __cdecl setmod(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 in_EAX;
  undefined3 uVar7;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  
                    /* 0x27e10  30  setmod */
  iVar5 = *(int *)((int)param_1 + 0x16);
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar2 = param_1[1];
  uVar3 = 1;
  if (iVar2 < 0x1d) {
    if (iVar2 == 0x1c) {
      uVar4 = FUN_11028080(param_1,iVar5,(uint)puVar1);
      return uVar4;
    }
    uVar6 = 0;
    switch(iVar2) {
    case 0:
      param_1[3] = 0x2df;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar4 = FUN_110283c0(param_1);
      return uVar4 & 0xffffff00;
    case 4:
      uVar4 = FUN_11027fa0(param_1,iVar5,*puVar1);
      return uVar4 & 0xffffff00;
    case 5:
      uVar4 = FUN_11028020(iVar5,puVar1);
      return uVar4 & 0xffffff00;
    case 8:
      return 0;
    case 0xe:
      FUN_11002620((short *)(iVar5 + 0x18));
      uVar4 = FUN_11002620((short *)(iVar5 + 0x46));
      return uVar4 & 0xffffff00;
    case 0x10:
      return 0;
    case 0x12:
      *puVar1 = 0x14;
      return 1;
    }
  }
  else {
    uVar7 = (undefined3)((uint)in_EAX >> 8);
    if (iVar2 < 0x19e) {
      if (iVar2 == 0x19d) {
        iVar5 = FUN_11028370(param_1,iVar5);
        *(char *)puVar1 = (char)iVar5;
        return CONCAT31((int3)((uint)iVar5 >> 8),1);
      }
      if (iVar2 != 0x1e) {
        return CONCAT31(uVar7,1);
      }
      uVar4 = FUN_11028170(param_1,iVar5,puVar1);
      return uVar4 & 0xffffff00;
    }
    if (iVar2 == 0x1b2) {
      uVar3 = FUN_11028440(param_1,iVar5);
      return CONCAT31(extraout_var,uVar3);
    }
    if (iVar2 != 0x1b6) {
      return CONCAT31(uVar7,1);
    }
    uVar3 = 0;
    uVar6 = FUN_11028400(param_1,puVar1,iVar5);
  }
  return CONCAT31((int3)((uint)uVar6 >> 8),uVar3);
}


