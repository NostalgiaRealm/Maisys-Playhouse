
/* ==== FUN_10001932 @ 10001932 ==== 
 * signature: undefined __cdecl FUN_10001932(int param_1, LPCSTR param_2, LPCSTR param_3)
 * body: 10001932-100019bd
 */

void __cdecl FUN_10001932(int param_1,LPCSTR param_2,LPCSTR param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  CHAR local_24;
  CHAR local_23 [31];
  
  local_24 = '%';
  lstrcpyA(local_23,param_2);
  lstrcatA(&local_24,&DAT_100030c8);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = 0;
    do {
      iVar2 = lstrcmpA((LPCSTR)(*(int *)(param_1 + 0xc) * uVar1 + *(int *)(param_1 + 0x18)),
                       &local_24);
      if (iVar2 == 0) break;
      uVar3 = uVar3 + 1;
      uVar1 = uVar3 & 0xffff;
    } while (uVar1 < *(uint *)(param_1 + 0x14));
  }
  uVar3 = uVar3 & 0xffff;
  if (*(uint *)(param_1 + 0x14) <= uVar3) {
    if (*(uint *)(param_1 + 8) <= uVar3) {
      return;
    }
    lstrcpyA((LPSTR)(*(int *)(param_1 + 0xc) * uVar3 + *(int *)(param_1 + 0x18)),&local_24);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  lstrcpyA((LPSTR)(*(int *)(param_1 + 0x10) * uVar3 + *(int *)(param_1 + 0x1c)),param_3);
  return;
}


