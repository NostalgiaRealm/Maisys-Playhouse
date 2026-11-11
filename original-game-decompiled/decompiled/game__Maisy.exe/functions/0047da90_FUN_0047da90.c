
/* ==== FUN_0047da90 @ 0047da90 ==== 
 * signature: undefined4 __fastcall FUN_0047da90(undefined4 * param_1)
 * body: 0047da90-0047dac7
 */

undefined4 __fastcall FUN_0047da90(undefined4 *param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    uVar3 = *(undefined4 *)((int)pvVar1 + 8);
    puVar2 = *(undefined4 **)((int)pvVar1 + 4);
    *param_1 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      param_1[1] = 0;
    }
    else {
      *puVar2 = 0;
    }
    FUN_004a602d(pvVar1);
    param_1[2] = param_1[2] + -1;
  }
  return uVar3;
}


