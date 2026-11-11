
/* ==== FUN_00427d70 @ 00427d70 ==== 
 * signature: undefined __stdcall FUN_00427d70(int * param_1)
 * body: 00427d70-00427de4
 */

void FUN_00427d70(int *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)(short)(*(short *)((int)param_1 + 0x16) / 2 + 0x32);
  sVar1 = (short)(((int)(short)param_1[6] << 8) / 100);
  FUN_00443310(*param_1,sVar1,(short)(((100 - iVar2) * (int)sVar1 * 2) / 100),
               (short)((sVar1 * iVar2 * 2) / 100));
  return;
}


