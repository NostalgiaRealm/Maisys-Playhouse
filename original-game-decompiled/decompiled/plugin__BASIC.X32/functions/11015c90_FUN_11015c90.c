
/* ==== FUN_11015c90 @ 11015c90 ==== 
 * signature: undefined __cdecl FUN_11015c90(int param_1, int param_2, int param_3, short * param_4, char param_5)
 * body: 11015c90-11015d25
 */

void __cdecl FUN_11015c90(int param_1,int param_2,int param_3,short *param_4,char param_5)

{
  HBRUSH ho;
  short sVar1;
  POINT local_30 [6];
  
  sVar1 = *(short *)(param_3 + 0x24);
  if (param_5 != '\0') {
    sVar1 = -sVar1;
  }
  ho = FUN_11015e10();
  FUN_11015d30(&local_30[0].x,param_4,*(short *)(param_3 + 0x22));
  FUN_11015e80(param_1,local_30,6,sVar1,ho,(HRGN)0x0,param_2);
  FUN_11015da0(&local_30[0].x,param_4,*(short *)(param_3 + 0x22));
  FUN_11015e80(param_1,local_30,6,-sVar1,ho,(HRGN)0x0,param_2);
  DeleteObject(ho);
  return;
}


