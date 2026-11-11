
/* ==== bordermod @ 11001000 ==== 
 * signature: uint __cdecl bordermod(undefined4 * param_1)
 * body: 11001000-11001192
 */

uint __cdecl bordermod(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  undefined3 uVar7;
  uint uVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  
                    /* 0x1000  4  bordermod */
  uVar4 = 1;
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar5 = FUN_110012e0(param_1,iVar2,(uint)puVar1);
      return uVar5;
    }
    uVar6 = 0;
    switch(iVar3) {
    case 0:
      param_1[3] = 0x2f8;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar5 = FUN_11001a40(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_110011d0(param_1,iVar2,*puVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_11001270(iVar2,(undefined2 *)puVar1);
      return uVar5 & 0xffffff00;
    case 8:
      return 0;
    case 0xe:
      FUN_11002620((short *)(iVar2 + 0x38));
      uVar5 = FUN_110048a0(param_1,0xe,0,(undefined2 *)(iVar2 + 0x6c));
      *(undefined2 *)(iVar2 + 0x6c) = 0x69;
      *(undefined4 *)(iVar2 + 0x72) = 0;
      *(undefined4 *)(iVar2 + 0x76) = 0;
      *(undefined4 *)(iVar2 + 0x6e) = 0;
      *(undefined4 *)(iVar2 + 0x7a) = 0;
      return uVar5 & 0xffffff00;
    case 0x10:
      return 0;
    case 0x11:
      uVar5 = FUN_11001b50(param_1,(int)puVar1,iVar2);
      return uVar5 & 0xffffff00;
    case 0x12:
      *puVar1 = 0x1e;
      return 1;
    }
  }
  else {
    uVar7 = (undefined3)((uint)in_EAX >> 8);
    if (iVar3 < 0x19e) {
      if (iVar3 == 0x19d) {
        uVar6 = FUN_110019b0(param_1,iVar2);
        *(char *)puVar1 = (char)uVar6;
        return CONCAT31((int3)((uint)uVar6 >> 8),1);
      }
      if (iVar3 != 0x1e) {
        return CONCAT31(uVar7,1);
      }
      uVar5 = FUN_11001340(param_1,iVar2,puVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 == 0x1b2) {
      uVar4 = FUN_11001ec0(param_1,iVar2);
      return CONCAT31(extraout_var,uVar4);
    }
    if (iVar3 != 0x1b6) {
      return CONCAT31(uVar7,1);
    }
    uVar4 = 0;
    uVar6 = FUN_11001dc0(param_1,puVar1,iVar2);
  }
  return CONCAT31((int3)((uint)uVar6 >> 8),uVar4);
}


