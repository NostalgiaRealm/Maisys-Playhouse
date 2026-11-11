
/* ==== FUN_100077c0 @ 100077c0 ==== 
 * signature: int __cdecl FUN_100077c0(undefined4 * param_1, int * param_2, undefined4 param_3, short * param_4)
 * body: 100077c0-100078e9
 */

int __cdecl FUN_100077c0(undefined4 *param_1,int *param_2,undefined4 param_3,short *param_4)

{
  int *piVar1;
  short *psVar2;
  char cVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined2 local_8;
  undefined4 *local_6;
  
  piVar1 = param_2;
  cVar3 = FUN_100086d8(param_2,(int *)s_winvalue_10013090);
  if ((cVar3 == '\0') && (cVar3 = FUN_100086d8(piVar1,(int *)s_value_1001312c), cVar3 == '\0')) {
    cVar3 = FUN_100086d8(piVar1,(int *)s_disposebitmap_10013198);
    if (cVar3 != '\0') {
      if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
        FUN_10006570((LPCVOID)*param_1);
      }
      *param_1 = 0;
      return 0;
    }
  }
  else {
    psVar2 = param_4;
    if (*param_4 == 1) {
      if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
        FUN_10006570((LPCVOID)*param_1);
      }
      puVar4 = FUN_10006650(*(undefined4 **)(psVar2 + 1));
      *param_1 = puVar4;
      return 0;
    }
    if (*param_4 == 0x69) {
      local_8 = 1;
      local_6 = (undefined4 *)0x0;
      pcVar5 = (code *)FUN_100089c7(*(int *)(DAT_100173b8 + 0x3c),1,0,(int *)&param_2);
      DAT_100173bc = (*pcVar5)(param_2,param_1,psVar2,&local_8);
      if (DAT_100173bc != 0) {
        return DAT_100173bc;
      }
      if ((LPCVOID)*param_1 != (LPCVOID)0x0) {
        FUN_10006570((LPCVOID)*param_1);
      }
      puVar4 = FUN_10006650(local_6);
      *param_1 = puVar4;
      return 0;
    }
  }
  return 0x10000;
}


