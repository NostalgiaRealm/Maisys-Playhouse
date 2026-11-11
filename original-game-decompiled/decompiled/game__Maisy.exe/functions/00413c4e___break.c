
/* ==== __break @ 00413c4e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00413c4e-00413c4e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


