
/* ==== FUN_1001373b @ 1001373b ==== 
 * signature: undefined4 __cdecl FUN_1001373b(LPCSTR param_1, LPCSTR param_2, uint * param_3)
 * body: 1001373b-100137b0
 */

undefined4 __cdecl FUN_1001373b(LPCSTR param_1,LPCSTR param_2,uint *param_3)

{
  int iVar1;
  uint local_3c [7];
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_8;
  
  iVar1 = FUN_100137b1(param_2,&local_20);
  if (iVar1 == 0) {
    if (param_3 == (uint *)0x0) {
      iVar1 = FUN_100137b1(param_1,local_3c);
      if (iVar1 != 0) {
        return 1;
      }
      param_3 = local_3c;
    }
    else {
      param_3[6] = local_8;
    }
    if (((*param_3 < local_20) ||
        (((*param_3 == local_20 && (param_3[1] <= local_1c)) || (param_3[2] != local_18)))) ||
       (((param_3[3] != local_14 || (param_3[4] != local_10)) || (param_3[6] != local_8)))) {
      return 0;
    }
  }
  return 1;
}


