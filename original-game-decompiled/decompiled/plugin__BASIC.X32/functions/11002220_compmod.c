
/* ==== compmod @ 11002220 ==== 
 * signature: uint __cdecl compmod(undefined4 * param_1)
 * body: 11002220-11002364
 */

uint __cdecl compmod(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EAX;
  uint3 uVar5;
  uint uVar4;
  
                    /* 0x2220  7  compmod */
  uVar5 = (uint3)((uint)in_EAX >> 8);
  puVar1 = *(uint **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x11) {
    if (iVar3 == 0x10) {
      return (uint)uVar5 << 8;
    }
    switch(iVar3) {
    case 0:
      param_1[3] = 0x2c7;
      *(undefined2 *)(param_1 + 4) = 8;
      return (uint)uVar5 << 8;
    case 1:
      uVar4 = FUN_11002490(param_1);
      return uVar4 & 0xffffff00;
    case 4:
      uVar4 = FUN_110023b0(param_1,iVar2,*puVar1);
      return uVar4 & 0xffffff00;
    case 5:
      uVar4 = FUN_110023f0(iVar2,puVar1);
      return uVar4 & 0xffffff00;
    case 8:
      return (uint)uVar5 << 8;
    }
  }
  else {
    if (iVar3 < 0x19) {
      if (iVar3 == 0x18) {
        *puVar1 = 2;
        return (uint)uVar5 << 8;
      }
      if (iVar3 != 0x12) {
        return CONCAT31(uVar5,1);
      }
      *puVar1 = 0x14;
      return (uint)uVar5 << 8;
    }
    if (iVar3 < 0x19e) {
      if (iVar3 == 0x19d) {
        *(undefined1 *)puVar1 = 0;
        return (uint)uVar5 << 8;
      }
      switch(iVar3) {
      case 0x1c:
        uVar4 = FUN_11002400(param_1,iVar2,(uint)puVar1);
        return uVar4;
      case 0x1d:
        uVar4 = FUN_11002420(param_1,iVar2,puVar1);
        return uVar4 & 0xffffff00;
      case 0x1e:
        uVar4 = FUN_11002450(param_1,iVar2,puVar1);
        return uVar4 & 0xffffff00;
      case 0x20:
        uVar4 = *(uint *)(iVar2 + 0xc);
        *puVar1 = uVar4;
        return uVar4 & 0xffffff00;
      case 0x21:
        uVar4 = *puVar1;
        *(uint *)(iVar2 + 0xc) = uVar4;
        return uVar4 & 0xffffff00;
      }
    }
    else {
      if (iVar3 == 0x1a2) {
        return (uint)uVar5 << 8;
      }
      if (iVar3 == 600) {
        return CONCAT31(uVar5,1);
      }
      if (iVar3 != 0x259) {
        return CONCAT31(uVar5,1);
      }
    }
  }
  return CONCAT31(uVar5,1);
}


