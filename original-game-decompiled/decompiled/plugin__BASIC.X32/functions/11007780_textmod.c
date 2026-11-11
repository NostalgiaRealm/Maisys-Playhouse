
/* ==== textmod @ 11007780 ==== 
 * signature: undefined1 __cdecl textmod(undefined4 * param_1)
 * body: 11007780-110078fc
 */

undefined1 __cdecl textmod(undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
                    /* 0x7780  34  textmod */
  uVar2 = 1;
  iVar1 = *(int *)((int)param_1 + 0x16);
  iVar4 = param_1[1];
  puVar6 = *(undefined4 **)((int)param_1 + 0x1a);
  if (iVar4 < 0x1f) {
    if (iVar4 == 0x1e) {
      FUN_11007b60(param_1,iVar1,puVar6);
      return 0;
    }
    switch(iVar4) {
    case 0:
      param_1[3] = 0x32a;
      *(undefined2 *)(param_1 + 4) = 2;
      return 0;
    case 1:
      FUN_11007c70(param_1);
      return 0;
    case 4:
      FUN_11007a60(param_1,iVar1,*puVar6);
      return 0;
    case 5:
      FUN_11007b00(param_1,iVar1,(int)puVar6);
      return 0;
    case 8:
      return 0;
    case 0xe:
      if (*(int *)(iVar1 + 0x34) != 0) {
        FUN_11002530(param_1,*(int *)(iVar1 + 0x34));
        return 1;
      }
      break;
    case 0x10:
      return 0;
    case 0x12:
      *puVar6 = 10;
      return 1;
    }
  }
  else {
    switch(iVar4) {
    case 0x19d:
      uVar3 = FUN_11007a10(param_1,iVar1);
      *(char *)puVar6 = (char)uVar3;
      return 0;
    case 0x1b2:
      uVar2 = FUN_11007cd0(param_1,iVar1);
      return uVar2;
    case 600:
      puVar5 = (undefined4 *)(iVar1 + 0x10);
      puVar7 = puVar6;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      if (((*(int *)((int)param_1 + 0x1e) == 0x1a) &&
          (*(char **)((int)puVar6 + 0x16) != (char *)0x0)) &&
         (*(char **)(iVar1 + 0x34) != (char *)0x0)) {
        _strncpy(*(char **)((int)puVar6 + 0x16),*(char **)(iVar1 + 0x34),
                 (int)*(short *)(puVar6 + 5) - 1);
        *(undefined1 *)(*(short *)(puVar6 + 5) + -1 + *(int *)((int)puVar6 + 0x16)) = 0;
      }
      return 0;
    case 0x259:
      uVar2 = 0;
      puVar5 = (undefined4 *)(iVar1 + 0x10);
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  return uVar2;
}


