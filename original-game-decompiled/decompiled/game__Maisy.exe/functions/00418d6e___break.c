
/* ==== __break @ 00418d6e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00418d6e-00418d6e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


