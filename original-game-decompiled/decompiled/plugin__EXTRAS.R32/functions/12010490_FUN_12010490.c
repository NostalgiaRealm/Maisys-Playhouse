
/* ==== FUN_12010490 @ 12010490 ==== 
 * signature: undefined4 __cdecl FUN_12010490(int param_1, uint param_2, short * param_3)
 * body: 12010490-120105d0
 */

undefined4 __cdecl FUN_12010490(int param_1,uint param_2,short *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int local_44;
  int iStack_40;
  undefined1 local_3c [42];
  undefined1 auStack_12 [6];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  uVar1 = 0x10000;
  if ((0 < (int)param_2) && (*param_3 == 0x66)) {
    FUN_1200fe30(param_1,param_2);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_44);
    DAT_12039a9c = (*pcVar2)(local_44,*(undefined4 *)(param_1 + 0x2c),param_2,local_3c);
    if (iStack_4 != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_44);
      DAT_12039a9c = (*pcVar2)(local_44,iStack_4);
      iStack_4 = 0;
      uStack_c = 0;
      uStack_8 = 0;
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_44);
    DAT_12039a9c = (*pcVar2)(local_44,param_1,param_3,auStack_12);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,7,&iStack_40);
    DAT_12039a9c = (*pcVar2)(iStack_40,*(undefined4 *)(param_1 + 0x2c),param_2,local_3c);
    uVar1 = 0;
  }
  return uVar1;
}


