
/* ==== FUN_1200fe30 @ 1200fe30 ==== 
 * signature: undefined __cdecl FUN_1200fe30(int param_1, uint param_2)
 * body: 1200fe30-1200ff1d
 */

void __cdecl FUN_1200fe30(int param_1,uint param_2)

{
  code *pcVar1;
  int local_44;
  uint local_40;
  undefined1 auStack_3c [6];
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined4 uStack_2e;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 auStack_24 [9];
  undefined2 auStack_12 [9];
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,9,&local_44);
  DAT_12039a9c = (*pcVar1)(local_44,*(undefined4 *)(param_1 + 0x2c),&local_40);
  if (local_40 < param_2) {
    uStack_34 = 0xc;
    uStack_2e = 0;
    uStack_36 = 1;
    uStack_30 = 1;
    FUN_12027790(0,auStack_24,0x12037650);
    FUN_12027790(0,auStack_12,0x1203763c);
    uStack_26 = 100;
    uStack_28 = 100;
    uStack_2a = 10;
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,2,&local_44);
    DAT_12039a9c = (*pcVar1)(local_44,*(undefined4 *)(param_1 + 0x2c),auStack_3c);
  }
  return;
}


