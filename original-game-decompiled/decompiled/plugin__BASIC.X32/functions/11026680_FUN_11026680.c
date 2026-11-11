
/* ==== FUN_11026680 @ 11026680 ==== 
 * signature: undefined __cdecl FUN_11026680(uint * param_1, uint * param_2, uint param_3)
 * body: 11026680-110266cf
 */

void __cdecl FUN_11026680(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  if (1 < (int)param_3) {
    uVar3 = param_3 >> 1;
    param_3 = param_3 + uVar3 * -2;
    puVar2 = param_2;
    do {
      uVar1 = *param_1;
      param_2 = puVar2 + 1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 - 1;
      *puVar2 = uVar1 ^ 0x7fff7fff;
      puVar2 = param_2;
    } while (uVar3 != 0);
  }
  if (param_3 != 0) {
    *(ushort *)param_2 = (ushort)*param_1 ^ 0x7fff;
  }
  return;
}


