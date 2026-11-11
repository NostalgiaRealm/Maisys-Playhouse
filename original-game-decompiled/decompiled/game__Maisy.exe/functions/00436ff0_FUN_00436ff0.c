
/* ==== FUN_00436ff0 @ 00436ff0 ==== 
 * signature: undefined __stdcall FUN_00436ff0(char * param_1)
 * body: 00436ff0-004370dd
 */

void FUN_00436ff0(char *param_1)

{
  HANDLE pvVar1;
  HMODULE pHVar2;
  int iVar3;
  char local_324 [260];
  char local_220 [260];
  DWORD local_11c [5];
  char local_108 [260];
  
  __makepath(local_324,(char *)0x0,param_1,(char *)&DAT_004dafd4,&DAT_004dafcc);
  pvVar1 = __findfirst(local_324,local_11c);
  if (pvVar1 != (HANDLE)0xffffffff) {
    __makepath(local_220,(char *)0x0,param_1,local_108,(char *)0x0);
    pHVar2 = LoadLibraryA(local_220);
    FUN_00410f80(DAT_004da390,pHVar2);
    iVar3 = __findnext(pvVar1,local_11c);
    while (iVar3 != -1) {
      __makepath(local_220,(char *)0x0,param_1,local_108,(char *)0x0);
      pHVar2 = LoadLibraryA(local_220);
      FUN_00410f80(DAT_004da390,pHVar2);
      iVar3 = __findnext(pvVar1,local_11c);
    }
    FUN_004905d0(pvVar1);
  }
  return;
}


