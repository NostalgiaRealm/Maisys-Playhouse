
/* ==== FUN_10004990 @ 10004990 ==== 
 * signature: undefined __cdecl FUN_10004990(int param_1, undefined2 * param_2, undefined4 param_3)
 * body: 10004990-10004a11
 */

void __cdecl FUN_10004990(int param_1,undefined2 *param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x1a,&local_4);
  DAT_100173bc = (*pcVar1)(local_4,param_1,&param_2);
  *param_2 = 0;
  pcVar1 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x10),1,0x19,&param_1);
  DAT_100173bc = (*pcVar1)(param_1,param_2,param_3);
  return;
}


