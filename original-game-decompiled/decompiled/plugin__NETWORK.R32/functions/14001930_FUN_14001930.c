
/* ==== FUN_14001930 @ 14001930 ==== 
 * signature: undefined4 __cdecl FUN_14001930(int param_1, int param_2)
 * body: 14001930-14001ac0
 */

undefined4 __cdecl FUN_14001930(int param_1,int param_2)

{
  code *pcVar1;
  int local_4;
  
  *(undefined1 *)(param_1 + 0x4de) = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x2e);
  if (*(int *)(param_1 + 0x3e) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x3e));
    *(undefined4 *)(param_1 + 0x3e) = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  FUN_14008b20(0,(undefined2 *)(param_1 + 0x30),param_2 + 0x30);
  *(undefined1 *)(*(int *)(param_1 + 0x3a) + *(int *)(param_1 + 0x3e)) = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0x10,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  FUN_14008b20(0,(undefined2 *)(param_1 + 0x42),param_2 + 0x42);
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50)) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0x5a);
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_2 + 0x5e);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)(param_2 + 0x66);
  return 0;
}


