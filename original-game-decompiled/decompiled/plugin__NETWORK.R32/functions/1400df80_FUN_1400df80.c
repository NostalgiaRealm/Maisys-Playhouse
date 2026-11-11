
/* ==== FUN_1400df80 @ 1400df80 ==== 
 * signature: undefined4 __cdecl FUN_1400df80(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 1400df80-1400e02d
 */

undefined4 __cdecl FUN_1400df80(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_10;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&local_c);
  DAT_14028e48 = (*pcVar1)(local_c,param_1,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 10,&local_10);
  *param_4 = *param_4 + local_10;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,4,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x36,&local_10);
  *param_4 = *param_4 + local_10;
  return 0;
}


