
/* ==== FUN_120278a0 @ 120278a0 ==== 
 * signature: undefined __cdecl FUN_120278a0(short * param_1, int param_2)
 * body: 120278a0-12027979
 */

void __cdecl FUN_120278a0(short *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  if ((*(short *)(param_2 + 2) != param_1[1]) || (*param_1 != 0x6d)) {
    piVar1 = (int *)(param_1 + 2);
    if ((*piVar1 != 0) && (*param_1 == 0x6d)) {
      pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,1,&local_4);
      DAT_12039a9c = (*pcVar2)(local_4,*piVar1);
      *piVar1 = 0;
    }
    *param_1 = 0x6d;
    param_1[1] = *(short *)(param_2 + 2);
    pcVar2 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,0,&local_4);
    DAT_12039a9c = (*pcVar2)(local_4,(int)*(short *)(param_2 + 2) << 2,piVar1);
  }
  iVar4 = 0;
  if (0 < *(short *)(param_2 + 2)) {
    iVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 2) + iVar3) =
           *(undefined4 *)(*(int *)(param_2 + 4) + iVar3);
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(short *)(param_2 + 2));
  }
  return;
}


