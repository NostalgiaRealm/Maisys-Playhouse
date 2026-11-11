
/* ==== FUN_10009e00 @ 10009e00 ==== 
 * signature: undefined __cdecl FUN_10009e00(int param_1, uint * param_2, byte * param_3)
 * body: 10009e00-10009e51
 */

void __cdecl FUN_10009e00(int param_1,uint *param_2,byte *param_3)

{
  uint local_8;
  uint local_4;
  
  if (param_1 != 0) {
    FUN_1000bd70(&local_8,param_3);
    *param_2 = local_8;
    param_2[1] = local_4;
    return;
  }
  FUN_1000bdb0((uint *)&param_3,param_3);
  *param_2 = (uint)param_3;
  return;
}


