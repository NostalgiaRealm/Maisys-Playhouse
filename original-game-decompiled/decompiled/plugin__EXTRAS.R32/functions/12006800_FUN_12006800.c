
/* ==== FUN_12006800 @ 12006800 ==== 
 * signature: undefined4 __cdecl FUN_12006800(int param_1)
 * body: 12006800-1200699c
 */

undefined4 __cdecl FUN_12006800(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  short *psVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  int local_98;
  int iStack_94;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined4 uStack_8a;
  undefined4 uStack_86;
  short local_80;
  int local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined1 auStack_54 [84];
  
  local_80 = 0x69;
  local_90 = 0;
  local_7a = 0;
  local_76 = 0;
  local_7e = 0;
  local_72 = 0;
  pcVar1 = (code *)FUN_12027370(param_1,0,0x20,&local_98);
  DAT_12039a9c = (*pcVar1)(local_98,&local_90);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,5,&iStack_94);
  DAT_12039a9c = (*pcVar1)(iStack_94,local_90,s_project_12037238,0,&local_80);
  if (local_7e != 0) {
    uStack_86 = 0;
    uStack_8a = 0x641;
    uStack_8c = 0x17;
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x15,&local_98);
    puVar5 = auStack_54;
    psVar3 = &local_80;
    puVar4 = &uStack_8c;
    uVar2 = FUN_12027340(param_1);
    DAT_12039a9c = (*pcVar1)(local_98,uVar2,psVar3,puVar4,puVar5);
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x17,&iStack_94);
    puVar5 = auStack_54;
    uVar2 = FUN_12027340(param_1);
    DAT_12039a9c = (*pcVar1)(iStack_94,uVar2,puVar5);
  }
  if (((DAT_12039a9c == 0) && (local_80 == 0x69)) && (local_7e != 0)) {
    return 0;
  }
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x1a,&local_98);
  DAT_12039a9c = (*pcVar1)(local_98,param_1,&local_80);
  return 0x10000;
}


