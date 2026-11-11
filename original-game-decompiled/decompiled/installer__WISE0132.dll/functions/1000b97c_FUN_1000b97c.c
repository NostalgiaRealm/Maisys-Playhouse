
/* ==== FUN_1000b97c @ 1000b97c ==== 
 * signature: undefined __cdecl FUN_1000b97c(int * param_1, int param_2)
 * body: 1000b97c-1000b9a1
 */

void __cdecl FUN_1000b97c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * DAT_10023eec;
  if (0 < iVar1) {
    do {
      while (*(char *)*param_1 != '\0') {
        *param_1 = *param_1 + 1;
      }
      *param_1 = *param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


