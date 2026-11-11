
/* ==== FUN_1201cbb0 @ 1201cbb0 ==== 
 * signature: int __cdecl FUN_1201cbb0(int param_1, int param_2)
 * body: 1201cbb0-1201cfaa
 */

int __cdecl FUN_1201cbb0(int param_1,int param_2)

{
  uint *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int local_60;
  undefined2 uStack_5c;
  short sStack_5a;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 local_48;
  int iStack_44;
  undefined2 auStack_40 [3];
  undefined4 uStack_3a;
  undefined4 uStack_36;
  int iStack_32;
  uint auStack_14 [5];
  
  pcVar3 = (code *)FUN_12027370(param_1,0,0x20,&local_60);
  iVar4 = (*pcVar3)(local_60,&local_48);
  DAT_12039a9c = iVar4;
  if (iVar4 == 0) {
    uStack_5c = 0x14;
    sStack_5a = 0;
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&local_60);
    DAT_12039a9c = (*pcVar3)(local_60,0x18,param_1);
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&iStack_58);
    DAT_12039a9c = (*pcVar3)(iStack_58,0x19,param_1 + 10);
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&iStack_54);
    DAT_12039a9c = (*pcVar3)(iStack_54,0xe,param_1 + 0x14);
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&iStack_50);
    DAT_12039a9c = (*pcVar3)(iStack_50,0x15,&uStack_5c);
    puVar1 = (uint *)(param_1 + 0x20);
    if (sStack_5a == 0) {
      *puVar1 = *puVar1 | 0x80000000;
    }
    else {
      *puVar1 = *puVar1 & 0x7fffffff;
    }
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&local_60);
    DAT_12039a9c = (*pcVar3)(local_60,0x16,&uStack_5c);
    if (sStack_5a == 0) {
      *puVar1 = *puVar1 | 0x40000000;
    }
    else {
      *puVar1 = *puVar1 & 0xbfffffff;
    }
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&local_60);
    DAT_12039a9c = (*pcVar3)(local_60,0x17,&uStack_5c);
    if (sStack_5a == 0) {
      *puVar1 = *puVar1 | 0x20000000;
    }
    else {
      *puVar1 = *puVar1 & 0xdfffffff;
    }
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&local_60);
    DAT_12039a9c = (*pcVar3)(local_60,0x12,param_1 + 0x24);
    puVar2 = (undefined2 *)(param_1 + 0x36);
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_58);
    DAT_12039a9c = (*pcVar3)(iStack_58,0,puVar2);
    *puVar2 = 0;
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&iStack_54);
    DAT_12039a9c = (*pcVar3)(iStack_54,0x10,puVar2);
    puVar2 = (undefined2 *)(param_1 + 0x62);
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&iStack_50);
    DAT_12039a9c = (*pcVar3)(iStack_50,0,puVar2);
    *puVar2 = 0;
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&iStack_4c);
    DAT_12039a9c = (*pcVar3)(iStack_4c,7,puVar2);
    FUN_12027790(0,auStack_40,0x12037a3c);
    pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_44);
    DAT_12039a9c = (*pcVar3)(iStack_44,local_48,s_classname_12037a28,0,auStack_40);
    FUN_12027170((int)auStack_14,iStack_32);
    if (iStack_32 != 0) {
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_60);
      DAT_12039a9c = (*pcVar3)(local_60,iStack_32);
      iStack_32 = 0;
      uStack_3a = 0;
      uStack_36 = 0;
    }
    uVar5 = FUN_120271d0(auStack_14,(uint *)&DAT_12037a50);
    if ((char)uVar5 != '\0') {
      *(undefined4 *)(param_1 + 0x90) = 0;
      return 0;
    }
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&local_60);
    DAT_12039a9c = (*pcVar3)(local_60,9,&uStack_5c);
    if (sStack_5a != 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&local_60);
    DAT_12039a9c = (*pcVar3)(local_60,10,&uStack_5c);
    if (sStack_5a != 0) {
      *(undefined4 *)(param_1 + 0x90) = 1;
    }
    pcVar3 = (code *)FUN_12027370(param_2,1,1,&local_60);
    DAT_12039a9c = (*pcVar3)(local_60,0xb,&uStack_5c);
    if (sStack_5a != 0) {
      *(undefined4 *)(param_1 + 0x90) = 2;
    }
    iVar4 = 0;
  }
  return iVar4;
}


