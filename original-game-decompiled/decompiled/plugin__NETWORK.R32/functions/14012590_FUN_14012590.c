
/* ==== FUN_14012590 @ 14012590 ==== 
 * signature: undefined __cdecl FUN_14012590(int param_1)
 * body: 14012590-14012655
 */

void __cdecl FUN_14012590(int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_20c;
  int local_208;
  int iStack_204;
  char acStack_200 [512];
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_208);
  iVar3 = 0;
  DAT_14028e48 = (*pcVar1)(local_208,&local_20c,param_1);
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&iStack_204);
  iVar2 = 0;
  DAT_14028e48 = (*pcVar1)(iStack_204,acStack_200,param_1);
  if (0 < local_20c) {
    do {
      if (((acStack_200[iVar2] == '%') && (acStack_200[iVar2 + 1] == '2')) &&
         (acStack_200[iVar2 + 2] == '0')) {
        *(undefined1 *)(param_1 + iVar3) = 0x20;
        iVar2 = iVar2 + 2;
      }
      else {
        *(char *)(param_1 + iVar3) = acStack_200[iVar2];
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_20c);
  }
  *(undefined1 *)(param_1 + iVar3) = 0;
  return;
}


