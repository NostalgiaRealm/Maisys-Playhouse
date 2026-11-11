
/* ==== stringmod @ 110028f0 ==== 
 * signature: uint __cdecl stringmod(undefined4 * param_1)
 * body: 110028f0-11002a54
 */

uint __cdecl stringmod(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  uint3 uVar6;
  uint uVar5;
  undefined3 extraout_var;
  
                    /* 0x28f0  33  stringmod */
  uVar6 = (uint3)((uint)in_EAX >> 8);
  uVar5 = CONCAT31(uVar6,1);
  psVar1 = *(short **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar5 = FUN_11002b30(param_1,iVar2,(uint)psVar1);
      return uVar5;
    }
    switch(iVar3) {
    case 0:
      param_1[3] = 0x329;
      *(undefined2 *)(param_1 + 4) = 3;
      return (uint)uVar6 << 8;
    case 1:
      uVar5 = FUN_11002c80(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11002a90(param_1,iVar2,*(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_11002b00(param_1,iVar2,(int)psVar1);
      return uVar5 & 0xffffff00;
    case 8:
      return (uint)uVar6 << 8;
    case 0xe:
      uVar5 = 0;
      if (*(int *)(iVar2 + 0x10) != 0) {
        uVar5 = FUN_11002530(param_1,*(int *)(iVar2 + 0x10));
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      return uVar5 & 0xffffff00;
    case 0x10:
      return (uint)uVar6 << 8;
    case 0x12:
      psVar1[0] = 0x28;
      psVar1[1] = 0;
      return uVar5;
    }
  }
  else {
    if (iVar3 < 0x19e) {
      if (iVar3 == 0x19d) {
        *(undefined1 *)psVar1 = 0;
        return (uint)uVar6 << 8;
      }
      if (iVar3 != 0x1d) {
        if (iVar3 != 0x1e) {
          return uVar5;
        }
        uVar5 = FUN_11002bf0(param_1,iVar2,(undefined4 *)psVar1);
        return uVar5 & 0xffffff00;
      }
      uVar5 = FUN_11002b70(param_1,iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 == 0x1b2) {
      uVar4 = FUN_11002ec0(param_1,iVar2);
      return CONCAT31(extraout_var,uVar4);
    }
    if (iVar3 == 600) {
      uVar5 = FUN_11002cc0(param_1,iVar2,psVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 != 0x259) {
      return uVar5;
    }
    uVar5 = FUN_11002da0(param_1,iVar2,psVar1);
    uVar5 = uVar5 & 0xffffff00;
  }
  return uVar5;
}


