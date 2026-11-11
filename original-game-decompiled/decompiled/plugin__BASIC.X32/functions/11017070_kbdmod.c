
/* ==== kbdmod @ 11017070 ==== 
 * signature: uint __cdecl kbdmod(undefined4 * param_1)
 * body: 11017070-110171dc
 */

uint __cdecl kbdmod(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  uint3 uVar6;
  uint uVar5;
  undefined3 extraout_var;
  
                    /* 0x17070  19  kbdmod */
  uVar6 = (uint3)((uint)in_EAX >> 8);
  uVar5 = CONCAT31(uVar6,1);
  psVar1 = *(short **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar5 = FUN_11017320(param_1,iVar2,(uint)psVar1);
      return uVar5;
    }
    switch(iVar3) {
    case 0:
      param_1[3] = 0x302;
      *(undefined2 *)(param_1 + 4) = 6;
      return (uint)uVar6 << 8;
    case 1:
      uVar5 = FUN_11017960(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11017220(param_1,iVar2,*(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_110172c0(param_1,iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 8:
      return (uint)uVar6 << 8;
    case 0xe:
      FUN_11002620((short *)(iVar2 + 0x34));
      uVar5 = FUN_110048a0(param_1,0xe,0,(undefined2 *)(iVar2 + 0x62));
      *(undefined2 *)(iVar2 + 0x62) = 0x69;
      *(undefined4 *)(iVar2 + 0x68) = 0;
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 100) = 0;
      *(undefined4 *)(iVar2 + 0x70) = 0;
      return uVar5 & 0xffffff00;
    case 0x10:
      return (uint)uVar6 << 8;
    case 0x12:
      psVar1[0] = 0x14;
      psVar1[1] = 0;
      return uVar5;
    }
  }
  else {
    if (iVar3 < 0x23) {
      if (iVar3 == 0x22) {
        uVar5 = FUN_11017a50(param_1,psVar1,iVar2);
        return uVar5;
      }
      if (iVar3 != 0x1e) {
        return uVar5;
      }
      uVar5 = FUN_110173a0(param_1,iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 == 0x19d) {
      *(undefined1 *)psVar1 = 0;
      return uVar5;
    }
    if (iVar3 == 0x1b2) {
      uVar4 = FUN_11017a90(param_1,iVar2);
      return CONCAT31(extraout_var,uVar4);
    }
    if (iVar3 != 0x1b6) {
      return uVar5;
    }
    uVar5 = FUN_11017a00(param_1,psVar1,iVar2);
    uVar5 = uVar5 & 0xffffff00;
  }
  return uVar5;
}


