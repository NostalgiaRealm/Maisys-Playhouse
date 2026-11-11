
/* ==== FUN_0042f6f0 @ 0042f6f0 ==== 
 * signature: undefined4 __cdecl FUN_0042f6f0(undefined4 param_1, int * param_2, char * param_3)
 * body: 0042f6f0-0042f70c
 */

undefined4 __cdecl FUN_0042f6f0(undefined4 param_1,int *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  *param_2 = ~uVar2 - 1;
  return 0;
}


