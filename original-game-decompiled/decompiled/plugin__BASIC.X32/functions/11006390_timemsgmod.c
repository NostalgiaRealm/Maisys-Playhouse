
/* ==== timemsgmod @ 11006390 ==== 
 * signature: uint __cdecl timemsgmod(undefined4 * param_1)
 * body: 11006390-11006550
 */

uint __cdecl timemsgmod(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  undefined3 uVar7;
  uint uVar5;
  undefined3 extraout_var;
  undefined4 uVar6;
  
                    /* 0x6390  35  timemsgmod */
  uVar4 = 1;
  psVar1 = *(short **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar5 = FUN_110066d0(param_1,iVar2,(uint)psVar1);
      return uVar5;
    }
    uVar6 = 0;
    switch(iVar3) {
    case 0:
      param_1[3] = 0x2e4;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar5 = FUN_11006cd0(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11006590(param_1,iVar2,*(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_11006650(iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 8:
      return 0;
    case 0xe:
      FUN_11004840(param_1,10,0);
      FUN_11002620((short *)(iVar2 + 0x38));
      uVar5 = FUN_110048a0(param_1,0xe,0,(undefined2 *)(iVar2 + 0x80));
      *(undefined2 *)(iVar2 + 0x80) = 0x69;
      *(undefined4 *)(iVar2 + 0x86) = 0;
      *(undefined4 *)(iVar2 + 0x8a) = 0;
      *(undefined4 *)(iVar2 + 0x82) = 0;
      *(undefined4 *)(iVar2 + 0x8e) = 0;
      return uVar5 & 0xffffff00;
    case 0x10:
      uVar5 = FUN_11006da0(param_1,iVar2);
      return uVar5;
    case 0x12:
      psVar1[0] = 0x1e;
      psVar1[1] = 0;
      return 1;
    }
  }
  else {
    uVar7 = (undefined3)((uint)in_EAX >> 8);
    if (iVar3 < 0x23) {
      if (iVar3 == 0x22) {
        uVar5 = FUN_11006c90(param_1,psVar1,iVar2);
        return uVar5;
      }
      if (iVar3 != 0x1e) {
        return CONCAT31(uVar7,1);
      }
      uVar5 = FUN_11006730(param_1,iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 == 0x19d) {
      uVar6 = FUN_11006bf0(param_1,iVar2);
      *(char *)psVar1 = (char)uVar6;
      return CONCAT31((int3)((uint)uVar6 >> 8),1);
    }
    if (iVar3 == 0x1b2) {
      uVar4 = FUN_11006ef0(param_1,iVar2);
      return CONCAT31(extraout_var,uVar4);
    }
    if (iVar3 != 0x1b6) {
      return CONCAT31(uVar7,1);
    }
    uVar4 = 0;
    uVar6 = FUN_11006c40(param_1,psVar1,iVar2);
  }
  return CONCAT31((int3)((uint)uVar6 >> 8),uVar4);
}


