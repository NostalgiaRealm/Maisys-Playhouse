
/* ==== __break @ 00442b3e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00442b3e-00442b3e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


