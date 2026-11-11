
/* ==== messengermod @ 11009d40 ==== 
 * signature: uint __cdecl messengermod(undefined4 * param_1)
 * body: 11009d40-11009edb
 */

uint __cdecl messengermod(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 in_EAX;
  undefined3 uVar7;
  uint uVar4;
  int iVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  
                    /* 0x9d40  20  messengermod */
  uVar3 = 1;
  psVar1 = *(short **)((int)param_1 + 0x1a);
  iVar5 = *(int *)((int)param_1 + 0x16);
  iVar2 = param_1[1];
  if (iVar2 < 0x1d) {
    if (iVar2 == 0x1c) {
      uVar4 = FUN_1100a020(param_1,iVar5,(uint)psVar1);
      return uVar4;
    }
    uVar6 = 0;
    switch(iVar2) {
    case 0:
      param_1[3] = 0x2da;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar4 = FUN_1100a480(param_1);
      return uVar4 & 0xffffff00;
    case 4:
      uVar4 = FUN_11009f20(param_1,iVar5,*(undefined4 *)psVar1);
      return uVar4 & 0xffffff00;
    case 5:
      uVar4 = FUN_11009fc0(iVar5,(undefined4 *)psVar1);
      return uVar4 & 0xffffff00;
    case 8:
      return 0;
    case 0xe:
      FUN_11002620((short *)(iVar5 + 0x30));
      uVar4 = FUN_110048a0(param_1,0xe,0,(undefined2 *)(iVar5 + 0x5e));
      *(undefined2 *)(iVar5 + 0x5e) = 0x69;
      *(undefined4 *)(iVar5 + 100) = 0;
      *(undefined4 *)(iVar5 + 0x68) = 0;
      *(undefined4 *)(iVar5 + 0x60) = 0;
      *(undefined4 *)(iVar5 + 0x6c) = 0;
      return uVar4 & 0xffffff00;
    case 0x10:
      return 0;
    case 0x12:
      psVar1[0] = 0x14;
      psVar1[1] = 0;
      return 1;
    }
  }
  else {
    uVar7 = (undefined3)((uint)in_EAX >> 8);
    if (iVar2 < 0x23) {
      if (iVar2 == 0x22) {
        uVar4 = FUN_1100a510(param_1,psVar1,iVar5);
        return uVar4;
      }
      if (iVar2 != 0x1e) {
        return CONCAT31(uVar7,1);
      }
      uVar4 = FUN_1100a0a0(param_1,iVar5,(undefined4 *)psVar1);
      return uVar4 & 0xffffff00;
    }
    if (iVar2 == 0x19d) {
      iVar5 = FUN_1100a430(param_1,iVar5);
      *(char *)psVar1 = (char)iVar5;
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
    if (iVar2 == 0x1b2) {
      uVar3 = FUN_1100a5a0(param_1,iVar5);
      return CONCAT31(extraout_var,uVar3);
    }
    if (iVar2 != 0x1b6) {
      return CONCAT31(uVar7,1);
    }
    uVar3 = 0;
    uVar6 = FUN_1100a550(param_1,psVar1,iVar5);
  }
  return CONCAT31((int3)((uint)uVar6 >> 8),uVar3);
}


