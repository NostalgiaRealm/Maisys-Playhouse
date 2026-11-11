
/* ==== vectormotionmod @ 1101dc00 ==== 
 * signature: uint __cdecl vectormotionmod(undefined4 * param_1)
 * body: 1101dc00-1101dd3e
 */

uint __cdecl vectormotionmod(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EAX;
  uint3 uVar5;
  uint uVar4;
  
                    /* 0x1dc00  38  vectormotionmod */
  uVar5 = (uint3)((uint)in_EAX >> 8);
  uVar4 = CONCAT31(uVar5,1);
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar4 = FUN_1101de30(param_1,iVar2,(uint)puVar1);
      return uVar4;
    }
    switch(iVar3) {
    case 0:
      param_1[3] = 0x226;
      *(undefined2 *)(param_1 + 4) = 6;
      return (uint)uVar5 << 8;
    case 1:
      uVar4 = FUN_1101e0f0(param_1);
      return uVar4 & 0xffffff00;
    case 4:
      uVar4 = FUN_1101dd80(param_1,iVar2,*puVar1);
      return uVar4 & 0xffffff00;
    case 5:
      uVar4 = FUN_1101ddf0(iVar2,puVar1);
      return uVar4 & 0xffffff00;
    case 8:
      return (uint)uVar5 << 8;
    case 0xe:
      FUN_11004840(param_1,10,0);
      uVar4 = FUN_11002620((short *)(iVar2 + 0x1e));
      return uVar4 & 0xffffff00;
    case 0x10:
      uVar4 = FUN_1101e160(param_1,iVar2);
      return uVar4;
    case 0x12:
      *puVar1 = 0x28;
      return uVar4;
    }
  }
  else {
    if (iVar3 < 0x19e) {
      if (iVar3 == 0x19d) {
        uVar4 = FUN_1101e0a0(param_1,iVar2);
        *(char *)puVar1 = (char)uVar4;
        return uVar4 & 0xffffff00;
      }
      if (iVar3 != 0x1e) {
        return uVar4;
      }
      uVar4 = FUN_1101de70(param_1,iVar2,puVar1);
      return uVar4 & 0xffffff00;
    }
    if (iVar3 == 0x1b2) {
      uVar4 = FUN_1101e530(param_1,iVar2);
      return uVar4;
    }
    if (iVar3 != 0x1b6) {
      return uVar4;
    }
    uVar4 = FUN_1101e9a0(param_1,puVar1,iVar2);
    uVar4 = uVar4 & 0xffffff00;
  }
  return uVar4;
}


