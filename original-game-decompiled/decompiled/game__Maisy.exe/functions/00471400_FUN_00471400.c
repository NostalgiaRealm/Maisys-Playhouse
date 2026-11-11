
/* ==== FUN_00471400 @ 00471400 ==== 
 * signature: undefined4 __cdecl FUN_00471400(int param_1, undefined4 * param_2)
 * body: 00471400-00471441
 */

undefined4 __cdecl FUN_00471400(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = (undefined4 *)FUN_0048b560(0,param_1);
  pvVar2 = (void *)*puVar1;
  if ((pvVar2 != (void *)0x0) && (*(short *)((int)pvVar2 + 0x22) == 0x5d)) {
    pvVar2 = FUN_0046da90(pvVar2,'\x01','\x01');
    if (pvVar2 != (void *)0x0) {
      *param_2 = *(undefined4 *)((int)pvVar2 + 0x166);
      return 0;
    }
  }
  return 0x10000;
}


