
/* ==== FUN_14009660 @ 14009660 ==== 
 * signature: undefined4 __stdcall FUN_14009660(void)
 * body: 14009660-1400971a
 */

undefined4 FUN_14009660(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_1c [2];
  undefined4 uStack_1a;
  int iStack_8;
  undefined4 uStack_4;
  
  uStack_30 = 0;
  uStack_34 = 1;
  iVar2 = (*DAT_1402641c)(2);
  *(int *)(iStack_8 + 2) = iVar2;
  if (iVar2 != -1) {
    uVar1 = (*DAT_14026448)(uStack_4);
    uStack_30 = CONCAT22(uVar1,(undefined2)uStack_30);
    uStack_30 = (*DAT_14026444)(0);
    iVar3 = (*DAT_14026418)(iVar2,&uStack_34,0x10);
    if (iVar3 != -1) {
      iVar3 = (*DAT_14026434)(iVar2,auStack_1c,&uStack_30);
      if (iVar3 != -1) {
        (*DAT_14026440)(uStack_1a);
        iVar3 = (*DAT_14026408)(iVar2,*(undefined4 *)(iStack_8 + 10),0x400,0x2b);
        if (iVar3 != -1) {
          iVar2 = (*DAT_14026414)(iVar2,5);
          if (iVar2 != -1) {
            return 0;
          }
        }
      }
    }
  }
  uVar4 = (*DAT_14026410)();
  return uVar4;
}


