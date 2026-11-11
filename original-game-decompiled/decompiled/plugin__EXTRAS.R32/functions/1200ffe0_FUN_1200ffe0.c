
/* ==== FUN_1200ffe0 @ 1200ffe0 ==== 
 * signature: undefined4 __cdecl FUN_1200ffe0(int param_1, int param_2, short * param_3)
 * body: 1200ffe0-1201009c
 */

undefined4 __cdecl FUN_1200ffe0(int param_1,int param_2,short *param_3)

{
  short sVar1;
  undefined4 uVar2;
  code *pcVar3;
  int local_44;
  int iStack_40;
  undefined1 local_3c [24];
  undefined1 auStack_24 [36];
  
  uVar2 = 0x10000;
  if (0 < param_2) {
    sVar1 = *param_3;
    if ((sVar1 == 0x66) || (sVar1 == 0x6a)) {
      if (sVar1 == 0x6a) {
        FUN_12027790(0,param_3,0);
      }
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,6,&local_44);
      DAT_12039a9c = (*pcVar3)(local_44,*(undefined4 *)(param_1 + 0x2c),param_2,local_3c);
      pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,0,&iStack_40);
      uVar2 = (*pcVar3)(iStack_40,param_1,auStack_24,param_3);
      DAT_12039a9c = uVar2;
    }
  }
  return uVar2;
}


