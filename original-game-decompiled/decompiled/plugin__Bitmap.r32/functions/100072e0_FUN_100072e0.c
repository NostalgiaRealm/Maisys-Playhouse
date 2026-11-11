
/* ==== FUN_100072e0 @ 100072e0 ==== 
 * signature: undefined __cdecl FUN_100072e0(int param_1, int param_2, int param_3)
 * body: 100072e0-100073dc
 */

void __cdecl FUN_100072e0(int param_1,int param_2,int param_3)

{
  short *psVar1;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14 [3];
  int local_8;
  int local_4;
  
  FUN_10006440(&local_2c,&param_3,&local_3c,(uint *)&local_30,&local_34,&local_38,param_3);
  FUN_100063a0(local_14,(int *)&local_18,(int *)&local_1c,&local_20,&local_24,&local_28,param_1,
               param_2);
  psVar1 = *(short **)(param_1 + 8);
  local_8 = (int)psVar1[2];
  local_4 = (int)psVar1[3];
  FUN_10006770(local_14[0],(int)*psVar1,(int)psVar1[1],local_8,local_4,local_18,local_1c,local_20,
               local_24,local_28,local_2c,0,0,param_3,local_3c,param_3,(undefined4 *)local_3c,
               local_30,local_34,local_38);
  return;
}


