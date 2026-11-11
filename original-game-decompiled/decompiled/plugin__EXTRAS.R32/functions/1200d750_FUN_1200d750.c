
/* ==== FUN_1200d750 @ 1200d750 ==== 
 * signature: undefined4 __cdecl FUN_1200d750(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1200d750-1200d949
 */

undefined4 __cdecl FUN_1200d750(int param_1,int param_2,undefined4 param_3,short param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  short local_6;
  uint local_4;
  
  if (param_4 < 3) {
    if ((-1 < param_4) && (param_4 < 3)) {
      uVar2 = FUN_1200d950(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    return 0x10000;
  }
  pcVar1 = (code *)FUN_12027370(param_2,1,8,(int *)&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,&local_6,1);
  if (local_6 != 3) {
    return 0x10000;
  }
  FUN_1200d5e0(param_2,param_1);
  FUN_1200d5e0(param_2,param_1 + 10);
  FUN_1200d620(param_2,(char *)(param_1 + 0x14),1);
  if (*(char *)(param_1 + 0x14) != '\0') {
    FUN_1200d620(param_2,&local_4,1);
    if ((local_4 & 0xff) == 1) {
      FUN_1200d6c0(param_2,(int *)(param_1 + 0x1a));
      if (*(void **)(param_1 + 0x6a) != (void *)0x0) {
        FUN_12003350(*(void **)(param_1 + 0x6a),*(int *)(param_1 + 0x1a));
        *(undefined1 *)(param_1 + 0x15) = 1;
      }
    }
    else {
      if ((local_4 & 0xff) == 2) {
        return 0x10000;
      }
      *(undefined4 *)(param_1 + 0x1a) = 0;
    }
    FUN_1200d620(param_2,param_1 + 0x16,1);
    FUN_1200d620(param_2,param_1 + 0x17,1);
    FUN_1200d620(param_2,param_1 + 0x18,1);
    FUN_1200d5e0(param_2,param_1 + 0x1e);
    FUN_1200d5e0(param_2,param_1 + 0x28);
    FUN_1200d5e0(param_2,param_1 + 0x32);
    FUN_1200cbe0(param_1);
    return 0;
  }
  FUN_1200d620(param_2,(undefined4 *)(param_1 + 0x3c),1);
  FUN_1200d620(param_2,param_1 + 0x3d,1);
  FUN_1200d620(param_2,param_1 + 0x3e,1);
  FUN_1200d620(param_2,param_1 + 0x3f,1);
  FUN_1200d5e0(param_2,param_1 + 0x42);
  lVar6 = FUN_1200cbc0();
  *(int *)(param_1 + 0x4c) = (int)lVar6;
  puVar4 = (undefined4 *)(param_1 + 0x3c);
  puVar5 = (undefined4 *)(param_1 + 0x50);
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return 0;
}


