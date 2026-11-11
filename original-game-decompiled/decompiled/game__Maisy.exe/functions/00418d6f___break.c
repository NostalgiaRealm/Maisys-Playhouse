
/* ==== __break @ 00418d6f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00418d6f-00418d6f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


