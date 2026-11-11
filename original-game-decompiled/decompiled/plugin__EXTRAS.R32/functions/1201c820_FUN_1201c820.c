
/* ==== FUN_1201c820 @ 1201c820 ==== 
 * signature: int __cdecl FUN_1201c820(int param_1, int param_2, short param_3)
 * body: 1201c820-1201cbac
 */

int __cdecl FUN_1201c820(int param_1,int param_2,short param_3)

{
  code *pcVar1;
  int iVar2;
  undefined2 uStack_78;
  ushort uStack_76;
  int local_74;
  undefined4 local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined2 auStack_40 [3];
  undefined4 uStack_3a;
  undefined4 uStack_36;
  int iStack_32;
  undefined1 auStack_14 [20];
  
  if (param_3 == 0) {
    pcVar1 = (code *)FUN_12027370(param_1,0,0x20,&local_74);
    iVar2 = (*pcVar1)(local_74,&local_70);
    DAT_12039a9c = iVar2;
    if (iVar2 == 0) {
      FUN_12027790(0,auStack_40,0x12037a3c);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&local_74);
      DAT_12039a9c = (*pcVar1)(local_74,local_70,s_classname_12037a28,0,auStack_40);
      FUN_12027170((int)auStack_14,iStack_32);
      if (iStack_32 != 0) {
        pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_74);
        DAT_12039a9c = (*pcVar1)(local_74,iStack_32);
        iStack_32 = 0;
        uStack_3a = 0;
        uStack_36 = 0;
      }
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&local_74);
      DAT_12039a9c = (*pcVar1)(local_74,0x18,param_1);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_6c);
      DAT_12039a9c = (*pcVar1)(iStack_6c,0x19,param_1 + 10);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_68);
      DAT_12039a9c = (*pcVar1)(iStack_68,0xe,param_1 + 0x14);
      uStack_78 = 0x14;
      uStack_76 = (ushort)((*(uint *)(param_1 + 0x20) & 0x80000000) == 0);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_64);
      DAT_12039a9c = (*pcVar1)(iStack_64,0x15,&uStack_78);
      uStack_78 = 0x14;
      uStack_76 = (ushort)((*(uint *)(param_1 + 0x20) & 0x40000000) == 0);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_60);
      DAT_12039a9c = (*pcVar1)(iStack_60,0x16,&uStack_78);
      uStack_78 = 0x14;
      uStack_76 = (ushort)((*(uint *)(param_1 + 0x20) & 0x20000000) == 0);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_5c);
      DAT_12039a9c = (*pcVar1)(iStack_5c,0x17,&uStack_78);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_58);
      DAT_12039a9c = (*pcVar1)(iStack_58,0x12,param_1 + 0x24);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_54);
      DAT_12039a9c = (*pcVar1)(iStack_54,0x10,param_1 + 0x36);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_50);
      DAT_12039a9c = (*pcVar1)(iStack_50,7,param_1 + 0x62);
      uStack_78 = 0x14;
      uStack_76 = (ushort)(*(int *)(param_1 + 0x90) == 0);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_4c);
      DAT_12039a9c = (*pcVar1)(iStack_4c,9,&uStack_78);
      uStack_78 = 0x14;
      uStack_76 = (ushort)(*(int *)(param_1 + 0x90) == 1);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_48);
      DAT_12039a9c = (*pcVar1)(iStack_48,10,&uStack_78);
      uStack_78 = 0x14;
      uStack_76 = (ushort)(*(int *)(param_1 + 0x90) == 2);
      pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_44);
      DAT_12039a9c = (*pcVar1)(iStack_44,0xb,&uStack_78);
      FUN_1201ec80(param_1,param_2);
      return 0;
    }
  }
  else {
    iVar2 = 0x10000;
  }
  return iVar2;
}


