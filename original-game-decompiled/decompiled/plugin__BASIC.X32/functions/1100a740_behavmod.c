
/* ==== behavmod @ 1100a740 ==== 
 * signature: uint __cdecl behavmod(undefined4 * param_1)
 * body: 1100a740-1100a8a7
 */

uint __cdecl behavmod(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EAX;
  uint3 uVar5;
  uint uVar4;
  
                    /* 0xa740  2  behavmod */
  uVar5 = (uint3)((uint)in_EAX >> 8);
  uVar4 = CONCAT31(uVar5,1);
  puVar1 = *(uint **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x11) {
    if (iVar3 == 0x10) {
      return (uint)uVar5 << 8;
    }
    switch(iVar3) {
    case 0:
      param_1[3] = 0x2c6;
      *(undefined2 *)(param_1 + 4) = 7;
      return (uint)uVar5 << 8;
    case 1:
      uVar4 = FUN_1100ab00(param_1);
      return uVar4 & 0xffffff00;
    case 4:
      uVar4 = FUN_1100a8e0(param_1,iVar2,*puVar1);
      return uVar4 & 0xffffff00;
    case 5:
      uVar4 = FUN_1100a940(iVar2,(int)puVar1);
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
        return uVar4;
      }
      *puVar1 = 0x14;
      return (uint)uVar5 << 8;
    }
    if (iVar3 < 0x1d) {
      if (iVar3 == 0x1c) {
        uVar4 = FUN_1100a970(param_1,iVar2,(int)puVar1);
        return uVar4;
      }
      if (iVar3 != 0x19) {
        return uVar4;
      }
      uVar4 = FUN_1100ab40(param_1,(short *)puVar1,iVar2);
      return uVar4;
    }
    if (iVar3 < 0x19e) {
      if (iVar3 == 0x19d) {
        *(undefined1 *)puVar1 = 0;
        return (uint)uVar5 << 8;
      }
      switch(iVar3) {
      case 0x1e:
        uVar4 = FUN_1100aa10(param_1,iVar2,puVar1);
        return uVar4 & 0xffffff00;
      case 0x1f:
        uVar4 = FUN_1100aba0(param_1,(short *)puVar1,iVar2);
        return uVar4;
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
        return uVar4;
      }
    }
  }
  return CONCAT31(uVar5,1);
}


