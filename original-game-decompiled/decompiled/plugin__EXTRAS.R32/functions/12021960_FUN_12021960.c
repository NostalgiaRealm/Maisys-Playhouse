
/* ==== FUN_12021960 @ 12021960 ==== 
 * signature: undefined4 __cdecl FUN_12021960(int param_1, int param_2, short param_3)
 * body: 12021960-120219fd
 */

undefined4 __cdecl FUN_12021960(int param_1,int param_2,short param_3)

{
  code *pcVar1;
  int local_c;
  int iStack_8;
  int iStack_4;
  
  if (param_3 == 0) {
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&local_c);
    DAT_12039a9c = (*pcVar1)(local_c,7,param_1);
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_8);
    DAT_12039a9c = (*pcVar1)(iStack_8,8,param_1 + 10);
    pcVar1 = (code *)FUN_12027370(param_2,1,0,&iStack_4);
    DAT_12039a9c = (*pcVar1)(iStack_4,0xb,param_1 + 0x14);
    return 0;
  }
  return 0x10000;
}


