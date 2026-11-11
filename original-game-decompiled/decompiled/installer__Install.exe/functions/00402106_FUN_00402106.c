
/* ==== FUN_00402106 @ 00402106 ==== 
 * signature: undefined4 * __cdecl FUN_00402106(int param_1)
 * body: 00402106-00402184
 */

undefined4 * __cdecl FUN_00402106(int param_1)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  DAT_00404390 = DAT_00404390 + 1;
  if ((DAT_00404378 == (undefined4 *)0x0) ||
     (puVar2 = DAT_00404378, (int)DAT_00404364 + (0x7ff0 - (int)DAT_00404378) <= param_1)) {
    hMem = GlobalAlloc(2,0x7ff0);
    puVar1 = GlobalLock(hMem);
    puVar1[1] = 0;
    *puVar1 = hMem;
    puVar2 = puVar1;
    if ((DAT_004043a0 != (undefined4 *)0x0) &&
       (puVar2 = DAT_004043a0, DAT_00404364 != (undefined4 *)0x0)) {
      DAT_00404364[1] = puVar1;
      puVar2 = DAT_004043a0;
    }
    DAT_004043a0 = puVar2;
    puVar2 = puVar1 + 2;
    DAT_00404364 = puVar1;
  }
  DAT_00404378 = (undefined4 *)((int)puVar2 + param_1);
  return puVar2;
}


