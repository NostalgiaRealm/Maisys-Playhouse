
/* ==== FUN_12010ff0 @ 12010ff0 ==== 
 * signature: undefined8 __cdecl FUN_12010ff0(ushort * param_1, ushort * param_2)
 * body: 12010ff0-1201110f
 */

undefined8 __cdecl FUN_12010ff0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short local_8;
  undefined2 uStack_6;
  short local_4;
  short sStack_2;
  
  sStack_2 = 0;
  local_4 = 0;
  local_8 = 0;
  uStack_6 = 0;
  uVar1 = FUN_12010fd0(param_1);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_12010fd0(param_2);
    if ((char)uVar1 == '\0') {
      if (((((short)param_2[1] <= (short)param_1[1]) && ((short)param_1[3] <= (short)param_2[3])) &&
          ((short)*param_2 <= (short)*param_1)) && ((short)param_1[2] <= (short)param_2[2])) {
        local_8 = (short)*(undefined4 *)param_1;
        uStack_6 = (undefined2)((uint)*(undefined4 *)param_1 >> 0x10);
        local_4 = (short)*(undefined4 *)(param_1 + 2);
        sStack_2 = (short)((uint)*(undefined4 *)(param_1 + 2) >> 0x10);
        FUN_12010fb0(&local_8,*param_2 - *param_1,param_2[1] - param_1[1]);
        iVar4 = (((int)(short)*param_1 - (int)(short)param_1[2]) - (int)(short)*param_2) +
                (int)(short)param_2[2];
        iVar3 = (int)(short)param_2[3] +
                (((int)(short)param_1[1] - (int)(short)param_2[1]) - (int)(short)param_1[3]);
        if (iVar3 < iVar4) {
          sVar2 = (short)iVar3;
        }
        else {
          sVar2 = (short)iVar4;
        }
        sStack_2 = sStack_2 + sVar2;
        local_4 = local_4 + sVar2;
        return CONCAT26(sStack_2,CONCAT24(local_4,CONCAT22(uStack_6,local_8)));
      }
      return CONCAT26(sStack_2,CONCAT24(local_4,CONCAT22(uStack_6,local_8)));
    }
  }
  return CONCAT26(sStack_2,CONCAT24(local_4,CONCAT22(uStack_6,local_8)));
}


