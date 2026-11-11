
/* ==== fulmotmod @ 1100bfc0 ==== 
 * signature: uint __cdecl fulmotmod(undefined4 * param_1)
 * body: 1100bfc0-1100c0fd
 */

uint __cdecl fulmotmod(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined3 uVar4;
  bool bVar5;
  undefined4 in_EAX;
  uint uVar6;
  undefined4 uVar7;
  undefined3 extraout_var;
  
                    /* 0xbfc0  14  fulmotmod */
  bVar5 = true;
  iVar1 = *(int *)((int)param_1 + 0x16);
  puVar2 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar3 = param_1[1];
  if (iVar3 < 0x1d) {
    if (iVar3 == 0x1c) {
      uVar6 = FUN_1100c350(param_1,iVar1,(uint)puVar2);
      return uVar6;
    }
    uVar4 = 0;
    switch(iVar3) {
    case 0:
      param_1[3] = 0x21c;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      uVar6 = FUN_1100c510(param_1);
      return uVar6 & 0xffffff00;
    case 4:
      uVar6 = FUN_1100c140(param_1,iVar1,*puVar2);
      return uVar6 & 0xffffff00;
    case 5:
      uVar6 = FUN_1100c1d0(iVar1,(int)puVar2);
      return uVar6 & 0xffffff00;
    case 8:
      return 0;
    case 0xe:
      uVar6 = 0;
      if (*(LPVOID *)(iVar1 + 0x20) != (LPVOID)0x0) {
        uVar6 = FUN_11029180(*(LPVOID *)(iVar1 + 0x20));
        *(undefined4 *)(iVar1 + 0x20) = 0;
        *(undefined2 *)(iVar1 + 0x28) = 0;
      }
      return uVar6 & 0xffffff00;
    case 0x10:
      uVar6 = FUN_1100c590(param_1,iVar1);
      return uVar6;
    case 0x12:
      *puVar2 = 0x1e;
      return 1;
    }
  }
  else {
    if (iVar3 == 0x1e) {
      uVar6 = FUN_1100c380(param_1,iVar1,puVar2);
      return uVar6 & 0xffffff00;
    }
    if (iVar3 == 0x19d) {
      uVar7 = FUN_1100c4c0(param_1,iVar1);
      *(char *)puVar2 = (char)uVar7;
      return CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
    if (iVar3 != 0x1b2) {
      return CONCAT31((int3)((uint)in_EAX >> 8),1);
    }
    bVar5 = FUN_1100c9d0(param_1,iVar1);
    uVar4 = extraout_var;
  }
  return CONCAT31(uVar4,bVar5);
}


