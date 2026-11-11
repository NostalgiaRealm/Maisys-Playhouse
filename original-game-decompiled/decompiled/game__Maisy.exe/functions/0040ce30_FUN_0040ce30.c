
/* ==== FUN_0040ce30 @ 0040ce30 ==== 
 * signature: undefined __fastcall FUN_0040ce30(int * param_1)
 * body: 0040ce30-0040ce7d
 */

void __fastcall FUN_0040ce30(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)((int)param_1 + 0x1a);
  if ((int)puVar3 - (int)param_1 != 0x12) {
    do {
      piVar1 = (int *)puVar3[3];
      if (piVar1 != (int *)0x0) {
        FUN_0043e610(param_1,8,piVar1 + 1,piVar1,(int *)0x0);
      }
      puVar2 = (undefined4 *)puVar3[2];
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = puVar2;
    } while ((int)param_1 - (int)puVar2 != -0x12);
    *(int *)((int)param_1 + 0x16) = (int)param_1 + 0x12;
    *(int *)((int)param_1 + 0x1a) = (int)param_1 + 0x12;
  }
  return;
}


