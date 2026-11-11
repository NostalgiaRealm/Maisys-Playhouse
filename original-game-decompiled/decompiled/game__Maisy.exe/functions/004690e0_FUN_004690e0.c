
/* ==== FUN_004690e0 @ 004690e0 ==== 
 * signature: undefined __cdecl FUN_004690e0(uint * param_1, uint * param_2, uint param_3)
 * body: 004690e0-0046912f
 */

void __cdecl FUN_004690e0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  if (1 < (int)param_3) {
    uVar2 = param_3 >> 1;
    param_3 = param_3 + uVar2 * -2;
    puVar3 = param_2;
    do {
      uVar1 = *param_1;
      param_2 = puVar3 + 1;
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
      *puVar3 = uVar1 ^ 0x7fff7fff;
      puVar3 = param_2;
    } while (uVar2 != 0);
  }
  if (param_3 != 0) {
    *(ushort *)param_2 = (ushort)*param_1 ^ 0x7fff;
  }
  return;
}


