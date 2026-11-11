
/* ==== FUN_00431c40 @ 00431c40 ==== 
 * signature: undefined __cdecl FUN_00431c40(char * param_1, char * param_2, int param_3, int param_4, size_t * param_5, size_t * param_6, char param_7)
 * body: 00431c40-00431ccd
 */

void __cdecl
FUN_00431c40(char *param_1,char *param_2,int param_3,int param_4,size_t *param_5,size_t *param_6,
            char param_7)

{
  size_t local_14;
  size_t local_10;
  size_t local_c;
  size_t local_8;
  
  if ((param_3 == 0) && (param_4 == 0)) {
    *param_5 = 0;
    *param_6 = 0;
    return;
  }
  FUN_00431b50(param_1,param_2,param_3,&local_10,&local_c,param_7);
  FUN_00431b50(param_1,param_2,param_4,&local_14,&local_8,param_7);
  if ((int)local_10 <= (int)local_14) {
    local_14 = local_10;
  }
  *param_5 = local_14;
  if ((int)local_c <= (int)local_8) {
    local_c = local_8;
  }
  *param_6 = local_c;
  return;
}


