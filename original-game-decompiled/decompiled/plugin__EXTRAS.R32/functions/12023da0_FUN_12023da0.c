
/* ==== FUN_12023da0 @ 12023da0 ==== 
 * signature: uint __cdecl FUN_12023da0(int param_1, short * param_2, undefined4 param_3)
 * body: 12023da0-12023e0f
 */

uint __cdecl FUN_12023da0(int param_1,short *param_2,undefined4 param_3)

{
  code *pcVar1;
  int local_30;
  short local_2c [22];
  
  FUN_12023eb0(*(short *)(param_1 + 0xe),local_2c);
  FUN_12018ee0(param_1,param_2,local_2c);
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x30),1,2,&local_30);
  DAT_12039a9c = (*pcVar1)(local_30,param_3,local_2c);
  return DAT_12039a9c & 0xffff0000;
}


