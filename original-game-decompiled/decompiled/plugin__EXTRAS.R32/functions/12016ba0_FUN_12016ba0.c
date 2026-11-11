
/* ==== FUN_12016ba0 @ 12016ba0 ==== 
 * signature: undefined4 __cdecl FUN_12016ba0(int param_1, int param_2, undefined4 param_3, int * param_4)
 * body: 12016ba0-12016ca0
 */

undefined4 __cdecl FUN_12016ba0(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  code *pcVar1;
  int local_c;
  int local_8;
  int iStack_4;
  
  *param_4 = 2;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&local_8);
  DAT_12039a9c = (*pcVar1)(local_8,param_1,&local_c);
  *param_4 = *param_4 + local_c;
  pcVar1 = (code *)FUN_12027370(param_2,1,4,&iStack_4);
  DAT_12039a9c = (*pcVar1)(iStack_4,param_1 + 0x56,&local_c);
  *param_4 = *param_4 + local_c;
  if ((*(uint *)(param_1 + 0x58) & 0x10) != 0) {
    FUN_12017ae0(param_1,(undefined2 *)(param_1 + 0x5c),0);
    pcVar1 = (code *)FUN_12027370(param_2,1,4,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,(undefined2 *)(param_1 + 0x5c),&local_c);
    *param_4 = *param_4 + local_c;
    return 0;
  }
  if ((*(uint *)(param_1 + 0x58) & 1) != 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,4,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,param_1 + 0x20,&local_c);
    *param_4 = *param_4 + local_c;
  }
  return 0;
}


