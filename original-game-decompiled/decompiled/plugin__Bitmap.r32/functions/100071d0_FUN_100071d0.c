
/* ==== FUN_100071d0 @ 100071d0 ==== 
 * signature: undefined4 * __cdecl FUN_100071d0(int param_1, int param_2)
 * body: 100071d0-100072d7
 */

undefined4 * __cdecl FUN_100071d0(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14 [4];
  int local_4;
  
  iVar6 = param_2;
  iVar5 = param_1;
  FUN_100063a0(&local_2c,&local_30,(int *)&local_34,(int *)&local_38,&param_1,&param_2,param_1,
               param_2);
  psVar4 = *(short **)(iVar5 + 8);
  sVar1 = *psVar4;
  sVar2 = psVar4[1];
  sVar3 = psVar4[2];
  local_4 = (int)psVar4[3];
  puVar7 = FUN_100064c0(*(HDC *)(iVar6 + 0x20),(int)sVar3 - (int)sVar1,local_4 - sVar2,
                        (int)*(short *)(iVar6 + 0x18));
  FUN_10006440(local_14,&local_18,&local_1c,&local_20,&local_24,&local_28,(int)puVar7);
  FUN_10006770(local_14[0],0,0,local_18,local_1c,(undefined4 *)local_18,(undefined4 *)local_1c,
               local_20,local_24,local_28,local_2c,(int)sVar1,(int)sVar2,(int)sVar3,local_4,local_30
               ,local_34,local_38,param_1,param_2);
  return puVar7;
}


