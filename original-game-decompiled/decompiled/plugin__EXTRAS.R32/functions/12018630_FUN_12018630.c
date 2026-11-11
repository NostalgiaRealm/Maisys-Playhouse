
/* ==== FUN_12018630 @ 12018630 ==== 
 * signature: undefined4 __cdecl FUN_12018630(int param_1, int param_2)
 * body: 12018630-120186eb
 */

undefined4 __cdecl FUN_12018630(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int local_4;
  
  if (*(int *)(param_2 + 2) != 0) {
    if (((*(byte *)(param_1 + 0x58) & 0x10) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
      FUN_12027680(param_1 + 0xe);
    }
    sVar3 = 0;
    *(undefined2 *)(param_1 + 0xe) = 0x69;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 **)(param_1 + 0x1c) = (undefined4 *)(param_1 + 0x32);
    *(undefined4 *)(param_1 + 0x32) = 0;
    do {
      iVar4 = (int)sVar3;
      sVar3 = sVar3 + 1;
      *(undefined4 *)(param_1 + 0x36 + iVar4 * 4) = 0;
    } while (sVar3 < 8);
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,8,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,(undefined2 *)(param_1 + 0xe));
    *(undefined4 *)(param_1 + 0x58) = 0x10;
    return 0;
  }
  uVar2 = FUN_12018920(param_1);
  return uVar2;
}


