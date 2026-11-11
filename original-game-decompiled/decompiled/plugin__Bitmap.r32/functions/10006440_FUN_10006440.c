
/* ==== FUN_10006440 @ 10006440 ==== 
 * signature: undefined __cdecl FUN_10006440(int * param_1, int * param_2, int * param_3, uint * param_4, uint * param_5, int * param_6, int param_7)
 * body: 10006440-100064be
 */

void __cdecl
FUN_10006440(int *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5,int *param_6,
            int param_7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  FUN_10006070(param_7,(int *)&param_1,param_1);
  *param_2 = param_1[1];
  iVar2 = param_1[2];
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  *param_3 = iVar2;
  uVar3 = (uint)(*(ushort *)((int)param_1 + 0xe) >> 3) * param_1[1] + 3 & 0xfffffffc;
  *param_4 = uVar3;
  if (-1 < param_1[2]) {
    *param_4 = -uVar3;
  }
  uVar1 = *(ushort *)((int)param_1 + 0xe);
  *param_5 = (uint)uVar1;
  if (uVar1 == 8) {
    *param_6 = (int)(param_1 + 10);
    return;
  }
  *param_6 = 0;
  return;
}


