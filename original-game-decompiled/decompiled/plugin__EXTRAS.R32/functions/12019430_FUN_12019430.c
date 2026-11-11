
/* ==== FUN_12019430 @ 12019430 ==== 
 * signature: undefined4 __cdecl FUN_12019430(int param_1, short * param_2, int * param_3)
 * body: 12019430-120194cf
 */

undefined4 __cdecl FUN_12019430(int param_1,short *param_2,int *param_3)

{
  code *pcVar1;
  int local_8;
  int local_4;
  
  if (*param_2 != -1) {
    pcVar1 = (code *)FUN_12027370(param_1,1,4,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,param_2,param_3);
    return DAT_12039a9c;
  }
  if (*(int *)(param_2 + 1) == 0) {
    local_4 = 0;
  }
  else {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xc,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,&local_4,*(undefined4 *)(param_2 + 1));
    local_4 = local_4 + 1;
  }
  *param_3 = local_4 + 0x2e;
  return 0;
}


