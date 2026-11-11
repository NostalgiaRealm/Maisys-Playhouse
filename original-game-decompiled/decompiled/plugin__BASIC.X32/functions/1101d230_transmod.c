
/* ==== transmod @ 1101d230 ==== 
 * signature: uint __cdecl transmod(undefined4 * param_1)
 * body: 1101d230-1101d394
 */

uint __cdecl transmod(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  undefined3 uVar8;
  BOOL BVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  
                    /* 0x1d230  36  transmod */
  uVar4 = 1;
  iVar1 = *(int *)((int)param_1 + 0x16);
  piVar2 = *(int **)((int)param_1 + 0x1a);
  iVar3 = param_1[1];
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar6 = FUN_1101d3e0(param_1,iVar1,(uint)piVar2);
      return uVar6;
    }
    uVar8 = 0;
    switch(iVar3) {
    case 0:
      param_1[3] = 0x26c;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar6 = FUN_1101d6a0(param_1);
      return uVar6 & 0xffffff00;
    case 4:
      uVar6 = FUN_1101d580(param_1,iVar1,*piVar2);
      return uVar6 & 0xffffff00;
    case 5:
      uVar6 = FUN_1101d600(iVar1,(int)piVar2);
      return uVar6 & 0xffffff00;
    case 8:
      return 0;
    case 0xe:
      uVar8 = 0;
      if (*(HGDIOBJ *)(iVar1 + 0x58) != (HGDIOBJ)0x0) {
        BVar5 = DeleteObject(*(HGDIOBJ *)(iVar1 + 0x58));
        *(undefined4 *)(iVar1 + 0x58) = 0;
        return CONCAT31((int3)((uint)BVar5 >> 8),1);
      }
      break;
    case 0x10:
      return 1;
    case 0x12:
      *piVar2 = 0x14;
      return 1;
    case 0x14:
      uVar6 = FUN_1101d8e0(param_1,iVar1,piVar2);
      return uVar6;
    }
  }
  else {
    uVar8 = (undefined3)((uint)in_EAX >> 8);
    if (iVar3 < 0x24) {
      if (iVar3 == 0x23) {
        uVar6 = FUN_1101da70(param_1,iVar1,piVar2);
        return uVar6 & 0xffffff00;
      }
      if (iVar3 != 0x1e) {
        return CONCAT31(uVar8,1);
      }
      uVar6 = FUN_1101d400(param_1,iVar1,piVar2);
      return uVar6 & 0xffffff00;
    }
    if (iVar3 == 0x19d) {
      uVar7 = FUN_1101d650(param_1,iVar1);
      *(char *)piVar2 = (char)uVar7;
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
    if (iVar3 != 0x1b2) {
      return CONCAT31(uVar8,1);
    }
    uVar4 = FUN_1101d6f0(param_1,iVar1);
    uVar8 = extraout_var;
  }
  return CONCAT31(uVar8,uVar4);
}


