
/* ==== FUN_11025110 @ 11025110 ==== 
 * signature: bool __cdecl FUN_11025110(int param_1, int param_2)
 * body: 11025110-11025158
 */

bool __cdecl FUN_11025110(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1a);
  iVar2 = *(int *)(iVar1 + 0xc);
  if (iVar2 == 0x514) {
    FUN_11025230(param_1,param_2,(short *)(iVar1 + 0x24));
    return false;
  }
  if (iVar2 == 0x4b0) {
    FUN_110251a0(param_1,param_2,(short *)(iVar1 + 0x24));
  }
  return iVar2 != 0x4b0;
}


