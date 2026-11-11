
/* ==== FUN_12010930 @ 12010930 ==== 
 * signature: undefined4 __cdecl FUN_12010930(undefined4 param_1, int param_2, short * param_3)
 * body: 12010930-120109d0
 */

undefined4 __cdecl FUN_12010930(undefined4 param_1,int param_2,short *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int local_4;
  
  uVar1 = 0x10000;
  if (*param_3 == 0x66) {
    if (*(int *)(param_2 + 0xe) != 0) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0x10,&local_4);
      DAT_12039a9c = (*pcVar2)(local_4,*(undefined4 *)(param_2 + 0xe));
      *(undefined4 *)(param_2 + 0xe) = 0;
      *(undefined4 *)(param_2 + 6) = 0;
      *(undefined4 *)(param_2 + 10) = 0;
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_4);
    uVar1 = (*pcVar2)(local_4,param_1,param_3,param_2);
    DAT_12039a9c = uVar1;
  }
  return uVar1;
}


