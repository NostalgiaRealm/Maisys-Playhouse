
/* ==== FUN_0047b030 @ 0047b030 ==== 
 * signature: undefined __cdecl FUN_0047b030(uint * param_1, uint * param_2, int param_3, int param_4, uint param_5, int param_6)
 * body: 0047b030-0047b0bd
 */

void __cdecl
FUN_0047b030(uint *param_1,uint *param_2,int param_3,int param_4,uint param_5,int param_6)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (0 < param_6) {
    do {
      if (param_5 != 1 && -1 < (int)(param_5 - 1)) {
        uVar3 = param_5 >> 1;
        puVar4 = param_1;
        puVar5 = param_2;
        do {
          uVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          uVar3 = uVar3 - 1;
          *puVar5 = (uVar2 & 0xffe07fe0) * 2 | uVar2 & 0x1f001f;
          puVar5 = puVar5 + 1;
        } while (uVar3 != 0);
      }
      if ((param_5 & 1) != 0) {
        uVar1 = *(ushort *)((int)param_1 + param_5 * 2 + -2);
        *(ushort *)((int)param_2 + param_5 * 2 + -2) = (uVar1 & 0xffe0) * 2 | uVar1 & 0x1f;
      }
      param_1 = (uint *)((int)param_1 + param_3);
      param_2 = (uint *)((int)param_2 + param_4);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}


