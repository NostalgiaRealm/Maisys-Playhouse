
/* ==== FUN_120069a0 @ 120069a0 ==== 
 * signature: undefined4 __cdecl FUN_120069a0(undefined4 param_1, undefined4 param_2)
 * body: 120069a0-12006bdd
 */

undefined4 __cdecl FUN_120069a0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char acStack_30a [2];
  int local_308;
  undefined4 uStack_304;
  undefined2 local_300;
  undefined1 local_2fe;
  undefined4 local_2fd [63];
  char acStack_200 [256];
  undefined1 local_100 [256];
  
  local_300 = DAT_12037250;
  uVar5 = 0x10000;
  local_2fe = DAT_12037252;
  puVar6 = local_2fd;
  for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&local_308);
  DAT_12039a9c = (*pcVar2)(local_308,local_100,param_1);
  pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&uStack_304);
  DAT_12039a9c = (*pcVar2)(uStack_304,param_2,local_100);
  cVar1 = FUN_12006c40(0,(int)local_100,(int)acStack_200);
  if (cVar1 != '\0') {
    iVar3 = FUN_12006d40(acStack_200);
    cVar1 = acStack_200[0];
    if (iVar3 != 1) {
      iVar3 = FUN_12006be0(acStack_200,(short *)acStack_30a);
      if (iVar3 != 0) {
        return 0x10000;
      }
      cVar1 = acStack_30a[0] + 'A';
    }
    sVar4 = 1;
    local_300 = CONCAT11(local_300._1_1_,cVar1);
    cVar1 = FUN_12006c40(1,(int)local_100,(int)acStack_200);
    while (cVar1 != '\0') {
      if ((acStack_200[0] != '\\') &&
         (iVar3 = FUN_12006d40(&local_300), *(char *)((int)&uStack_304 + iVar3 + 3) != '\\')) {
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,2,&local_308);
        DAT_12039a9c = (*pcVar2)(local_308,&local_300,&DAT_1203724c);
      }
      sVar4 = sVar4 + 1;
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,2,&uStack_304);
      DAT_12039a9c = (*pcVar2)(uStack_304,&local_300,acStack_200);
      cVar1 = FUN_12006c40(sVar4,(int)local_100,(int)acStack_200);
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0,&local_308);
    uVar5 = 0;
    DAT_12039a9c = (*pcVar2)(local_308,param_2,&local_300);
  }
  return uVar5;
}


