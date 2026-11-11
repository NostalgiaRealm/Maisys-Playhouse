
/* ==== FUN_12005820 @ 12005820 ==== 
 * signature: undefined4 __cdecl FUN_12005820(int param_1, int param_2)
 * body: 12005820-1200596d
 */

undefined4 __cdecl FUN_12005820(int param_1,int param_2)

{
  code *pcVar1;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined2 uStack_14;
  undefined4 uStack_12;
  undefined4 uStack_e;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  pcVar1 = (code *)FUN_12027370(param_2,1,6,&local_24);
  DAT_12039a9c = (*pcVar1)(local_24,param_1);
  uStack_14 = 0x66;
  uStack_12 = 0xffffffff;
  uStack_e = 0;
  uStack_a = 0;
  uStack_6 = 0;
  pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,&uStack_14);
  FUN_120273e0(0,(undefined2 *)(param_1 + 10),(int)&uStack_14);
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18)) = 0;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_24);
  DAT_12039a9c = (*pcVar1)(local_24,uStack_6);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_20);
  DAT_12039a9c = (*pcVar1)(iStack_20,param_1 + 0x1e);
  pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_1c);
  DAT_12039a9c = (*pcVar1)(iStack_1c,param_1 + 0x24);
  pcVar1 = (code *)FUN_12027370(param_2,1,6,&iStack_18);
  DAT_12039a9c = (*pcVar1)(iStack_18,param_1 + 0x2a);
  return 0;
}


