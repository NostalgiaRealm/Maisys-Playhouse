
/* ==== FUN_1101ed10 @ 1101ed10 ==== 
 * signature: undefined4 __cdecl FUN_1101ed10(int * param_1, int * param_2, int param_3, int param_4, RECT * param_5)
 * body: 1101ed10-1101f0d0
 */

undefined4 __cdecl FUN_1101ed10(int *param_1,int *param_2,int param_3,int param_4,RECT *param_5)

{
  int iVar1;
  BOOL BVar2;
  RECT local_70;
  RECT local_60;
  tagRECT local_50;
  RECT local_40;
  tagRECT local_30;
  tagRECT local_20;
  tagRECT local_10;
  
  local_40.left = 0;
  local_40.top = 0;
  local_40.bottom = 0;
  local_40.right = *(LONG *)(param_4 + 4);
  if ((param_2[2] != 0) && (param_2[1] != 0)) {
    if ((param_1[2] != 0) && (param_1[1] != 0)) {
      local_70.top = param_1[6];
      local_70.bottom = param_1[2] + local_70.top;
      local_70.left = param_1[5];
      local_70.right = local_70.left + param_1[1];
      param_1[4] = (uint)*(ushort *)(param_3 + 0xe);
      iVar1 = FUN_1101f0e0((uint)*(ushort *)(param_3 + 0xe),*(int *)(param_3 + 4));
      param_1[3] = iVar1;
      iVar1 = *(int *)(param_3 + 8);
      *param_1 = -1;
      if (-1 < iVar1) {
        *param_1 = 1;
      }
      local_60.top = param_2[6];
      local_60.bottom = param_2[2] + local_60.top;
      local_60.left = param_2[5];
      local_60.right = param_2[1] + local_60.left;
      param_2[4] = (uint)*(ushort *)(param_4 + 0xe);
      iVar1 = FUN_1101f0e0((uint)*(ushort *)(param_4 + 0xe),*(int *)(param_4 + 4));
      param_2[3] = iVar1;
      if (*(int *)(param_4 + 8) < 0) {
        *param_2 = -1;
        local_40.bottom = -*(int *)(param_4 + 8);
      }
      else {
        *param_2 = 1;
        local_40.bottom = *(int *)(param_4 + 8);
      }
      if (param_5 != (RECT *)0x0) {
        local_20.left = param_5->left;
        local_20.top = param_5->top;
        local_20.right = param_5->right;
        local_20.bottom = param_5->bottom;
        OffsetRect(&local_20,-local_60.left,-local_60.top);
        local_30.left = local_70.left;
        local_30.top = local_70.top;
        local_30.right = local_70.right;
        local_30.bottom = local_70.bottom;
        OffsetRect(&local_30,-local_70.left,-local_70.top);
        local_10.left = local_60.left;
        local_10.top = local_60.top;
        local_10.right = local_60.right;
        local_10.bottom = local_60.bottom;
        OffsetRect(&local_10,-local_60.left,-local_60.top);
        FUN_1101fe80(&local_20.left,&local_10.left,&local_30.left);
        OffsetRect(&local_20,local_70.left,local_70.top);
        IntersectRect(&local_70,&local_70,&local_20);
        IntersectRect(&local_60,&local_60,param_5);
      }
      BVar2 = IntersectRect(&local_50,&local_60,&local_40);
      if (BVar2 == 0) {
        return 0;
      }
      if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
        if (local_60.left < local_50.left) {
          local_70.left = local_70.left + (local_50.left - local_60.left);
        }
        if (local_60.top < local_50.top) {
          local_70.top = local_70.top + (local_50.top - local_60.top);
        }
        if (local_50.right < local_60.right) {
          local_70.right = local_70.right + (local_50.right - local_60.right);
        }
        if (local_50.bottom < local_60.bottom) {
          local_70.bottom = local_70.bottom + (local_50.bottom - local_60.bottom);
        }
      }
      else {
        local_30.left = local_50.left;
        local_30.top = local_50.top;
        local_30.right = local_50.right;
        local_30.bottom = local_50.bottom;
        FUN_1101fe80(&local_30.left,&local_60.left,&local_70.left);
        local_70.left = local_30.left;
        local_70.top = local_30.top;
        local_70.right = local_30.right;
        local_70.bottom = local_30.bottom;
      }
      if ((local_70.left < local_70.right) && (local_70.top < local_70.bottom)) {
        param_1[5] = local_70.left;
        param_1[6] = local_70.top;
        param_1[1] = local_70.right - local_70.left;
        param_1[2] = local_70.bottom - local_70.top;
        param_2[5] = local_50.left;
        param_2[6] = local_50.top;
        param_2[1] = local_50.right - local_50.left;
        param_2[2] = local_50.bottom - local_50.top;
        if (*param_1 < 0) {
          param_1[7] = param_1[7] + param_1[3] * local_70.top;
        }
        else {
          param_1[7] = param_1[7] + ((*(int *)(param_3 + 8) - local_70.top) + -1) * param_1[3];
          param_1[3] = -param_1[3];
        }
        iVar1 = param_2[3];
        if (*param_2 < 0) {
          param_2[7] = param_2[7] + iVar1 * local_50.top;
          return 1;
        }
        param_2[7] = param_2[7] + ((local_40.bottom - local_50.top) + -1) * iVar1;
        param_2[3] = -iVar1;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


