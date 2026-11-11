
/* ==== FUN_120106f0 @ 120106f0 ==== 
 * signature: int __cdecl FUN_120106f0(int param_1, uint param_2, undefined4 param_3)
 * body: 120106f0-120107f8
 */

int __cdecl FUN_120106f0(int param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int local_70;
  int iStack_6c;
  undefined2 local_68;
  undefined4 uStack_66;
  undefined1 auStack_3c [12];
  undefined2 uStack_30;
  undefined4 uStack_2e;
  
  iVar2 = 0x10000;
  if (0 < (int)param_2) {
    local_68 = 1;
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&local_70);
    iVar2 = (*pcVar1)(local_70,param_1,param_3,&local_68);
    DAT_12039a9c = iVar2;
    if (iVar2 == 0) {
      FUN_1200fe30(param_1,param_2);
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_70);
      DAT_12039a9c = (*pcVar1)(local_70,*(undefined4 *)(param_1 + 0x2c),param_2,auStack_3c);
      uStack_2e = uStack_66;
      uStack_30 = 1;
      pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,7,&iStack_6c);
      DAT_12039a9c = (*pcVar1)(iStack_6c,*(undefined4 *)(param_1 + 0x2c),param_2,auStack_3c);
    }
  }
  return iVar2;
}


