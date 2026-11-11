
/* ==== miniscriptmod @ 11004010 ==== 
 * signature: uint __cdecl miniscriptmod(undefined4 * param_1)
 * body: 11004010-11004196
 */

uint __cdecl miniscriptmod(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  uint3 uVar6;
  uint uVar5;
  undefined3 extraout_var;
  
                    /* 0x4010  21  miniscriptmod */
  uVar6 = (uint3)((uint)in_EAX >> 8);
  uVar5 = CONCAT31(uVar6,1);
  psVar1 = *(short **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar5 = FUN_110042c0(param_1,iVar2,(int)psVar1);
      return uVar5;
    }
    switch(iVar3) {
    case 0:
      param_1[3] = 0x3c0;
      *(undefined2 *)(param_1 + 4) = 6;
      return (uint)uVar6 << 8;
    case 1:
      uVar5 = FUN_110043b0(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11004200(param_1,iVar2,*(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_11004280(param_1,iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    case 8:
      return (uint)uVar6 << 8;
    case 0xe:
      uVar5 = 0;
      if (*(LPVOID *)(iVar2 + 0x14) != (LPVOID)0x0) {
        uVar5 = FUN_11013d10(param_1,*(LPVOID *)(iVar2 + 0x14));
        *(undefined4 *)(iVar2 + 0x14) = 0;
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
    if (iVar3 < 0x23) {
      if (iVar3 == 0x22) {
        uVar5 = FUN_11004410(param_1,psVar1,iVar2);
        return uVar5;
      }
      if (iVar3 != 0x1e) {
        return uVar5;
      }
      uVar5 = FUN_11004310(param_1,iVar2,(undefined4 *)psVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 < 0x19e) {
      if (iVar3 == 0x19d) {
        uVar5 = FUN_110041d0(param_1,iVar2);
        *(char *)psVar1 = (char)uVar5;
        return uVar5 & 0xffffff00;
      }
      if (iVar3 != 0x24) {
        if (iVar3 != 0x25) {
          return uVar5;
        }
        uVar5 = FUN_11019e40(param_1,psVar1);
        return uVar5 & 0xffffff00;
      }
      uVar5 = FUN_110213f0(param_1,psVar1);
      return uVar5 & 0xffffff00;
    }
    if (iVar3 == 0x1b2) {
      uVar4 = FUN_11004490(param_1,iVar2);
      return CONCAT31(extraout_var,uVar4);
    }
    if (iVar3 != 0x1b6) {
      return uVar5;
    }
    uVar5 = FUN_110043f0(param_1,psVar1,iVar2);
    uVar5 = uVar5 & 0xffffff00;
  }
  return uVar5;
}


