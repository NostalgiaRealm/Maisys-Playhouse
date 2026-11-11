
/* ==== FUN_00432220 @ 00432220 ==== 
 * signature: int __cdecl FUN_00432220(short * param_1, undefined4 * param_2)
 * body: 00432220-00432271
 */

int __cdecl FUN_00432220(short *param_1,undefined4 *param_2)

{
  HLOCAL pvVar1;
  int iVar2;
  SIZE_T local_8;
  
  local_8 = 4;
  pvVar1 = FUN_0043f6f0(4);
  *param_2 = pvVar1;
  iVar2 = FUN_00457d30(param_1,(HLOCAL)*param_2,&local_8,(int *)0x0);
  if (iVar2 != 0) {
    FUN_0043f720((HLOCAL)*param_2);
    *param_2 = 0;
  }
  return iVar2;
}


