
/* ==== FUN_1200ec60 @ 1200ec60 ==== 
 * signature: undefined4 __cdecl FUN_1200ec60(int param_1, int param_2, short param_3)
 * body: 1200ec60-1200ed24
 */

undefined4 __cdecl FUN_1200ec60(int param_1,int param_2,short param_3)

{
  code *pcVar1;
  int local_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_3 == 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&local_10);
    DAT_12039a9c = (*pcVar1)(local_10,4,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_c);
    DAT_12039a9c = (*pcVar1)(iStack_c,0xe,param_1 + 0x1a);
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,0xf,param_1 + 10);
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,10,param_1 + 0xe);
    return 0;
  }
  return 0x10000;
}


