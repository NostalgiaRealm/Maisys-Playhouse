
/* ==== dragmod @ 11026b30 ==== 
 * signature: uint __cdecl dragmod(undefined4 * param_1)
 * body: 11026b30-11026c48
 */

uint __cdecl dragmod(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  uint3 uVar7;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined3 extraout_var_00;
  
                    /* 0x26b30  10  dragmod */
  uVar3 = 1;
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar2 = *(int *)((int)param_1 + 0x16);
  iVar6 = param_1[1];
  uVar7 = (uint3)((uint)iVar6 >> 8);
  if (iVar6 < 0x11) {
    if (iVar6 == 0x10) {
      uVar3 = FUN_11027350();
      return CONCAT31(extraout_var,uVar3);
    }
    switch(iVar6) {
    case 0:
      param_1[3] = 0x208;
      *(undefined2 *)(param_1 + 4) = 6;
      return (uint)uVar7 << 8;
    case 1:
      uVar4 = FUN_110272d0(param_1);
      return uVar4 & 0xffffff00;
    case 3:
      uVar4 = FUN_11026f20(param_1,iVar2,puVar1);
      return uVar4 & 0xffffff00;
    case 4:
      uVar4 = FUN_11026c70(param_1,iVar2,*puVar1);
      return uVar4 & 0xffffff00;
    case 5:
      uVar4 = FUN_11026d10(iVar2,(int)puVar1);
      return uVar4 & 0xffffff00;
    case 8:
      return (uint)uVar7 << 8;
    }
  }
  else {
    if (iVar6 < 0x19e) {
      if (iVar6 == 0x19d) {
        uVar5 = FUN_11027270(param_1,iVar2);
        *(char *)puVar1 = (char)uVar5;
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      if (iVar6 != 0x1c) {
        if (iVar6 != 0x1e) {
          return CONCAT31(uVar7,1);
        }
        uVar4 = FUN_11026e40(param_1,iVar2,puVar1);
        return uVar4 & 0xffffff00;
      }
      uVar4 = FUN_11026d80(param_1,iVar2,(int)puVar1);
      return uVar4;
    }
    if (iVar6 != 0x1b2) {
      return CONCAT31(uVar7,1);
    }
    uVar3 = FUN_11027360(param_1,iVar2);
    iVar6 = CONCAT31(extraout_var_00,uVar3);
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),uVar3);
}


