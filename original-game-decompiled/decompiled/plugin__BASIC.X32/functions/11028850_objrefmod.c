
/* ==== objrefmod @ 11028850 ==== 
 * signature: uint __cdecl objrefmod(undefined4 * param_1)
 * body: 11028850-11028966
 */

uint __cdecl objrefmod(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  uint3 uVar6;
  uint uVar5;
  undefined3 extraout_var;
  
                    /* 0x28850  24  objrefmod */
  uVar6 = (uint3)((uint)in_EAX >> 8);
  uVar5 = CONCAT31(uVar6,1);
  psVar1 = *(short **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x11) {
    if (iVar3 == 0x10) {
      return (uint)uVar6 << 8;
    }
    switch(iVar3) {
    case 0:
      param_1[3] = 0x33e;
      *(undefined2 *)(param_1 + 4) = 3;
      return (uint)uVar6 << 8;
    case 1:
      uVar5 = FUN_11028a80(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11028990(param_1,iVar2,*(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_110289f0(iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 8:
      return (uint)uVar6 << 8;
    }
  }
  else {
    if (iVar3 < 0x1d) {
      if (iVar3 == 0x1c) {
        uVar5 = FUN_11028a10(param_1,iVar2,(uint)psVar1);
        return uVar5;
      }
      if (iVar3 != 0x12) {
        return uVar5;
      }
      psVar1[0] = 0x14;
      psVar1[1] = 0;
      return uVar5;
    }
    if (iVar3 < 0x1b3) {
      if (iVar3 == 0x1b2) {
        uVar4 = FUN_11028ab0(param_1,iVar2);
        return CONCAT31(extraout_var,uVar4);
      }
      if (iVar3 != 0x1e) {
        return uVar5;
      }
      uVar5 = FUN_11028a30(param_1,iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 == 600) {
      uVar5 = FUN_11028c30(param_1,iVar2,psVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 != 0x259) {
      return uVar5;
    }
    uVar5 = FUN_11028be0(param_1,iVar2,psVar1);
    uVar5 = uVar5 & 0xffffff00;
  }
  return uVar5;
}


