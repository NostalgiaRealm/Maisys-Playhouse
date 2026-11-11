
/* ==== FUN_120100a0 @ 120100a0 ==== 
 * signature: undefined4 __cdecl FUN_120100a0(int param_1, int param_2, short * param_3)
 * body: 120100a0-12010148
 */

undefined4 __cdecl FUN_120100a0(int param_1,int param_2,short *param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int local_40;
  undefined1 local_3c [6];
  undefined1 auStack_36 [54];
  
  uVar1 = 0x10000;
  if (0 < param_2) {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_40);
    DAT_12039a9c = (*pcVar2)(local_40,*(undefined4 *)(param_1 + 0x2c),param_2,local_3c);
    if (*param_3 == 0x6a) {
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 1;
    }
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_40);
    uVar1 = (*pcVar2)(local_40,param_1,auStack_36,param_3);
    DAT_12039a9c = uVar1;
  }
  return uVar1;
}


