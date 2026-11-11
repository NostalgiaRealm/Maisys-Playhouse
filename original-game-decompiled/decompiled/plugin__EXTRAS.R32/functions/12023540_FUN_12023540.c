
/* ==== FUN_12023540 @ 12023540 ==== 
 * signature: undefined __cdecl FUN_12023540(int param_1, short param_2, undefined4 param_3, int param_4, int param_5)
 * body: 12023540-120236be
 */

void __cdecl FUN_12023540(int param_1,short param_2,undefined4 param_3,int param_4,int param_5)

{
  code *pcVar1;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  short local_7c [22];
  undefined4 uStack_50;
  undefined1 auStack_4c [32];
  undefined2 auStack_2c [22];
  
  if (0 < param_4) {
    do {
      if (param_2 == -1) {
        pcVar1 = (code *)FUN_12027370(param_1,1,10,&iStack_88);
        DAT_12039a9c = (*pcVar1)(iStack_88,&uStack_50,1);
        pcVar1 = (code *)FUN_12027370(param_1,1,10,&iStack_84);
        DAT_12039a9c = (*pcVar1)(iStack_84,auStack_4c,8);
        local_7c[0] = -1;
        local_7c[1] = 0;
        local_7c[2] = 0;
        local_7c[3] = 0;
        local_7c[4] = 0;
        FUN_12019010(param_5,&uStack_50,(int)local_7c);
      }
      else if (param_2 == 0x6d) {
        auStack_2c[0] = 0x6d;
        pcVar1 = (code *)FUN_12027370(param_1,1,6,&iStack_80);
        DAT_12039a9c = (*pcVar1)(iStack_80,auStack_2c);
        local_7c[0] = -1;
        local_7c[1] = 0;
        local_7c[2] = 0;
        local_7c[3] = 0;
        local_7c[4] = 0;
        FUN_12019080(param_5,auStack_2c,(int)local_7c);
      }
      else {
        local_7c[0] = param_2;
        pcVar1 = (code *)FUN_12027370(param_1,1,6,&local_8c);
        DAT_12039a9c = (*pcVar1)(local_8c,local_7c);
      }
      FUN_12023da0(param_5,local_7c,param_3);
      FUN_12018a40(param_5,local_7c);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


