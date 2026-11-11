
/* ==== FUN_1000874d @ 1000874d ==== 
 * signature: undefined4 __cdecl FUN_1000874d(int param_1, int param_2)
 * body: 1000874d-100087f2;100087f8-10008822
 */

undefined4 __cdecl FUN_1000874d(int param_1,int param_2)

{
  char local_10;
  char local_c;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0xf < local_8) {
      return 0;
    }
    local_c = *(char *)(local_8 + param_1);
    if (('@' < local_c) && (local_c < '[')) {
      local_c = local_c + ' ';
    }
    local_10 = *(char *)(local_8 + param_2);
    if (('@' < local_10) && (local_10 < '[')) {
      local_10 = local_10 + ' ';
    }
    if (local_c < local_10) break;
    if (local_10 < local_c) {
      return 1;
    }
    local_8 = local_8 + 1;
  }
  return 0xffffffff;
}


