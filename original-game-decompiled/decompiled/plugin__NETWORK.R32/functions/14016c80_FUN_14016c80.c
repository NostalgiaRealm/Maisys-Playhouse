
/* ==== FUN_14016c80 @ 14016c80 ==== 
 * signature: undefined4 __cdecl FUN_14016c80(int param_1, int param_2)
 * body: 14016c80-14016ea8
 */

undefined4 __cdecl FUN_14016c80(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  int local_20c;
  int local_208;
  int iStack_204;
  int local_200 [128];
  
  if (((*(int *)(param_1 + 2) != *(int *)(param_2 + 0xc)) ||
      (*(int *)(param_1 + 6) != *(int *)(param_2 + 0x10))) || (*(short *)(param_1 + 10) != 0x66)) {
    return 0x10000;
  }
  iVar1 = FUN_14015cf0(*(char **)(param_1 + 0x44));
  local_208 = 1;
  local_20c = 0;
  if (iVar1 == -1) {
    puVar4 = *(undefined **)(param_1 + 0x44);
  }
  else {
    puVar4 = (&PTR_DAT_14026ca0)[iVar1];
  }
  if (PTR_s__parent_14026cd0 != (undefined *)0x0) {
    ppuVar3 = &PTR_s__parent_14026cd0;
    do {
      pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x1d,local_200);
      DAT_14028e48 = (*pcVar2)(local_200[0],&local_208,*ppuVar3,puVar4);
      if (local_208 == 0) {
        iStack_204 = 0;
        pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,7,local_200);
        DAT_14028e48 = (*pcVar2)(local_200[0],&iStack_204,*(undefined4 *)(param_1 + 0x18),0x2e);
        if ((iStack_204 != 0) && (PTR_DAT_14026cb8 != (undefined *)0x0)) {
          ppuVar3 = &PTR_DAT_14026cb8;
          goto LAB_14016d9e;
        }
        break;
      }
      ppuVar3 = ppuVar3 + 1;
    } while (*ppuVar3 != (undefined *)0x0);
  }
  goto LAB_14016dee;
  while (ppuVar3 = ppuVar3 + 1, *ppuVar3 != (undefined *)0x0) {
LAB_14016d9e:
    pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0xd],1,0x1d,local_200);
    DAT_14028e48 = (*pcVar2)(local_200[0],&local_208,*ppuVar3,iStack_204);
    if (local_208 == 0) {
      local_20c = 1;
      break;
    }
  }
LAB_14016dee:
  if (local_20c == 0) {
    pcVar2 = (code *)FUN_14008ab0(DAT_14028e44[0x12],1,0,local_200);
    DAT_14028e48 = (*pcVar2)(local_200[0],param_1,*(undefined4 *)(param_1 + 0x18),puVar4);
    return 0;
  }
  FUN_14008990(local_200,s_Unable_to_open_url___s__into_fra_14026d00);
  pcVar2 = (code *)FUN_14008ab0(*DAT_14028e44,1,0,&local_20c);
  DAT_14028e48 = (*pcVar2)(local_20c,param_1,2,local_200);
  return 0;
}


