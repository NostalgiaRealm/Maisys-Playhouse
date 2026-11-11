
/* ==== FUN_140020c0 @ 140020c0 ==== 
 * signature: undefined4 __cdecl FUN_140020c0(int param_1, int param_2)
 * body: 140020c0-140022bf
 */

undefined4 __cdecl FUN_140020c0(int param_1,int param_2)

{
  code *pcVar1;
  undefined2 local_36;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  local_36 = 3;
  pcVar1 = (code *)FUN_14008ab0(param_2,1,7,&local_34);
  DAT_14028e48 = (*pcVar1)(local_34,&local_36,1);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_30);
  DAT_14028e48 = (*pcVar1)(iStack_30,param_1 + 4);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_2c);
  DAT_14028e48 = (*pcVar1)(iStack_2c,param_1 + 0xe);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_28);
  DAT_14028e48 = (*pcVar1)(iStack_28,param_1 + 0x2a);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_24);
  DAT_14028e48 = (*pcVar1)(iStack_24,param_1 + 0x30);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_20);
  DAT_14028e48 = (*pcVar1)(iStack_20,param_1 + 0x42);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_1c);
  DAT_14028e48 = (*pcVar1)(iStack_1c,param_1 + 0x18);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_18);
  DAT_14028e48 = (*pcVar1)(iStack_18,param_1 + 0x1e);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_14);
  DAT_14028e48 = (*pcVar1)(iStack_14,param_1 + 0x24);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_10);
  DAT_14028e48 = (*pcVar1)(iStack_10,param_1 + 0x54);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_c);
  DAT_14028e48 = (*pcVar1)(iStack_c,param_1 + 0x5a);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_8);
  DAT_14028e48 = (*pcVar1)(iStack_8,param_1 + 0x60);
  pcVar1 = (code *)FUN_14008ab0(param_2,1,5,&iStack_4);
  DAT_14028e48 = (*pcVar1)(iStack_4,param_1 + 0x66);
  return 0;
}


