
/* ==== FUN_1102c130 @ 1102c130 ==== 
 * signature: int __cdecl FUN_1102c130(short * param_1)
 * body: 1102c130-1102c147
 */

int __cdecl FUN_1102c130(short *param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = param_1;
  do {
    psVar3 = psVar2 + 1;
    sVar1 = *psVar2;
    psVar2 = psVar3;
  } while (sVar1 != 0);
  return ((int)psVar3 - (int)param_1 >> 1) + -1;
}


