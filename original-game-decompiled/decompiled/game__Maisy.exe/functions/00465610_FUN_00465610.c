
/* ==== FUN_00465610 @ 00465610 ==== 
 * signature: undefined4 __cdecl FUN_00465610(int param_1, int param_2, byte * param_3)
 * body: 00465610-0046587b
 */

undefined4 __cdecl FUN_00465610(int param_1,int param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  code *pcVar7;
  code *local_8;
  
  bVar3 = false;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0x14);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14);
  if ((*(short **)(param_3 + 0x18) == (short *)0x0) || (**(short **)(param_3 + 0x18) != 2)) {
    local_8 = (code *)0x0;
    iVar2 = *(int *)(param_3 + 0xc);
    if ((iVar2 != 0) || (*(int *)(param_2 + 4) != *(int *)(param_1 + 4))) {
      uVar1 = *(uint *)(param_2 + 4);
      uVar4 = (uint)(*(int *)(param_1 + 4) <= (int)uVar1);
      if ((((iVar2 == 0x24) || (iVar2 == 0x224)) && (uVar1 == *(uint *)(param_1 + 4))) &&
         (*(int *)(param_1 + 8) < *(int *)(param_2 + 8))) {
        uVar4 = 0;
      }
      local_8 = (code *)FUN_0043aae0(uVar1,*(uint *)(param_1 + 4),uVar4);
      if (local_8 == (code *)0x0) {
        return 0xffffffff;
      }
    }
    iVar2 = *(int *)(param_3 + 0xc);
    if (iVar2 < 0x21) {
      if (iVar2 == 0x20) {
        if ((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
           (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
          FUN_00452010(CONCAT22((short)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10),
                                *(undefined2 *)(param_2 + 0x20)),*(undefined4 *)(param_2 + 0x1c),
                       *(undefined2 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),
                       *(int *)(param_2 + 4),*(int *)(param_2 + 8),*(int *)(param_2 + 0xc),
                       *(int *)(param_1 + 0xc),(ushort)param_3[0x1e],*(int *)(param_2 + 0x26),
                       *(int *)(param_3 + 0x14));
        }
        else {
          bVar3 = true;
        }
      }
      else {
        if (iVar2 != 0) goto LAB_004656d8;
        if (((param_3[0x22] == 0) && (param_3[0x21] == 0)) && (param_3[0x20] == 0)) {
          FUN_004658a0(param_1,param_2,param_3,(ushort *)local_8);
        }
        else {
          bVar3 = true;
        }
      }
    }
    else if ((iVar2 == 0x24) || (iVar2 == 0x224)) {
      FUN_00465a40(param_1,param_2,param_3,(ushort *)local_8);
    }
    else {
LAB_004656d8:
      bVar3 = true;
    }
    if (local_8 != (code *)0x0) {
      FUN_0048e750(local_8);
    }
  }
  else {
    bVar3 = true;
  }
  pcVar6 = (code *)0x0;
  if (!bVar3) {
    return 1;
  }
  iVar2 = *(int *)(param_3 + 0xc);
  local_8 = (code *)0x0;
  if (iVar2 < 0x21) {
    if (iVar2 == 0x20) {
      pcVar7 = FUN_00466160;
      goto LAB_0046581b;
    }
    switch(iVar2) {
    case 0:
      if (((param_3[0x22] == 0) && (param_3[0x21] == 0)) && (param_3[0x20] == 0)) {
        pcVar7 = FUN_00465ef0;
      }
      else {
        pcVar7 = FUN_00466220;
      }
      break;
    case 1:
      pcVar7 = FUN_00466140;
      break;
    default:
      goto switchD_00465798_caseD_2;
    case 3:
      pcVar7 = FUN_00465ef0;
      break;
    case 4:
      pcVar7 = FUN_004660c0;
      break;
    case 5:
      pcVar7 = FUN_00465ef0;
      break;
    case 7:
      pcVar7 = FUN_00465ef0;
    }
  }
  else {
    if (iVar2 < 0x225) {
      if ((iVar2 == 0x224) || (iVar2 == 0x24)) {
        pcVar7 = FUN_00465f20;
        goto LAB_0046581b;
      }
      if (iVar2 == 0x25) {
        pcVar7 = FUN_00465f80;
        goto LAB_0046581b;
      }
      if (iVar2 == 0x27) {
        pcVar7 = FUN_00466020;
        goto LAB_0046581b;
      }
    }
switchD_00465798_caseD_2:
    pcVar7 = FUN_00465ef0;
  }
LAB_0046581b:
  if (*(int *)(param_1 + 4) < *(int *)(param_2 + 4)) {
    local_8 = FUN_00465e20;
  }
  else if (*(int *)(param_2 + 4) < *(int *)(param_1 + 4)) {
    local_8 = FUN_00465e70;
  }
  if (((*(int *)(param_3 + 0x18) != 0) && (**(short **)(param_3 + 0x18) == 2)) &&
     (pcVar6 = FUN_004662e0, *(int *)(param_2 + 4) == *(int *)(param_1 + 4))) {
    local_8 = FUN_00465ec0;
  }
  uVar5 = FUN_0043acf0(param_1,param_2,(int)param_3,local_8,pcVar7,pcVar6);
  return uVar5;
}


