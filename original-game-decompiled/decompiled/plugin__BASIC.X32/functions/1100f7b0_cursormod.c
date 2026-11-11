
/* ==== cursormod @ 1100f7b0 ==== 
 * signature: undefined1 __cdecl cursormod(undefined4 * param_1)
 * body: 1100f7b0-1100f8c4
 */

undefined1 __cdecl cursormod(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  
                    /* 0xf7b0  9  cursormod */
  uVar3 = 1;
  puVar1 = *(undefined4 **)((int)param_1 + 0x1a);
  iVar4 = *(int *)((int)param_1 + 0x16);
  iVar2 = param_1[1];
  if (iVar2 < 0x1f) {
    if (iVar2 == 0x1e) {
      FUN_1100f990(param_1,iVar4,(int)puVar1);
      return 0;
    }
    switch(iVar2) {
    case 0:
      param_1[3] = 0x3ca;
      *(undefined2 *)(param_1 + 4) = 6;
      return 0;
    case 1:
      FUN_1100fa30(param_1);
      return 0;
    case 3:
      FUN_1100f9a0(param_1,iVar4,puVar1);
      return 0;
    case 4:
      FUN_1100f900(param_1,iVar4,*puVar1);
      return 0;
    case 5:
      FUN_1100f960(iVar4,(int)puVar1);
      return 0;
    case 8:
      return 0;
    case 0x10:
      return 1;
    case 0x12:
      *puVar1 = 0x1e;
      return 1;
    }
  }
  else {
    if (iVar2 == 0x27) {
      return 0;
    }
    if (iVar2 == 0x19d) {
      iVar4 = FUN_1100fa00(param_1,iVar4);
      *(char *)puVar1 = (char)iVar4;
      return 1;
    }
    if (iVar2 != 0x1b2) {
      return 1;
    }
    uVar3 = FUN_1100fa70();
  }
  return uVar3;
}


