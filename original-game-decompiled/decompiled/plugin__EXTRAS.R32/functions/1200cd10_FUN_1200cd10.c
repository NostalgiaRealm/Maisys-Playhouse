
/* ==== FUN_1200cd10 @ 1200cd10 ==== 
 * signature: undefined4 __cdecl FUN_1200cd10(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
 * body: 1200cd10-1200ce19
 */

undefined4 __cdecl FUN_1200cd10(undefined4 *param_1,uint *param_2,short *param_3,short *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int local_4;
  
  uVar3 = 0x10000;
  uVar1 = FUN_120271d0(param_2,(uint *)s_events_120370e8);
  if ((char)uVar1 != '\0') {
    uVar3 = FUN_12027a70(param_4,param_3,param_1,(undefined4 *)((int)param_1 + 10),(undefined4 *)0x0
                        );
    return uVar3;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_tempo_120373f8);
  if ((char)uVar1 != '\0') {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,6,&local_4);
    uVar1 = FUN_12003940(*(int *)((int)param_1 + 0x6a));
    DAT_12039a9c = (*pcVar2)(local_4,param_4,(int)(60000000 / (ulonglong)uVar1));
    return DAT_12039a9c;
  }
  uVar1 = FUN_120271d0(param_2,(uint *)s_volume_12037428);
  if ((char)uVar1 != '\0') {
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x3c),1,6,&local_4);
    uVar1 = FUN_12003990(*(int *)((int)param_1 + 0x6a));
    uVar3 = (*pcVar2)(local_4,param_4,uVar1 & 0xff);
    DAT_12039a9c = uVar3;
  }
  return uVar3;
}


