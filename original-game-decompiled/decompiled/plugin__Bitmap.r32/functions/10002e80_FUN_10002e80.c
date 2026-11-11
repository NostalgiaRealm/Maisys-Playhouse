
/* ==== FUN_10002e80 @ 10002e80 ==== 
 * signature: int __cdecl FUN_10002e80(int param_1, int * param_2)
 * body: 10002e80-10002ef0
 */

int __cdecl FUN_10002e80(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  HGLOBAL pvVar3;
  
  cVar1 = FUN_100086d8(param_2,(int *)s_importbitmap_100130d8);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x6a) = param_1 + 0x12;
    iVar2 = FUN_10002f80(param_1,&param_2);
    if (iVar2 == 0) {
      FUN_100034a0(param_1,param_2);
      pvVar3 = GlobalHandle(param_2);
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalHandle(param_2);
      GlobalFree(pvVar3);
    }
    return iVar2;
  }
  return 0x10000;
}


