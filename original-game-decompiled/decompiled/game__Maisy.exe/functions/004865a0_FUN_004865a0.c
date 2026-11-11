
/* ==== FUN_004865a0 @ 004865a0 ==== 
 * signature: int __cdecl FUN_004865a0(int param_1, uint * param_2, int param_3)
 * body: 004865a0-004865fa
 */

int __cdecl FUN_004865a0(int param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_c;
  void *local_8;
  
  iVar3 = 0;
  pcVar1 = (code *)FUN_0048b580(param_1,0,2,&local_c);
  iVar2 = 0;
  DAT_004e34cc = (*pcVar1)(local_c,&local_8);
  if (0 < param_3) {
    do {
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00486280(local_8,param_2);
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
    } while (iVar2 < param_3);
  }
  return iVar3;
}


