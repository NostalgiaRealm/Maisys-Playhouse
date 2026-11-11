
/* ==== vectormod @ 11017f70 ==== 
 * signature: uint __cdecl vectormod(undefined4 * param_1)
 * body: 11017f70-110180b3
 */

uint __cdecl vectormod(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 in_EAX;
  uint3 uVar6;
  uint uVar5;
  undefined3 extraout_var;
  
                    /* 0x17f70  37  vectormod */
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
      param_1[3] = 0x327;
      *(undefined2 *)(param_1 + 4) = 3;
      return (uint)uVar6 << 8;
    case 1:
      uVar5 = FUN_11018230(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_110180e0(param_1,iVar2,*(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_11018130(iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 8:
      return (uint)uVar6 << 8;
    }
  }
  else {
    if (iVar3 < 0x1d) {
      if (iVar3 == 0x1c) {
        uVar5 = FUN_11018160(param_1,iVar2,(uint)psVar1);
        return uVar5;
      }
      if (iVar3 != 0x12) {
        return uVar5;
      }
      psVar1[0] = 0x1e;
      psVar1[1] = 0;
      return uVar5;
    }
    if (iVar3 < 0x19e) {
      if (iVar3 == 0x19d) {
        *(undefined1 *)psVar1 = 0;
        return (uint)uVar6 << 8;
      }
      if (iVar3 != 0x1d) {
        if (iVar3 != 0x1e) {
          return uVar5;
        }
        uVar5 = FUN_110181d0(param_1,iVar2,(undefined4 *)psVar1);
        return uVar5 & 0xffffff00;
      }
      uVar5 = FUN_11018180(param_1,iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 == 0x1b2) {
      bVar4 = FUN_11018260(param_1,iVar2);
      return CONCAT31(extraout_var,bVar4);
    }
    if (iVar3 == 600) {
      uVar5 = FUN_11018440(param_1,iVar2,psVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 != 0x259) {
      return uVar5;
    }
    uVar5 = FUN_110183f0(param_1,iVar2,psVar1);
    uVar5 = uVar5 & 0xffffff00;
  }
  return uVar5;
}


