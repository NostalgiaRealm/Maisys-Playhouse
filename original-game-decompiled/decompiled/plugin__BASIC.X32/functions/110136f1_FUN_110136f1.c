
/* ==== FUN_110136f1 @ 110136f1 ==== 
 * signature: undefined __fastcall FUN_110136f1(byte * param_1, int param_2)
 * body: 110136f1-110136f3
 */

void __fastcall FUN_110136f1(byte *param_1,int param_2)

{
  code *pcVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  byte in_CF;
  
  iVar2 = (in_EAX + 0x58eefecf) - (uint)in_CF;
  piVar3 = (int *)CONCAT31((int3)((uint)iVar2 >> 8),(byte)iVar2 ^ *param_1);
  *piVar3 = (int)(param_1 + *piVar3);
  *(int *)(param_1 + -0x33eefecb) = *(int *)(param_1 + -0x33eefecb) + param_2;
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


