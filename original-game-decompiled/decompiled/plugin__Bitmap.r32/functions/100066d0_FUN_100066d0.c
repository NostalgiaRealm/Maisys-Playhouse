
/* ==== FUN_100066d0 @ 100066d0 ==== 
 * signature: undefined4 * __cdecl FUN_100066d0(HDC param_1, undefined4 * param_2)
 * body: 100066d0-10006766
 */

undefined4 * __cdecl FUN_100066d0(HDC param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_2c;
  int local_28;
  int local_24;
  uint local_1e;
  int local_c;
  
  FUN_10006030(param_2,&local_2c,&param_2);
  puVar1 = FUN_100064c0(param_1,local_28,local_24,local_1e & 0xffff);
  if (local_24 < 0) {
    local_24 = -local_24;
  }
  puVar2 = puVar1 + 10;
  if ((short)local_1e == 8) {
    if (local_c == 0) {
      puVar2 = puVar1 + 0x10a;
    }
    else {
      puVar2 = puVar2 + local_c;
    }
  }
  FUN_100094f0(puVar2,param_2,(((local_1e & 0xffff) >> 3) * local_28 + 3 & 0xfffffffc) * local_24);
  return puVar1;
}


