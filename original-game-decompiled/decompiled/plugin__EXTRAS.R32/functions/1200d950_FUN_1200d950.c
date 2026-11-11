
/* ==== FUN_1200d950 @ 1200d950 ==== 
 * signature: undefined4 __cdecl FUN_1200d950(int param_1, int param_2, undefined4 param_3, short param_4)
 * body: 1200d950-1200dc3e
 */

undefined4 __cdecl FUN_1200d950(int param_1,int param_2,undefined4 param_3,short param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  char local_1;
  
  if (param_4 == 0) {
    return 0x10000;
  }
  if (param_4 == 1) {
    FUN_1200d5e0(param_2,param_1);
    FUN_1200d5e0(param_2,param_1 + 10);
    FUN_1200d620(param_2,(char *)(param_1 + 0x14),1);
    if (*(char *)(param_1 + 0x14) == '\0') {
      FUN_1200d620(param_2,(undefined4 *)(param_1 + 0x3c),1);
      FUN_1200d620(param_2,param_1 + 0x3d,1);
      FUN_1200d620(param_2,param_1 + 0x3e,1);
      FUN_1200d620(param_2,param_1 + 0x3f,1);
      FUN_1200d5e0(param_2,param_1 + 0x42);
      lVar4 = FUN_1200cbc0();
      *(int *)(param_1 + 0x4c) = (int)lVar4;
      puVar2 = (undefined4 *)(param_1 + 0x3c);
      puVar3 = (undefined4 *)(param_1 + 0x50);
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      FUN_1200d620(param_2,&local_1,1);
      if (local_1 == '\x01') {
        FUN_1200d6c0(param_2,(int *)(param_1 + 0x1a));
        if (*(void **)(param_1 + 0x6a) != (void *)0x0) {
          FUN_12003350(*(void **)(param_1 + 0x6a),*(int *)(param_1 + 0x1a));
          *(undefined1 *)(param_1 + 0x15) = 1;
        }
      }
      else {
        if (local_1 == '\x02') {
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
    }
  }
  if (param_4 == 2) {
    FUN_1200d5e0(param_2,param_1);
    FUN_1200d5e0(param_2,param_1 + 10);
    FUN_1200d620(param_2,(char *)(param_1 + 0x14),1);
    if (*(char *)(param_1 + 0x14) == '\0') {
      FUN_1200d620(param_2,(undefined4 *)(param_1 + 0x3c),1);
      FUN_1200d620(param_2,param_1 + 0x3d,1);
      FUN_1200d620(param_2,param_1 + 0x3e,1);
      FUN_1200d620(param_2,param_1 + 0x3f,1);
      FUN_1200d5e0(param_2,param_1 + 0x42);
      lVar4 = FUN_1200cbc0();
      *(int *)(param_1 + 0x4c) = (int)lVar4;
      puVar2 = (undefined4 *)(param_1 + 0x3c);
      puVar3 = (undefined4 *)(param_1 + 0x50);
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      FUN_1200d620(param_2,&local_1,1);
      if (local_1 == '\x01') {
        FUN_1200d6c0(param_2,(int *)(param_1 + 0x1a));
        if (*(void **)(param_1 + 0x6a) != (void *)0x0) {
          FUN_12003350(*(void **)(param_1 + 0x6a),*(int *)(param_1 + 0x1a));
          *(undefined1 *)(param_1 + 0x15) = 1;
        }
      }
      else {
        if (local_1 == '\x02') {
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
    }
  }
  return 0x10000;
}


