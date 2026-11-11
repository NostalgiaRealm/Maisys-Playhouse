
/* ==== FUN_140124c0 @ 140124c0 ==== 
 * signature: undefined __cdecl FUN_140124c0(int param_1)
 * body: 140124c0-14012580
 */

void __cdecl FUN_140124c0(int param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int local_20c;
  int local_208;
  int iStack_204;
  char acStack_200 [512];
  
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0xc,&local_208);
  iVar4 = 0;
  DAT_14028e48 = (*pcVar2)(local_208,&local_20c,param_1);
  pcVar2 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x34),1,0,&iStack_204);
  iVar3 = 0;
  DAT_14028e48 = (*pcVar2)(iStack_204,acStack_200,param_1);
  if (0 < local_20c) {
    do {
      if (acStack_200[iVar3] == ' ') {
        puVar1 = (undefined1 *)(param_1 + iVar4);
        iVar4 = iVar4 + 3;
        *puVar1 = 0x25;
        puVar1[1] = 0x32;
        puVar1[2] = 0x30;
      }
      else {
        *(char *)(param_1 + iVar4) = acStack_200[iVar3];
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_20c);
  }
  *(undefined1 *)(param_1 + iVar4) = 0;
  return;
}


