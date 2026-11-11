
/* ==== FUN_00484200 @ 00484200 ==== 
 * signature: undefined4 __cdecl FUN_00484200(undefined4 param_1, int param_2, int * param_3, undefined4 param_4, uint param_5, undefined4 * param_6)
 * body: 00484200-0048429e
 */

undefined4 __cdecl
FUN_00484200(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,uint param_5,
            undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0048b550(param_2);
  if (((*(byte *)(iVar1 + 0x1e) & 1) != 0) && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) {
    iVar2 = FUN_004355d0(DAT_004dae3c,*(int *)(iVar1 + 0x2e),param_3,param_4,param_5,param_6);
    if (iVar2 != 0x10000) {
      return 0;
    }
    if ((param_5 & 1) != 0) {
      puVar3 = FUN_00436b80(DAT_004dae3c,iVar1,param_3,0,(int *)0x0);
      if (puVar3 != (undefined4 *)0x0) {
        iVar1 = FUN_00484010(0,param_2,puVar3[0x14]);
        if (iVar1 == 0) {
          *param_6 = puVar3[0x14];
          return 0;
        }
      }
    }
  }
  return 0x10000;
}


