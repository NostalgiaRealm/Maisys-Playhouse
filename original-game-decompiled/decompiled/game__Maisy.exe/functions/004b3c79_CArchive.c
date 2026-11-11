
/* ==== CArchive::CArchive @ 004b3c79 ==== 
 * signature: undefined __thiscall CArchive(CArchive * this, CFile * param_1, uint param_2, int param_3, void * param_4)
 * body: 004b3c79-004b3d66
 * note: Library Function - Single Match  public: __thiscall CArchive::CArchive(class CFile *,unsigned int,int,void *)  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    public: __thiscall CArchive::CArchive(class CFile *,unsigned int,int,void *)
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall
CArchive::CArchive(CArchive *this,CFile *param_1,uint param_2,int param_3,void *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_004919ec();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  (**(code **)(**(int **)(unaff_EBP + 8) + 0x20))(extraout_ECX + 4);
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[5] = uVar1;
  extraout_ECX[8] = uVar2;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xd] = 0;
  *extraout_ECX = 0;
  extraout_ECX[1] = 1;
  extraout_ECX[3] = 0xffffffff;
  extraout_ECX[0xf] = 0x10;
  if ((uVar1 & 1) != 0) {
    extraout_ECX[0xf] = 0x40;
  }
  iVar4 = *(int *)(unaff_EBP + 0x10);
  extraout_ECX[0xb] = *(undefined4 *)(unaff_EBP + 0x14);
  extraout_ECX[0x10] = 0x89;
  extraout_ECX[6] = 1;
  extraout_ECX[2] = 0;
  if (iVar4 < 0x80) {
    extraout_ECX[7] = 0x80;
    extraout_ECX[0xb] = 0;
  }
  else {
    extraout_ECX[7] = iVar4;
  }
  iVar4 = extraout_ECX[7];
  if (extraout_ECX[0xb] == 0) {
    iVar3 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x58))(3,0,0,0);
    extraout_ECX[2] = iVar3;
    if (iVar3 == 0) {
      iVar3 = FUN_004a5fed(extraout_ECX[7]);
      extraout_ECX[0xb] = iVar3;
      extraout_ECX[6] = 0;
    }
    else {
      iVar4 = 0;
    }
  }
  iVar4 = iVar4 + extraout_ECX[0xb];
  extraout_ECX[10] = iVar4;
  extraout_ECX[9] = iVar4;
  if ((*(byte *)(extraout_ECX + 5) & 1) == 0) {
    extraout_ECX[9] = extraout_ECX[0xb];
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


