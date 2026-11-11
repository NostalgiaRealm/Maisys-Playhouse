
/* ==== FUN_100018b6 @ 100018b6 ==== 
 * signature: undefined __cdecl FUN_100018b6(int param_1, LPCSTR param_2, LPSTR param_3)
 * body: 100018b6-10001931
 */

void __cdecl FUN_100018b6(int param_1,LPCSTR param_2,LPSTR param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  CHAR local_24;
  CHAR local_23 [31];
  
  local_24 = '%';
  lstrcpyA(local_23,param_2);
  lstrcatA(&local_24,&DAT_100030c8);
  uVar1 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    do {
      iVar2 = lstrcmpA((LPCSTR)(*(int *)(param_1 + 0xc) * uVar1 + *(int *)(param_1 + 0x18)),
                       &local_24);
      if (iVar2 == 0) break;
      uVar3 = uVar3 + 1;
      uVar1 = uVar3 & 0xffff;
    } while (uVar1 < *(uint *)(param_1 + 0x14));
  }
  if ((uVar3 & 0xffff) < *(uint *)(param_1 + 0x14)) {
    lstrcpyA(param_3,(LPCSTR)(*(int *)(param_1 + 0x10) * (uVar3 & 0xffff) + *(int *)(param_1 + 0x1c)
                             ));
  }
  else {
    *param_3 = '\0';
  }
  return;
}


