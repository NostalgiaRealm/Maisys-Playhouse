
/* ==== GetAssocAt @ 004a5dd7 ==== 
 * signature: undefined4 * __thiscall GetAssocAt(void * this, uchar * param_1, uint * param_2)
 * body: 004a5dd7-004a5e2c
 * note: Library Function - Multiple Matches With Same Base Name  protected: struct CMapStringToOb::CAssoc * __thiscall CMapStringToOb::GetAssocAt(char const *,unsigned int &)const   protected: struct CMapStringToPtr::CAssoc * __thiscall CMapStringToPtr::GetAssocAt(char const *,unsigned int &)const   protected: struct CMapStringToString::CAssoc * __thiscall CMapStringToString::GetAssocAt(char const *,unsigned int &)const   Library: Visual Studio 1998 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    protected: struct CMapStringToOb::CAssoc * __thiscall CMapStringToOb::GetAssocAt(char const
   *,unsigned int &)const 
    protected: struct CMapStringToPtr::CAssoc * __thiscall CMapStringToPtr::GetAssocAt(char const
   *,unsigned int &)const 
    protected: struct CMapStringToString::CAssoc * __thiscall CMapStringToString::GetAssocAt(char
   const *,unsigned int &)const 
   
   Library: Visual Studio 1998 Release */

undefined4 * __thiscall GetAssocAt(void *this,uchar *param_1,uint *param_2)

{
  uchar uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uchar *puVar5;
  
  uVar3 = 0;
  uVar1 = *param_1;
  puVar5 = param_1;
  while (uVar1 != '\0') {
    uVar3 = uVar3 * 0x21 + (int)(char)*puVar5;
    puVar5 = puVar5 + 1;
    uVar1 = *puVar5;
  }
  uVar3 = uVar3 % *(uint *)((int)this + 8);
  *param_2 = uVar3;
  if (*(int *)((int)this + 4) != 0) {
    for (puVar2 = *(undefined4 **)(*(int *)((int)this + 4) + uVar3 * 4); puVar2 != (undefined4 *)0x0
        ; puVar2 = (undefined4 *)*puVar2) {
      iVar4 = __mbscmp((uchar *)puVar2[2],param_1);
      if (iVar4 == 0) {
        return puVar2;
      }
    }
  }
  return (undefined4 *)0x0;
}


