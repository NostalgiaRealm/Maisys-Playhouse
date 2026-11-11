
/* ==== sharemod @ 11008ad0 ==== 
 * signature: uint __cdecl sharemod(undefined4 * param_1)
 * body: 11008ad0-11008ba2
 */

uint __cdecl sharemod(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 in_EAX;
  uint3 uVar6;
  uint uVar5;
  undefined3 extraout_var;
  
                    /* 0x8ad0  31  sharemod */
  uVar6 = (uint3)((uint)in_EAX >> 8);
  uVar5 = CONCAT31(uVar6,1);
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar3 = param_1[1];
  if (iVar3 < 0x11) {
    if (iVar3 == 0x10) {
      return (uint)uVar6 << 8;
    }
    switch(iVar3) {
    case 0:
      param_1[3] = 0x29a;
      *(undefined2 *)(param_1 + 4) = 4;
      return (uint)uVar6 << 8;
    case 1:
      uVar5 = FUN_11008cd0(param_1);
      return uVar5 & 0xffffff00;
    case 4:
      uVar5 = FUN_11008bd0(param_1,iVar2,*puVar1);
      return uVar5 & 0xffffff00;
    case 5:
      uVar5 = FUN_11008c20(iVar2,puVar1);
      return uVar5 & 0xffffff00;
    case 8:
      return (uint)uVar6 << 8;
    }
  }
  else {
    if (iVar3 < 0x1b3) {
      if (iVar3 == 0x1b2) {
        uVar4 = FUN_11008d50(param_1,iVar2);
        return CONCAT31(extraout_var,uVar4);
      }
      if (iVar3 != 0x1c) {
        if (iVar3 != 0x1e) {
          return uVar5;
        }
        uVar5 = FUN_11008c70(param_1,iVar2,puVar1);
        return uVar5 & 0xffffff00;
      }
      uVar5 = FUN_11008c50(param_1,iVar2,(uint)puVar1);
      return uVar5;
    }
    if (iVar3 != 0x1b6) {
      return uVar5;
    }
    uVar5 = FUN_11008d10((int)puVar1,iVar2);
    uVar5 = uVar5 & 0xffffff00;
  }
  return uVar5;
}


