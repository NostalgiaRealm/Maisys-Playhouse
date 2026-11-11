
/* ==== __break @ 00418d6d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00418d6d-00418d6d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


