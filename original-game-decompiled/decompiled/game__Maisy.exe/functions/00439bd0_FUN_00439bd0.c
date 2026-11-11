
/* ==== FUN_00439bd0 @ 00439bd0 ==== 
 * signature: undefined4 __cdecl FUN_00439bd0(int * param_1, int * param_2, int param_3, int param_4, RECT * param_5)
 * body: 00439bd0-00439f1a
 */

undefined4 __cdecl FUN_00439bd0(int *param_1,int *param_2,int param_3,int param_4,RECT *param_5)

{
  int iVar1;
  BOOL BVar2;
  tagRECT local_74;
  tagRECT local_64;
  tagRECT local_54;
  RECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  tagRECT local_14;
  
  local_44.left = 0;
  local_44.top = 0;
  local_44.bottom = 0;
  local_44.right = *(LONG *)(param_4 + 4);
  if ((param_2[2] != 0) && (param_2[1] != 0)) {
    if ((param_1[2] != 0) && (param_1[1] != 0)) {
      local_14.top = param_1[6];
      local_14.bottom = param_1[2] + local_14.top;
      local_14.left = param_1[5];
      local_14.right = local_14.left + param_1[1];
      param_1[4] = (uint)*(ushort *)(param_3 + 0xe);
      iVar1 = FUN_00439f20((uint)*(ushort *)(param_3 + 0xe),*(int *)(param_3 + 4));
      param_1[3] = iVar1;
      iVar1 = *(int *)(param_3 + 8);
      *param_1 = -1;
      if (-1 < iVar1) {
        *param_1 = 1;
      }
      local_24.top = param_2[6];
      local_24.bottom = param_2[2] + local_24.top;
      local_24.left = param_2[5];
      local_24.right = param_2[1] + local_24.left;
      param_2[4] = (uint)*(ushort *)(param_4 + 0xe);
      iVar1 = FUN_00439f20((uint)*(ushort *)(param_4 + 0xe),*(int *)(param_4 + 4));
      param_2[3] = iVar1;
      if (*(int *)(param_4 + 8) < 0) {
        *param_2 = -1;
        local_44.bottom = -*(int *)(param_4 + 8);
      }
      else {
        *param_2 = 1;
        local_44.bottom = *(int *)(param_4 + 8);
      }
      if (param_5 != (RECT *)0x0) {
        local_54.left = param_5->left;
        local_54.top = param_5->top;
        local_54.right = param_5->right;
        local_54.bottom = param_5->bottom;
        OffsetRect(&local_54,-local_24.left,-local_24.top);
        local_74.left = local_14.left;
        local_74.top = local_14.top;
        local_74.right = local_14.right;
        local_74.bottom = local_14.bottom;
        OffsetRect(&local_74,-local_14.left,-local_14.top);
        local_64.left = local_24.left;
        local_64.top = local_24.top;
        local_64.right = local_24.right;
        local_64.bottom = local_24.bottom;
        OffsetRect(&local_64,-local_24.left,-local_24.top);
        FUN_0043ac20(&local_54.left,&local_64.left,&local_74.left);
        OffsetRect(&local_54,local_14.left,local_14.top);
        IntersectRect(&local_14,&local_14,&local_54);
        IntersectRect(&local_24,&local_24,param_5);
      }
      BVar2 = IntersectRect(&local_34,&local_24,&local_44);
      if (BVar2 == 0) {
        return 0;
      }
      if ((param_2[1] == param_1[1]) && (param_2[2] == param_1[2])) {
        if (local_24.left < local_34.left) {
          local_14.left = local_14.left + (local_34.left - local_24.left);
        }
        if (local_24.top < local_34.top) {
          local_14.top = local_14.top + (local_34.top - local_24.top);
        }
        if (local_34.right < local_24.right) {
          local_14.right = local_14.right + (local_34.right - local_24.right);
        }
        if (local_34.bottom < local_24.bottom) {
          local_14.bottom = local_14.bottom + (local_34.bottom - local_24.bottom);
        }
      }
      else {
        local_54.left = local_34.left;
        local_54.top = local_34.top;
        local_54.right = local_34.right;
        local_54.bottom = local_34.bottom;
        FUN_0043ac20(&local_54.left,&local_24.left,&local_14.left);
        local_14.left = local_54.left;
        local_14.top = local_54.top;
        local_14.right = local_54.right;
        local_14.bottom = local_54.bottom;
      }
      if ((local_14.left < local_14.right) && (local_14.top < local_14.bottom)) {
        param_1[5] = local_14.left;
        param_1[6] = local_14.top;
        param_1[1] = local_14.right - local_14.left;
        param_1[2] = local_14.bottom - local_14.top;
        param_2[5] = local_34.left;
        param_2[6] = local_34.top;
        param_2[1] = local_34.right - local_34.left;
        param_2[2] = local_34.bottom - local_34.top;
        iVar1 = param_1[3];
        if (*param_1 < 0) {
          param_1[7] = param_1[7] + iVar1 * local_14.top;
        }
        else {
          param_1[7] = param_1[7] + ((*(int *)(param_3 + 8) - local_14.top) + -1) * iVar1;
          param_1[3] = -iVar1;
        }
        iVar1 = param_2[3];
        if (*param_2 < 0) {
          param_2[7] = param_2[7] + iVar1 * local_34.top;
          return 1;
        }
        param_2[7] = param_2[7] + ((local_44.bottom - local_34.top) + -1) * iVar1;
        param_2[3] = -iVar1;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


