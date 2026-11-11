
/* ==== FUN_00472ff0 @ 00472ff0 ==== 
 * signature: undefined __thiscall FUN_00472ff0(void * this, tagCREATESTRUCTA * param_1)
 * body: 00472ff0-00473057
 */

void __thiscall FUN_00472ff0(void *this,tagCREATESTRUCTA *param_1)

{
  uint uVar1;
  
  if (*(int *)(DAT_004d99a8 + 0xd0) == 0) {
    uVar1 = *(uint *)(param_1 + 0x20) & 0xff30ffff;
    *(uint *)(param_1 + 0x20) = uVar1;
    *(uint *)(param_1 + 0x20) = uVar1;
    *(uint *)(param_1 + 0x20) = uVar1;
    *(uint *)(param_1 + 0x20) = uVar1;
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffdff;
    *(uint *)(param_1 + 0x20) = uVar1;
    *(uint *)(param_1 + 0x20) = uVar1;
    CMDIFrameWnd::PreCreateWindow(this,param_1);
    return;
  }
  CMDIFrameWnd::PreCreateWindow(this,param_1);
  return;
}


