
/* ==== returnmod @ 110278f0 ==== 
 * signature: uint __cdecl returnmod(undefined4 * param_1)
 * body: 110278f0-11027a25
 */

uint __cdecl returnmod(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint3 uVar6;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  
                    /* 0x278f0  28  returnmod */
  uVar2 = 1;
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar4 = *(int *)((int)param_1 + 0x16);
  iVar5 = param_1[1];
  uVar6 = (uint3)((uint)iVar5 >> 8);
  if (iVar5 < 0x11) {
    if (iVar5 == 0x10) {
      return 0;
    }
    switch(iVar5) {
    case 0:
      param_1[3] = 0x140;
      *(undefined2 *)(param_1 + 4) = 4;
      return (uint)uVar6 << 8;
    case 1:
      uVar3 = FUN_11027c50(param_1);
      return uVar3 & 0xffffff00;
    case 4:
      uVar3 = FUN_11027a50(param_1,iVar4,*puVar1);
      return uVar3 & 0xffffff00;
    case 5:
      uVar3 = FUN_11027aa0(iVar4,(int)puVar1);
      return uVar3 & 0xffffff00;
    case 8:
      return (uint)uVar6 << 8;
    }
  }
  else {
    if (iVar5 < 0x1d) {
      if (iVar5 == 0x1c) {
        uVar3 = FUN_11027ac0(param_1,iVar4,(int)puVar1);
        return uVar3;
      }
      if (iVar5 != 0x12) {
        return CONCAT31(uVar6,1);
      }
      *puVar1 = 10;
      return 1;
    }
    if (iVar5 < 0x196) {
      if (iVar5 == 0x195) {
        *(undefined2 *)((int)puVar1 + 6) = 0;
        *(undefined2 *)(puVar1 + 1) = 0xffff;
        *puVar1 = 0;
        return 0x100;
      }
      if (iVar5 != 0x1e) {
        return CONCAT31(uVar6,1);
      }
      uVar3 = FUN_11027b30(param_1,iVar4,puVar1);
      return uVar3 & 0xffffff00;
    }
    if (iVar5 == 0x19d) {
      iVar4 = FUN_11027c20(param_1,iVar4);
      *(char *)puVar1 = (char)iVar4;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
    if (iVar5 != 0x1b2) {
      return CONCAT31(uVar6,1);
    }
    uVar2 = FUN_11027c90(param_1,iVar4);
    iVar5 = CONCAT31(extraout_var,uVar2);
  }
  return CONCAT31((int3)((uint)iVar5 >> 8),uVar2);
}


