
/* ==== FUN_14009720 @ 14009720 ==== 
 * signature: int __stdcall FUN_14009720(void)
 * body: 14009720-140097c6
 */

int FUN_14009720(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_8;
  int iStack_4;
  
  uVar5 = 1;
  uVar4 = 2;
  iVar1 = (*DAT_1402641c)(2,1,0);
  *(int *)(iStack_8 + 2) = iVar1;
  if (iVar1 != -1) {
    (*DAT_14026448)(*(undefined2 *)(iStack_4 + 0x48));
    uVar2 = (*DAT_1402644c)(iStack_4 + 4);
    iVar3 = (*DAT_14026408)(iVar1,*(undefined4 *)(iStack_8 + 0xe),0x400,0x33);
    if (iVar3 != -1) {
      iVar3 = (*DAT_14026424)(iVar1,&stack0xffffffe4,0x10,uVar4,uVar5,uVar2);
      if (iVar3 != -1) {
        return 0;
      }
    }
  }
  iVar3 = (*DAT_14026410)();
  if ((iVar3 != 0x2733) && (iVar1 != -1)) {
    (*DAT_14026420)(iVar1);
    *(undefined4 *)(iStack_8 + 2) = 0;
  }
  return iVar3;
}


