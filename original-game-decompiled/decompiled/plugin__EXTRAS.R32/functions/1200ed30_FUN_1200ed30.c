
/* ==== FUN_1200ed30 @ 1200ed30 ==== 
 * signature: int __cdecl FUN_1200ed30(int param_1, int param_2)
 * body: 1200ed30-1200ef51
 */

int __cdecl FUN_1200ed30(int param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  int local_34;
  int iStack_30;
  undefined1 auStack_2c [44];
  
  pcVar2 = (code *)FUN_12027370(param_2,1,1,&local_34);
  DAT_12039a9c = (*pcVar2)(local_34,4,param_1);
  pcVar2 = (code *)FUN_12027370(param_2,1,7,&iStack_30);
  iVar3 = (*pcVar2)(iStack_30,0xe,1,auStack_2c);
  DAT_12039a9c = iVar3;
  if (iVar3 == 0) {
    lVar4 = __ftol();
    iVar3 = (int)lVar4;
    if (*(int *)(param_1 + 0x28) != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_34);
      DAT_12039a9c = (*pcVar2)(local_34,*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 0x1a) = 0x66;
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_34);
    DAT_12039a9c = (*pcVar2)(local_34,param_1 + 0x28,0xff);
    if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x20) = 0xff;
      **(undefined1 **)(param_1 + 0x28) = 0;
    }
    if ((DAT_12039a9c == 0) && (*(int *)(param_1 + 0x28) != 0)) {
      *(undefined4 *)(param_1 + 0x20) = 0xff;
      pcVar2 = (code *)FUN_12027370(param_2,1,1,&local_34);
      DAT_12039a9c = (*pcVar2)(local_34,0xe,param_1 + 0x1a);
      iVar1 = *(int *)(param_1 + 0x28);
      do {
        iVar3 = iVar3 + -1;
      } while (*(char *)(iVar1 + iVar3) == '\r');
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 1 + iVar3) = 0;
        pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_34);
        DAT_12039a9c = (*pcVar2)(local_34,param_1 + 0x24,*(undefined4 *)(param_1 + 0x28));
      }
      pcVar2 = (code *)FUN_12027370(param_2,1,1,&local_34);
      DAT_12039a9c = (*pcVar2)(local_34,0xf,param_1 + 10);
      pcVar2 = (code *)FUN_12027370(param_2,1,1,&iStack_30);
      DAT_12039a9c = (*pcVar2)(iStack_30,10,param_1 + 0xe);
      return 0;
    }
    iVar3 = 0x10000;
  }
  return iVar3;
}


