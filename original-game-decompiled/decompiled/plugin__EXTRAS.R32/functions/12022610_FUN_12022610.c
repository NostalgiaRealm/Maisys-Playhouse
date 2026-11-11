
/* ==== FUN_12022610 @ 12022610 ==== 
 * signature: undefined4 __cdecl FUN_12022610(int param_1, int param_2, short param_3)
 * body: 12022610-12022682
 */

undefined4 __cdecl FUN_12022610(int param_1,int param_2,short param_3)

{
  code *pcVar1;
  int local_8;
  int iStack_4;
  
  if (param_3 == 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&local_8);
    DAT_12039a9c = (*pcVar1)(local_8,6,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,8,param_1 + 10);
    return 0;
  }
  return 0x10000;
}


