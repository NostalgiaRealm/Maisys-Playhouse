
/* ==== FUN_100076c0 @ 100076c0 ==== 
 * signature: undefined4 __cdecl FUN_100076c0(int * param_1, int * param_2, undefined4 param_3, short * param_4)
 * body: 100076c0-100077bd
 */

undefined4 __cdecl FUN_100076c0(int *param_1,int *param_2,undefined4 param_3,short *param_4)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  
  piVar2 = param_2;
  cVar3 = FUN_100086d8(param_2,(int *)s_winvalue_10013090);
  psVar1 = param_4;
  if (((cVar3 != '\0') || (cVar3 = FUN_100086d8(piVar2,(int *)s_value_1001312c), cVar3 != '\0')) &&
     ((*psVar1 == 1 || (*psVar1 == 0x6a)))) {
    *psVar1 = 1;
    *(int *)(psVar1 + 1) = *param_1;
    return 0;
  }
  cVar3 = FUN_100086d8(piVar2,(int *)s_height_10013068);
  if (cVar3 == '\0') {
    cVar3 = FUN_100086d8(piVar2,(int *)s_width_10013054);
    if (cVar3 == '\0') {
      return 0x10000;
    }
    *psVar1 = 1;
    psVar1[1] = 0;
    psVar1[2] = 0;
    if (*param_1 != 0) {
      FUN_10006070(*param_1,(int *)&param_1,(int *)&param_2);
      *(int *)(psVar1 + 1) = param_1[1];
      return 0;
    }
  }
  else {
    *psVar1 = 1;
    psVar1[1] = 0;
    psVar1[2] = 0;
    if (*param_1 != 0) {
      FUN_10006070(*param_1,(int *)&param_1,(int *)&param_2);
      uVar4 = param_1[2] >> 0x1f;
      *(uint *)(psVar1 + 1) = (param_1[2] ^ uVar4) - uVar4;
      return 0;
    }
  }
  return 0;
}


