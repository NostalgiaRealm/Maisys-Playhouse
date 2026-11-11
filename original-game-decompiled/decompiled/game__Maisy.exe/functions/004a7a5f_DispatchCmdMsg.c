
/* ==== DispatchCmdMsg @ 004a7a5f ==== 
 * signature: int __cdecl DispatchCmdMsg(CCmdTarget * param_1, uint param_2, int param_3, _func_void * param_4, void * param_5, uint param_6, AFX_CMDHANDLERINFO * param_7)
 * body: 004a7a5f-004a7b50
 * note: Library Function - Single Match  int __cdecl DispatchCmdMsg(class CCmdTarget *,unsigned int,int,void (__thiscall CCmdTarget::*)(void),void *,unsigned int,struct AFX_CMDHANDLERINFO *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    int __cdecl DispatchCmdMsg(class CCmdTarget *,unsigned int,int,void (__thiscall
   CCmdTarget::*)(void),void *,unsigned int,struct AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 1998 Release */

int __cdecl
DispatchCmdMsg(CCmdTarget *param_1,uint param_2,int param_3,_func_void *param_4,void *param_5,
              uint param_6,AFX_CMDHANDLERINFO *param_7)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  if (param_7 != (AFX_CMDHANDLERINFO *)0x0) {
    *(CCmdTarget **)param_7 = param_1;
    *(_func_void **)(param_7 + 4) = param_4;
    return 1;
  }
  switch(param_6) {
  case 2:
    goto switchD_004a7a93_caseD_23;
  default:
    uVar2 = 0;
    break;
  case 0xc:
    (*param_4)();
    break;
  case 0xd:
    (*param_4)(param_2);
    break;
  case 0x23:
    goto switchD_004a7a93_caseD_23;
  case 0x26:
    (*param_4)(*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x27:
    goto switchD_004a7a93_caseD_23;
  case 0x28:
    (*param_4)(param_2,*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x29:
    goto switchD_004a7a93_caseD_23;
  case 0x2c:
    (*param_4)(param_5);
    iVar1 = *(int *)((int)param_5 + 0x1c);
    *(undefined4 *)((int)param_5 + 0x1c) = 0;
    uVar2 = (uint)(iVar1 == 0);
    break;
  case 0x2d:
    (*param_4)(param_5,param_2);
    iVar1 = *(int *)((int)param_5 + 0x1c);
    *(undefined4 *)((int)param_5 + 0x1c) = 0;
    uVar2 = (uint)(iVar1 == 0);
    break;
  case 0x2e:
    (*param_4)(param_5);
    break;
  case 0x2f:
switchD_004a7a93_caseD_23:
    uVar2 = (*param_4)();
  }
  return uVar2;
}


