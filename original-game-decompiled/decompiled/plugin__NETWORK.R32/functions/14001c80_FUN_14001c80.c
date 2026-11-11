
/* ==== FUN_14001c80 @ 14001c80 ==== 
 * signature: undefined4 __cdecl FUN_14001c80(int param_1, int param_2, short param_3)
 * body: 14001c80-14001ddd
 */

undefined4 __cdecl FUN_14001c80(int param_1,int param_2,short param_3)

{
  code *pcVar1;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_3 == 0) {
    pcVar1 = (code *)FUN_14008ab0(param_2,1,0,&local_20);
    DAT_14028e48 = (*pcVar1)(local_20,2,param_1 + 4);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,0,&iStack_1c);
    DAT_14028e48 = (*pcVar1)(iStack_1c,3,param_1 + 0xe);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,0,&iStack_18);
    DAT_14028e48 = (*pcVar1)(iStack_18,0xb,param_1 + 0x18);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,0,&iStack_14);
    DAT_14028e48 = (*pcVar1)(iStack_14,0xc,param_1 + 0x1e);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,0,&iStack_10);
    DAT_14028e48 = (*pcVar1)(iStack_10,0xd,param_1 + 0x24);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,3,&iStack_c);
    DAT_14028e48 = (*pcVar1)(iStack_c,0xb,1);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,3,&iStack_8);
    DAT_14028e48 = (*pcVar1)(iStack_8,0xc,1);
    pcVar1 = (code *)FUN_14008ab0(param_2,1,3,&iStack_4);
    DAT_14028e48 = (*pcVar1)(iStack_4,0xd,1);
    return 0;
  }
  return 0x10000;
}


