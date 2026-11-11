
/* ==== FUN_1201eff5 @ 1201eff5 ==== 
 * signature: undefined __fastcall FUN_1201eff5(undefined4 param_1, int * param_2)
 * body: 1201eff5-1201eff7
 */

void __fastcall FUN_1201eff5(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined4 in_EAX;
  undefined4 uVar4;
  undefined2 uVar5;
  
  *param_2 = *param_2 + (int)param_2;
  uVar5 = SUB42(param_2,0);
  out(uVar5,(char)in_EAX + (char)((uint)in_EAX >> 8) * -0x14);
  uVar4 = in(uVar5);
  *param_2 = *param_2 + (int)param_2;
  *param_2 = *param_2 + (int)param_2;
  cVar3 = in(uVar5);
  pcVar2 = (char *)CONCAT31((int3)((uint)uVar4 >> 8),cVar3);
  *param_2 = *param_2 + (int)param_2;
  *pcVar2 = *pcVar2 + cVar3;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


