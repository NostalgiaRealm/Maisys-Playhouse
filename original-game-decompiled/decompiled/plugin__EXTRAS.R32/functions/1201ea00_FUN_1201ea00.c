
/* ==== FUN_1201ea00 @ 1201ea00 ==== 
 * signature: undefined __cdecl FUN_1201ea00(int param_1)
 * body: 1201ea00-1201eaa3
 */

void __cdecl FUN_1201ea00(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int local_5c;
  int iStack_58;
  undefined1 local_54 [84];
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x16,&local_5c);
  puVar7 = local_54;
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar5 = param_1 + 0x14;
  iVar6 = param_1 + 0x36;
  iVar4 = param_1 + 0x24;
  uVar2 = FUN_12027340(param_1);
  DAT_12039a9c = (*pcVar1)(local_5c,uVar2,iVar4,iVar5,iVar6,uVar3,puVar7);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x17,&iStack_58);
  puVar7 = local_54;
  uVar3 = FUN_12027340(param_1);
  DAT_12039a9c = (*pcVar1)(iStack_58,uVar3,puVar7);
  return;
}


