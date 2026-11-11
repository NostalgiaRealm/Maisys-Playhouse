
/* ==== FUN_10003110 @ 10003110 ==== 
 * signature: undefined __cdecl FUN_10003110(int param_1, short * param_2, undefined4 * param_3, short param_4)
 * body: 10003110-1000315d
 */

void __cdecl FUN_10003110(int param_1,short *param_2,undefined4 *param_3,short param_4)

{
  short *psVar1;
  short sVar2;
  
  *(undefined1 *)param_3 = 0;
  psVar1 = FUN_10003160(param_1,param_2,(int *)0x0);
  if (*psVar1 == 0x66) {
    sVar2 = param_4 + -1;
    if (*(int *)(psVar1 + 5) < (int)sVar2) {
      sVar2 = psVar1[5];
    }
    FUN_100094f0(param_3,*(undefined4 **)(psVar1 + 7),(int)sVar2);
    *(undefined1 *)((int)param_3 + (int)sVar2) = 0;
  }
  return;
}


